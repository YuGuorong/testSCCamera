// videoInputBasicDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
triangleApp TAPP;


void GLFWCALL keyfun( int key, int action )
{
    if( action != GLFW_PRESS )
    {
        return;
    }

    switch( key )
    {
	    case GLFW_KEY_ESC:
        	printf( "ESC => quit program\n" );
        	break;

    }

	TAPP.keyDown(key);

    fflush( stdout );
}






#if 1 //GLFW
int main( void )
{


    int     width, height, running, frames, x, y;
    double  t, t0, fps;
    char    titlestr[ 200 ];


    // Initialise GLFW
    glfwInit();

    // Open OpenGL window
    if (!glfwOpenWindow(1024,768,    // Open window
    24, 24, 24,                                // Red, green, and blue bits for color buffer
    24,                                        // Bits for alpha buffer
    24,                                        // Bits for depth buffer (Z-buffer)
    24,                                        // Bits for stencil buffer
    GLFW_WINDOW)){
        glfwTerminate();
        return 0;
    }

    glfwSetKeyCallback( keyfun );
    TAPP.init();
    glfwEnable( GLFW_STICKY_KEYS );
    // Disable vertical sync (on cards that support it)
    glfwSwapInterval( 1 );

    // Main loop
    running = GL_TRUE;
    frames = 0;
    t0 = glfwGetTime();
    while( running ){

        // Get time and mouse position
        t = glfwGetTime();
        glfwGetMousePos( &x, &y );

        // Calculate and display FPS (frames per second)
        if( (t-t0) > 1.0 || frames == 0 )
        {
            fps = (double)frames / (t-t0);
            sprintf( titlestr, "videoInput Demo App (%.1f FPS)", fps );
            glfwSetWindowTitle( titlestr );
            t0 = t;
            frames = 0;
        }
        frames ++;
        TAPP.idle();


        // Get window size (may be different than the requested size)
        glfwGetWindowSize( &width, &height );
        height = height > 0 ? height : 1;
        // Set viewport
        glViewport( 0, 0, width, height );
        // Clear color buffer
        glClearColor( 0.0f, 0.0f, 0.0f, 0.0f );
        glClear( GL_COLOR_BUFFER_BIT );

		  TAPP.draw();
        // Swap buffers
        glfwSwapBuffers();

        // Check if the ESC key was pressed or the window was closed
        running = !glfwGetKey( GLFW_KEY_ESC ) &&
                  glfwGetWindowParam( GLFW_OPENED );
    }

    // Close OpenGL window and terminate GLFW
    glfwTerminate();
    return 0;
}
#else
#if  0 //TEST_CONSOLE_KEYDOWN /* http://blog.codingnow.com/2006/08/nbstdin.html Windows ���Է�������ʽ��ȡ��׼����  */
#include <windows.h>
#include <process.h>
#include <stdio.h>
#include<iostream>
using namespace std;

#define BUFFER_MAX 1024

char g_nbstdin_buffer[2][BUFFER_MAX];
HANDLE g_input[2];
HANDLE g_process[2];

DWORD WINAPI console_input(LPVOID lpParameter)
{
	for (;;) {
		int i;
		for (i=0;i<2;i++) {
			fgets(g_nbstdin_buffer[i],BUFFER_MAX,stdin);
			SetEvent(g_input[i]);
            /*
                ���� dwMilliseconds Ϊ INFINITE ʱ������ֱ����Ӧʱ���¼�������ź�״̬�ŷ��أ������һֱ�ȴ���ȥ��
                ֱ�� WaitForSingleObject �з���ֱ��ִ�к���Ĵ��롣

                BYME:Ҳ����˵�ᵼ��������
            */
			WaitForSingleObject(g_process[i],INFINITE);
		}
	}
	return 0;
}

void create_nbstdin()
{
	int i;
	DWORD tid;
	CreateThread(NULL,1024,&console_input,0,0,&tid);
	for (i=0;i<2;i++) {
		g_input[i]=CreateEvent(NULL,FALSE,FALSE,NULL);
		g_process[i]=CreateEvent(NULL,FALSE,FALSE,NULL);
		g_nbstdin_buffer[i][0]='\0';
	}
}

const char* nbstdin()
{
	DWORD n=WaitForMultipleObjects(2,g_input,FALSE,0);
	if (n==WAIT_OBJECT_0 || n==WAIT_OBJECT_0+1) {
		n=n-WAIT_OBJECT_0;
		SetEvent(g_process[n]);
		return g_nbstdin_buffer[n];
	}
	else {
		return 0;
	}
}
/*
��Windows��Ӧ��ʹ�á�\r\n���ṩһ�λ���
����Linux��ֻ��Ҫ��\n���Ϳ����ˡ�

http://noding.bokee.com/3867119.html
��ν�س���������Щ���Ʒ������Ǵ���ǰ�ĵ紫���ֻ��Ŀ�������̳������ġ��س����Ǵ�ӡͷ��λ�����о�����ֽ��Dos/Windows��Unix/Linux�Իس���
���е�����������Dos/Windows��Ϊ0d=0d0a=0a����Unix/Linux������õ紫���ֻ��Ĺ�����ʽ�������ʵ�ǱȽ���ȷ�ģ���

�����ڻس�������Linux����"0d",��Windows����"0d0a".���ǿ���ͨ������ĳ������һ�£�
*/
string delEnter(const string src) // ���˵����еĻس����з�
{
	string des; /*����Ҫ�����ڴ�*/
	for (int i = 0; i < src.length(); i++)
	{
		char tempChar = src[i];
		if (tempChar != 10 && tempChar != 13)
			des.append(1, tempChar);
	}

	return des;
}
void main()
{
	create_nbstdin();
    int running=1;
	TAPP.init();
    TAPP.idle1();
	while (running){
		const char *line=nbstdin();
		Sleep(1000);
		if (line) {
			printf(">%s",line);
			string test = delEnter(line);
			cout << "remove enter :" << test << endl;
            if(strcmp(test.c_str(), "STOP")==0){
                printf("user input : STOP \n");
                running=0;
				getchar();
			}
			else
				printf("[%s]not equal to STOP \n",line);

		}
		else {
            /*

�� timeout = 0�� �� Sleep(0)������̵߳������Ŀ����ж������д��ڻ���ڵ�ǰ�߳����ȼ��ľ����̴߳��ڣ�
����ϵͳ�Ὣ��ǰ�̴߳Ӵ��������Ƴ��������������ȼ��ߵľ����߳����У�
��������ж����е�û�о����̻߳����о����̵߳����ȼ������ڵ�ǰ�߳����ȼ�����ô��ǰ�̻߳����ִ�У�����û�е��� Sleep(0)һ����
            */
			Sleep(0);
		}
	}
}

#else
   #if 0
     /**/
    int main(){
    int running=1;
        TAPP.init();
        while(running){
              TAPP.idle();
        }
    return 0;
}
   #else
   #include <stdio.h>

#include <windows.h>



/*volatile*/ bool g_bExit = false;



BOOL CALLBACK CosonleHandler(DWORD ev)

{

    BOOL bRet = FALSE;

    switch (ev)

    {

    case CTRL_CLOSE_EVENT:

        printf("exiting ...\n");

        g_bExit = true;

        bRet = TRUE;

        break;

    default:

        break;

    }

    return bRet;

}



int main()

{

    SetConsoleCtrlHandler(CosonleHandler, TRUE);
	TAPP.init();
  //  TAPP.idle1();

    while(!g_bExit){
//     printf("1");
    };

    printf("exit\n");

    system("pause");


    return 0;

}
   #endif

#endif
#endif

#if 0
#include "stdafx.h"
#include "videoInput.h"
#include <opencv2/highgui/highgui.hpp>

void StopEvent(int deviceID, void *userData) {
	videoInput vidInput = videoInput::getInstance();
	vidInput.closeDevice(deviceID);
}

int main(int argc, const char** argv) {

	videoInput vidInput = videoInput::getInstance();
	int num_devices = vidInput.listDevices();
	int cam_id = 0;

	// check we actually have attached devices, if not exit
	if (num_devices == 0){
		return -1;
	}

	// if we fail to setup a camera, exit
	if (!vidInput.setupDevice(cam_id, 1280, 720, 60)) {
		return -1;
	}

	// extract camera parameters, and set a default brightness
	CamParametrs CP = vidInput.getParametrs(cam_id);
	CP.Brightness.CurrentValue = 180;
	CP.Brightness.Flag = 0;
	vidInput.setParametrs(cam_id, CP);

	// sets callback function for emergency stop, e.g. pulling out camera
	vidInput.setEmergencyStopEvent(cam_id, NULL, StopEvent);

	cv::namedWindow("VideoInput Test", 1);
	CvSize size = cvSize(vidInput.getWidth(cam_id), vidInput.getHeight(cam_id));

	IplImage* frame;

	// VideoInput library uses IplImage
	frame = cvCreateImage(size, 8, 3);

	// main loop
	while (true) {

		if (vidInput.isFrameNew(cam_id)) {
			vidInput.getPixels(cam_id, (unsigned char *)frame->imageData);
			cv::Mat image(frame);
			cv::imshow("VideoInput Test", image);
		}

		char c = cv::waitKey(5);

		if (c == 27) {
			break;
		}
		else if (c == 49) {
			CP.Brightness.CurrentValue = 50;
			CP.Brightness.Flag = 1;
			vidInput.setParametrs(cam_id, CP);
		}
		else if (c == 50) {
			CP.Brightness.CurrentValue = 0;
			CP.Brightness.Flag = 2;
			vidInput.setParametrs(cam_id, CP);
		}

		if (!vidInput.isDeviceSetup(cam_id)) {
			break;
		}
	}

	// tidy up on exit
	vidInput.closeDevice(cam_id);
	cv::destroyAllWindows();


	return 0;
}

#endif
