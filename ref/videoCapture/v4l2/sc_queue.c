#include <assert.h> //for assert
#include<stdlib.h> //for malloc free
  #include <string.h> //for memset

#include "sc_queue.h"
#include"sc_log.h"

//#define CLEAR(x) memset(&(x), 0, sizeof(x))
static
int queue_init(sc_queue_t **q){

	(*q)=(sc_queue_t *)malloc(sizeof(sc_queue_t));
	if(*q){
		memset((*q),0,sizeof(sc_queue_t));
		return 0;
	}else{
	  (*q)=NULL;
	  return -1;
	}
}
sc_queue_t *queue_new(int size){
    sc_queue_t * q=NULL;
	if(queue_init(&q)==0){
		q->size=size;/*�����д�С���޵�*/
		q->level=0;
		q->head=q->tail=NULL;/*�Ӳ��Ӷ�һ����*/
		sc_lock_init(&q->mutex,NULL);
		LOGD("queue new OK");
	}else
		LOGD("queue new FAIL");
	return q;
}
void queue_delete(sc_queue_t *q){
	if(q){
		sc_lock(&q->mutex);
		//memset(q,0,sizeof(sc_queue_t));
		//free(q);
		//q=NULL;
		q->head=q->tail=NULL;
		q->size=q->level=0;
		sc_unlock(&q->mutex);

	}
}

int queue_empty(sc_queue_t *q){
	assert(q!=NULL);
	if(q->level==0)
		return 1;
	else
		return 0;
}
int queue_full(sc_queue_t *q){
	assert(q!=NULL);
	if(q->level==q->size)
		return 1;
	else
		return 0;
}


int queue_pushback(sc_queue_t * q, sc_pkt * pkt){
	sc_lock(&q->mutex);
	//slogi("pusback begin");

	//assert(q!=NULL && pkt!=NULL);
	if(q==NULL || pkt==NULL){
		LOGE("QUEUE PUSHBACK FAIL FOR EXCEPTION!");
		sc_unlock(&q->mutex);
		return 	QNULL_FAIL;/*Ҫexit��*/
	}
	if(queue_full(q))
	{
		sloge("queue is full [%d],cannot pushback",q->level);
		sc_unlock(&q->mutex);
		return QGNEL_FAIL;//-1;
	}

    sc_entry_t *entry=(sc_entry_t *)malloc(sizeof(sc_entry_t));
	memset(entry,0,sizeof(sc_entry_t));
	/*�ڴ���������������Ļ������֮��Ҫ��֤�ڴ治������*/
	entry->pkt=pkt;
	if(q->head==NULL){
		LOGD("first time pushback");
		/*head��tailһֱû������ڴ氡����ôtai�ļ�������û�ڴ�ģ�Ҳ���޷���ֵ��ʹ��*/
		q->head=entry; /*����tail��NULL������ᱨ��*/
        goto OK; /*ע�������*/
	}
	//LOGD("push one");
	q->tail->next=entry; /*��һ�β���ʱ��tail��û���κ�ָ��(����Ҳδ��������ڴ�)����ʱ��next�ǲ����ڵġ�*/
	//entry->prev=q->tail;
OK:
	entry->next=NULL;
	q->tail=entry;
	q->level+=1;
	sc_unlock(&q->mutex);
	//LOGD("push one ok");

	return 0;
}

/*pop֮��delete�ڴ�*/
int queue_popfront(sc_queue_t * q, sc_pkt **pkt){
	sc_lock(&q->mutex);
	if(q!=NULL){
		if(queue_empty(q)){
			slogi("empty popFAIL");
			sc_unlock(&q->mutex);
			return  QGNEL_FAIL;//-1;
		}
		slogi("q level [%d]",q->level);
		(*pkt)=q->head->pkt; //�������������Ⱑ�
		q->level-=1;
		if(q->level ==0 ){
			q->head=q->tail=NULL;
			goto DONE;
		}
		q->head=q->head->next;

DONE:
	sc_unlock(&q->mutex);
	  return 0;
	}else{
		slogi("Q IS NULL ,pop  fail");
		sc_unlock(&q->mutex);
		return QNULL_FAIL;
	}
}

