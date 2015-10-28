#include <stdlib.h> //for malloc free


#include"sc_frame.h"
#include"sc_log.h"

/*http://bbs.csdn.net/topics/340248549
�����е��ڴ���ջ�з��䣬��malloc�ڶ��������ڴ�
һ���strcpy�ǲ�����ڴ��ص��ģ���memcpy��⡣

http://www.zhihu.com/question/26053909
malloc������ڴ�ռ����ڶ��ϵģ����ɳ���Ա������ͷţ����߳���������ɲ���ϵͳ���գ���

�������㷵��temp˵��������ں�����ʹ�õ�������������ڴ�ռ䣬���Բ���Ҫ�ͷš�
*/
static sc_frame_t
*init_frame(int data_size){
     sc_frame_t * frame=NULL;
	 frame=(uint8_t *)malloc(sizeof(sc_frame_t));
	 if(frame){
		 uint8_t *data=NULL;
		 data=(uint8_t *)malloc(sizeof(uint8_t)*data_size);
		 if(data){
			 frame->data=data;
		 	 frame->len=data_size;
		 }else{
		     LOGE("malloc frame data fail");
		     frame->data=NULL;
			 frame->len=0;
		 }
	 }else
	 {
	 	LOGE("malloc frame fail");
	 }
	 return frame;
}


 sc_frame_t *new_frame(int  size){
     sc_frame_t *frame=init_frame(size);
	 if(frame==NULL){
		LOGE("NEW FRAME FAIL");
	 }
	// LOGD("new frame ok");
	 return frame;
}

/* http://zhidao.baidu.com/question/517834746.html
�������ʱ����ֻ������ָ����ռ�õ��ڴ��ַ����ָ����ָ��Ķ��ڴ�ĵ�ַ���������ų�����������٣��������ν�ġ��ڴ�й©��������һ��Ҫ�ֶ���free����
*/
int delete_frame(sc_frame_t *frame){
	LOGD("delete frame");
	if(frame){
	    if(frame->data)
		{
			free(frame->data);
			frame->data=NULL;
    	}
		free(frame);
		frame=NULL;
	}

}
