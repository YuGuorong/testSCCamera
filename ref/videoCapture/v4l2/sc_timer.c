#include"sc_log.h"
#include"sc_timer.h"
#include <time.h>


struct tm *GetCurrTimeAtom()
{
    time_t lt;
    time(&lt);
    return localtime(&lt);
}

void showCaculator(){
    time_t rawtime;
    struct tm * timeinfo; //������struct tm�ᱨ����
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    /*
    asctime ����-- תΪ��׼ASCIIʱ���ʽ������ �� �� ʱ���֣��� ��
    */
    LOGE("###The current date/time is: %s", asctime (timeinfo) );
}

//�Ҿ��������ȷ�ȿ��ܲ����ɣ�¼���ļ��Ļ�����ȷ��Ӧ�ÿ��ԣ����룬���ǱȽ�ʱ�仹��Ҫ��΢�밡��
void threadFunc(sc_timer_t *t) {
  //  prctl(PR_SET_NAME, (unsigned long)"StagefrightRecorder_timer", 0, 0, 0);

    //�̵߳����ȼ���
    //androidSetThreadPriority(0, ANDROID_PRIORITY_HIGHEST);
    //��������
   // Mutex::Autolock autoLock(mLock);
   sc_lock(&t->mLock);
    while (!t->mStopTimerFlag) {

	    time_t now;
    	time(&now);
	    //struct tm* tm_t;
    	//tm_t = localtime(&timer);
       //ALOGE( "#@@##timer[%d]- mStartRecordTime[%d]=[%d]", timer, mStartRecordTime,timer - mStartRecordTime);
	    if((now - t->mStartRecordTime) >= t->interval/*һ����*/){
			#if 0
		   // ALOGE("!!! 222 StagefrightRecorder timer thread is ryning now time hour=%d, min=%d, second=%d ,now timer=%d, mStartRecordTime=%d !!!", tm_t->tm_hour, tm_t->tm_min, tm_t->tm_sec, timer, mStartRecordTime);
    		//tm_t->tm_year+1900, tm_t->tm_mon+1, tm_t->tm_mday, tm_t->tm_hour, tm_t->tm_min, tm_t->tm_sec);
	    	//��ʱ����Ҫ��ɵĹ��� 60���ӵĶ�ʱ��
	    	ALOGE("####DO STH#####");
           #if 1
            recordByOneMinutes();
           #else
            showCaculator();
           #endif
           #endif

		   #if 0
			showCaculator();
		   #else
		   //	slogi("do do do ");
		   if(t->callback){
		   //	slogi("do callback");
		     t->callback(t->arg);
			 //		   	slogi("after do callback");

		   }
		   #endif
		    //���¼�ʱ
		    t->mStartRecordTime = now;
        }

        //��ʱ20��
        sleep(t->interval/5); //second
    	//usleep(30*1000);// milliseconds���밡
    }
	sc_unlock(&t->mLock);
}

#if 0
void recordByOneMinutes(){
    struct tm *newtime;
    char tmpbuf[128];

    newtime=GetCurrTimeAtom();
    //to get a filename named by current time
    strftime(tmpbuf, 128, "MEZB_%Y_%m_%d__%H_%M_%S.mp4", newtime);
    //    printf("%s\n",tmpbuf);
    char *basestr="/mnt/sdcard/";
    char mNewFilename[256];
    strcpy(mNewFilename,basestr);
    strcat(mNewFilename,tmpbuf);
    ALOGE("###the new filename[%s]",mNewFilename);
    //call this
    ALOGE("#####1 stop current worker thread  �bbegin");
    mMEWriter->stopCurWriter();
    ALOGE("#####1 stop current worker thread  �bend");

    ALOGE("#####2 reinit current worker thread");
    mMEWriter->reInit(mNewFilename);
    ALOGE("#####3 restart current worker thread");
    //a@zb begin : add this restart metadata  20140819
     //�����¼��һ�Σ����metadataҲӦ��������һ�� step2
    int64_t startTimeUs = systemTime() / 1000;
    setupMPEG4MetaData(startTimeUs, METotalBitRate, &MEMeta);
    ALOGE("##before restart: startTimeUs[%lld] METotalBitRate[%d]",startTimeUs,METotalBitRate);
    //a@end
    mMEWriter->restart(MEMeta.get());
    ALOGE("#####restart over");

}
#endif
//�߳�ʵ�壺
void * ThreadWrapper(void *timer) {
  //  StagefrightRecorder *recorder = static_cast<StagefrightRecorder *>(me);
 //   recorder->threadFunc();
    sc_timer_t *t=(sc_timer_t *)timer;
  /*
  ����ʽ����	time_t time(time_t *timer);
���f������	�͑Btime_t��01/19/2038֮3:14:07�Ͳ��������\����
���؄eע�⣬����һ�L����long int����춃���r�g֮���딵

ͷ�ļ���#include <time.h>

���庯����time_t time(time_t *t);

����˵�����˺����᷵�شӹ�Ԫ 1970 ��1 ��1 �յ�UTC ʱ���0 ʱ0 ��0 ���������������������������t ���ǿ�ָ��Ļ����˺���Ҳ�Ὣ����ֵ�浽t ָ����ָ���ڴ档

����ֵ���ɹ��򷵻�������ʧ���򷵻�((time_t)-1)ֵ������ԭ�����errno �С�
  */
    time(&t->mStartRecordTime);
	//struct tm* tm_t;
	time_t ttt;
   // tm_t = localtime(&ttt);
   LOGD("mStartRecordTime[%d]",t->mStartRecordTime);
  //  LOGD( "#@@##timer[%d]- mStartRecordTime[%d]=[%d]", ttt, t->mStartRecordTime,ttt - t->mStartRecordTime);
    t->state=1;
	threadFunc(t);

    return NULL;
}
void createTimerThread(sc_timer_t *t){
	GetCurrTimeAtom();
    //add to support timer 20140813
    {
        LOGE("create timer thread ....");
        pthread_attr_t attr;
        pthread_attr_init(&attr);
        pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);
        pthread_create(&t->mTimerThread, &attr, ThreadWrapper, (void *)t);
        pthread_attr_destroy(&attr);
    }
}
int timerNew(sc_timer_t **t,sc_timer_callback callback,void *arg){
	(*t)=malloc(sizeof(sc_timer_t));
	if(*t){
		memset(*t,0,sizeof(sc_timer_t));
		(*t)->callback=callback;
  		  (*t)->interval=30;
		  (*t)->arg=arg;
		createTimerThread(*t);
		return 0;
	}
	return -1;

}

int timerDelete(sc_timer_t *t){
	if(t)
	{
		if(t->state){
			pthread_join(t->mTimerThread,NULL);
			t->state=0;
		}
		free(t);
		t=NULL;
	}
	return 0;

}
