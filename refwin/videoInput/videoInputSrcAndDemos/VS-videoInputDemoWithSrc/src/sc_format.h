/*
  ֧��mjpeg  bgr24  yuv420p
  MEDIASUBTYPE_I420;//MEDIASUBTYPE_RGB24;
��ǰ��camera��     Logitech HD Pro Webcam C920


��2��  ��ѯ�������£�
J:\media\XLIVE\windows\videoInput\videoInputSrcAndDemos\VS-videoInputDemoWithSrc\Debug>ffmpeg -f dshow -list_options true -i video="Logitech HD Pro Webcam C920"
ffmpeg version N-80129-ga1953d4 Copyright (c) 2000-2016 the FFmpeg developers
  built with gcc 5.3.0 (GCC)
  configuration: --enable-gpl --enable-version3 --disable-w32threads --enable-nvenc --enable-avisynth --enable-bzlib --enable-fontconfig --enable-frei0r --enable-gnutls --enable-iconv --enable-libass --enable-libbluray --enable-libbs2b --enable-libcaca --enable-libfreetype --enable-libgme --enable-libgsm --enable-libilbc --enable-libmodplug --enable-libmfx --enable-libmp3lame --enable-libopencore-amrnb --enable-libopencore-amrwb --enable-libopenjpeg --enable-libopus --enable-librtmp --enable-libschroedinger --enable-libsnappy --enable-libsoxr --enable-libspeex --enable-libtheora --enable-libtwolame --enable-libvidstab --enable-libvo-amrwbenc --enable-libvorbis --enable-libvpx --enable-libwavpack --enable-libwebp --enable-libx264 --enable-libx265 --enable-libxavs --enable-libxvid --enable-libzimg --enable-lzma --enable-decklink --enable-zlib
  libavutil      55. 24.100 / 55. 24.100
  libavcodec     57. 43.100 / 57. 43.100
  libavformat    57. 37.101 / 57. 37.101
  libavdevice    57.  0.101 / 57.  0.101
  libavfilter     6. 46.100 /  6. 46.100
  libswscale      4.  1.100 /  4.  1.100
  libswresample   2.  0.101 /  2.  0.101
  libpostproc    54.  0.100 / 54.  0.100
[dshow @ 0000000000cb6ee0] DirectShow video device options (from video devices)
[dshow @ 0000000000cb6ee0]  Pin "捕获" (alternative pin name "0")
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=640x480 fps=5 max s=640x480 fps=30
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=160x90 fps=5 max s=160x90 fps=30
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=160x120 fps=5 max s=160x120 fps=30
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=176x144 fps=5 max s=176x144 fps=30
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=320x180 fps=5 max s=320x180 fps=30
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=320x240 fps=5 max s=320x240 fps=30
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=352x288 fps=5 max s=352x288 fps=30
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=432x240 fps=5 max s=432x240 fps=30
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=640x360 fps=5 max s=640x360 fps=30
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=800x448 fps=5 max s=800x448 fps=30
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=800x600 fps=5 max s=800x600 fps=30
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=864x480 fps=5 max s=864x480 fps=30
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=960x720 fps=5 max s=960x720 fps=30
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=1024x576 fps=5 max s=1024x576 fps=30
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=1280x720 fps=5 max s=1280x720 fps=30
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=1600x896 fps=5 max s=1600x896 fps=30
[dshow @ 0000000000cb6ee0]   vcodec=mjpeg  min s=1920x1080 fps=5 max s=1920x1080 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=640x480 fps=5 max s=640x480 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=160x90 fps=5 max s=160x90 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=160x120 fps=5 max s=160x120 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=176x144 fps=5 max s=176x144 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=320x180 fps=5 max s=320x180 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=320x240 fps=5 max s=320x240 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=352x288 fps=5 max s=352x288 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=432x240 fps=5 max s=432x240 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=640x360 fps=5 max s=640x360 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=800x448 fps=5 max s=800x448 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=800x600 fps=5 max s=800x600 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=864x480 fps=5 max s=864x480 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=960x720 fps=5 max s=960x720 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=1024x576 fps=5 max s=1024x576 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=1280x720 fps=5 max s=1280x720 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=1600x896 fps=5 max s=1600x896 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=1920x1080 fps=5 max s=1920x1080 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=2304x1296 fps=2 max s=2304x1296 fps=2
[dshow @ 0000000000cb6ee0]   pixel_format=bgr24  min s=2304x1536 fps=2 max s=2304x1536 fps=2
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=640x480 fps=5 max s=640x480 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=160x90 fps=5 max s=160x90 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=160x120 fps=5 max s=160x120 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=176x144 fps=5 max s=176x144 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=320x180 fps=5 max s=320x180 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=320x240 fps=5 max s=320x240 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=352x288 fps=5 max s=352x288 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=432x240 fps=5 max s=432x240 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=640x360 fps=5 max s=640x360 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=800x448 fps=5 max s=800x448 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=800x600 fps=5 max s=800x600 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=864x480 fps=5 max s=864x480 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=960x720 fps=5 max s=960x720 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=1024x576 fps=5 max s=1024x576 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=1280x720 fps=5 max s=1280x720 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=1600x896 fps=5 max s=1600x896 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=1920x1080 fps=5 max s=1920x1080 fps=30
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=2304x1296 fps=2 max s=2304x1296 fps=2
[dshow @ 0000000000cb6ee0]   pixel_format=yuv420p  min s=2304x1536 fps=2 max s=2304x1536 fps=2
video=Logitech HD Pro Webcam C920: Immediate exit requested

J:\media\XLIVE\windows\videoInput\videoInputSrcAndDemos\VS-videoInputDemoWithSrc\Debug>


*/


/*   http://www.cnblogs.com/azraelly/archive/2013/01/13/2858858.html RGB��YUV----ժ�ԡ�DirectShowʵ��ѡ��
������仰��RGB24����bgr24��
�� RGB24ʹ��24λ����ʾһ�����أ�RGB��������8λ��ʾ��ȡֵ��ΧΪ0-255��ע�����ڴ���RGB������������˳��Ϊ��BGR BGR BGR
*/


/*  Logitech Webcam C930e

J:\MYSELF\testSCCamera\refwin\videoInput\videoInputSrcAndDemos\VS-videoInputDemoWithSrc\Debug>ffmpeg -f dshow -list_options true -i video="Logitech Webcam C930e"
ffmpeg version N-80129-ga1953d4 Copyright (c) 2000-2016 the FFmpeg developers
  built with gcc 5.3.0 (GCC)
  configuration: --enable-gpl --enable-version3 --disable-w32threads --enable-nvenc --enable-avisynth --enable-bzlib --enable-fontconfig --enable-frei0r --enable-gnutls --enable-iconv --enable-libass --enable-libbluray --enabl
e-libbs2b --enable-libcaca --enable-libfreetype --enable-libgme --enable-libgsm --enable-libilbc --enable-libmodplug --enable-libmfx --enable-libmp3lame --enable-libopencore-amrnb --enable-libopencore-amrwb --enable-libopenjpe
g --enable-libopus --enable-librtmp --enable-libschroedinger --enable-libsnappy --enable-libsoxr --enable-libspeex --enable-libtheora --enable-libtwolame --enable-libvidstab --enable-libvo-amrwbenc --enable-libvorbis --enable-
libvpx --enable-libwavpack --enable-libwebp --enable-libx264 --enable-libx265 --enable-libxavs --enable-libxvid --enable-libzimg --enable-lzma --enable-decklink --enable-zlib
  libavutil      55. 24.100 / 55. 24.100
  libavcodec     57. 43.100 / 57. 43.100
  libavformat    57. 37.101 / 57. 37.101
  libavdevice    57.  0.101 / 57.  0.101
  libavfilter     6. 46.100 /  6. 46.100
  libswscale      4.  1.100 /  4.  1.100
  libswresample   2.  0.101 /  2.  0.101
  libpostproc    54.  0.100 / 54.  0.100
[dshow @ 0000000000166f40] DirectShow video device options (from video devices)
[dshow @ 0000000000166f40]  Pin "捕获" (alternative pin name "0")
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=640x480 fps=5 max s=640x480 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=640x480 fps=5 max s=640x480 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=160x120 fps=5 max s=160x120 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=160x120 fps=5 max s=160x120 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=176x144 fps=5 max s=176x144 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=176x144 fps=5 max s=176x144 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=320x180 fps=5 max s=320x180 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=320x180 fps=5 max s=320x180 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=320x240 fps=5 max s=320x240 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=320x240 fps=5 max s=320x240 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=352x288 fps=5 max s=352x288 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=352x288 fps=5 max s=352x288 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=424x240 fps=5 max s=424x240 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=424x240 fps=5 max s=424x240 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=480x270 fps=5 max s=480x270 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=480x270 fps=5 max s=480x270 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=640x360 fps=5 max s=640x360 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=640x360 fps=5 max s=640x360 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=800x448 fps=5 max s=800x448 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=800x448 fps=5 max s=800x448 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=800x600 fps=5 max s=800x600 fps=24
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=800x600 fps=5 max s=800x600 fps=24
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=848x480 fps=5 max s=848x480 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=848x480 fps=5 max s=848x480 fps=30
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=960x540 fps=5 max s=960x540 fps=15
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=960x540 fps=5 max s=960x540 fps=15
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=1024x576 fps=5 max s=1024x576 fps=15
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=1024x576 fps=5 max s=1024x576 fps=15
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=1280x720 fps=5 max s=1280x720 fps=10
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=1280x720 fps=5 max s=1280x720 fps=10  �����ʽ���10fps
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=1600x896 fps=5 max s=1600x896 fps=7.5
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=1600x896 fps=5 max s=1600x896 fps=7.5
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=1920x1080 fps=5 max s=1920x1080 fps=5
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=1920x1080 fps=5 max s=1920x1080 fps=5
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=2304x1296 fps=2 max s=2304x1296 fps=2
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=2304x1296 fps=2 max s=2304x1296 fps=2
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=2304x1536 fps=2 max s=2304x1536 fps=2
[dshow @ 0000000000166f40]   pixel_format=yuyv422  min s=2304x1536 fps=2 max s=2304x1536 fps=2
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=640x480 fps=5 max s=640x480 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=640x480 fps=5 max s=640x480 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=160x120 fps=5 max s=160x120 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=160x120 fps=5 max s=160x120 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=176x144 fps=5 max s=176x144 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=176x144 fps=5 max s=176x144 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=320x180 fps=5 max s=320x180 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=320x180 fps=5 max s=320x180 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=320x240 fps=5 max s=320x240 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=320x240 fps=5 max s=320x240 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=352x288 fps=5 max s=352x288 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=352x288 fps=5 max s=352x288 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=424x240 fps=5 max s=424x240 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=424x240 fps=5 max s=424x240 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=480x270 fps=5 max s=480x270 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=480x270 fps=5 max s=480x270 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=640x360 fps=5 max s=640x360 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=640x360 fps=5 max s=640x360 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=800x448 fps=5 max s=800x448 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=800x448 fps=5 max s=800x448 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=800x600 fps=5 max s=800x600 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=800x600 fps=5 max s=800x600 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=848x480 fps=5 max s=848x480 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=848x480 fps=5 max s=848x480 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=960x540 fps=5 max s=960x540 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=960x540 fps=5 max s=960x540 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=1024x576 fps=5 max s=1024x576 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=1024x576 fps=5 max s=1024x576 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=1280x720 fps=5 max s=1280x720 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=1280x720 fps=5 max s=1280x720 fps=30  �����ʽ��
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=1600x896 fps=5 max s=1600x896 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=1600x896 fps=5 max s=1600x896 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=1920x1080 fps=5 max s=1920x1080 fps=30
[dshow @ 0000000000166f40]   vcodec=mjpeg  min s=1920x1080 fps=5 max s=1920x1080 fps=30
video=Logitech Webcam C930e: Immediate exit requested
*/


/*
��2.3 ������RGB��YUV��ʽ

GUID ��ʽ����
MEDIASUBTYPE_RGB1 2ɫ��ÿ��������1λ��ʾ����Ҫ��ɫ��
MEDIASUBTYPE_RGB4 16ɫ��ÿ��������4λ��ʾ����Ҫ��ɫ��
MEDIASUBTYPE_RGB8 256ɫ��ÿ��������8λ��ʾ����Ҫ��ɫ��
MEDIASUBTYPE_RGB565 ÿ��������16λ��ʾ��RGB�����ֱ�ʹ��5λ��6λ��5λ
MEDIASUBTYPE_RGB555 ÿ��������16λ��ʾ��RGB������ʹ��5λ��ʣ�µ�1λ���ã�
MEDIASUBTYPE_RGB24 ÿ��������24λ��ʾ��RGB������ʹ��8λ
MEDIASUBTYPE_RGB32 ÿ��������32λ��ʾ��RGB������ʹ��8λ��ʣ�µ�8λ���ã�
MEDIASUBTYPE_ARGB32 ÿ��������32λ��ʾ��RGB������ʹ��8λ��ʣ�µ�8λ���ڱ�ʾAlphaͨ��ֵ��
MEDIASUBTYPE_YUY2 YUY2��ʽ����4:2:2��ʽ���
MEDIASUBTYPE_YUYV YUYV��ʽ��ʵ�ʸ�ʽ��YUY2��ͬ��
MEDIASUBTYPE_YVYU YVYU��ʽ����4:2:2��ʽ���
MEDIASUBTYPE_UYVY UYVY��ʽ����4:2:2��ʽ���
MEDIASUBTYPE_AYUV ��Alphaͨ����4:4:4 YUV��ʽ
MEDIASUBTYPE_Y41P Y41P��ʽ����4:1:1��ʽ���
MEDIASUBTYPE_Y411 Y411��ʽ��ʵ�ʸ�ʽ��Y41P��ͬ��
MEDIASUBTYPE_Y211 Y211��ʽ
MEDIASUBTYPE_IF09 IF09��ʽ
MEDIASUBTYPE_IYUV IYUV��ʽ
MEDIASUBTYPE_YV12 YV12��ʽ
MEDIASUBTYPE_YVU9 YVU9��ʽ

*/



/* ���ò���

J:\MYSELF\testSCCamera\refwin\videoInput\SI>ffmpeg -list_devices true -f dshow -i dummy
ffmpeg version N-80129-ga1953d4 Copyright (c) 2000-2016 the FFmpeg developers
  built with gcc 5.3.0 (GCC)
  configuration: --enable-gpl --enable-version3 --disable-w32threads --enable-nvenc --enable-avisynth --enable-bzlib --enable-fontconfig --enable-frei0r --enable-gnutls --enable-iconv --enable-libass --enable-libbluray --enable-libbs2b --enable-libcaca --enable-libfreetype --enable-libgme --enable-libgsm --enable-libilbc --enable-libmodplug --enable-libmfx --enable-libmp3lame --enable-libopencore-amrnb --enable-libopencore-amrwb --enable-libopenjpeg --enable-libopus --enable-librtmp --enable-libschroedinger --enable-libsnappy --enable-libsoxr --enable-libspeex --enable-libtheora --enable-libtwolame --enable-libvidstab --enable-libvo-amrwbenc --enable-libvorbis --enable-libvpx --enable-libwavpack --enable-libwebp --enable-libx264 --enable-libx265 --enable-libxavs --enable-libxvid --enable-libzimg --enable-lzma --enable-decklink --enable-zlib
  libavutil      55. 24.100 / 55. 24.100
  libavcodec     57. 43.100 / 57. 43.100
  libavformat    57. 37.101 / 57. 37.101
  libavdevice    57.  0.101 / 57.  0.101
  libavfilter     6. 46.100 /  6. 46.100
  libswscale      4.  1.100 /  4.  1.100
  libswresample   2.  0.101 /  2.  0.101
  libpostproc    54.  0.100 / 54.  0.100
[dshow @ 0000000001076f20] DirectShow video devices (some may be both video and audio devices)
[dshow @ 0000000001076f20]  "BudeBuai-6Plus"
[dshow @ 0000000001076f20]     Alternative name "@device_pnp_\\?\usb#vid_058f&pid_0688&mi_00#6&2dbf07c9&0&0000#{65e8773d-8f56-11d0-a3b9-00a0c9223196}\global"
[dshow @ 0000000001076f20] DirectShow audio devices
[dshow @ 0000000001076f20]  "麦克�?(Realtek High Definition Audio)"
[dshow @ 0000000001076f20]     Alternative name "@device_cm_{33D9A762-90C8-11D0-BD43-00A0C911CE86}\wave_{4F4D2A85-C542-4AFF-8E54-935785B76519}"
[dshow @ 0000000001076f20]  "Realtek Digital Input (Realtek High Definition Audio)"
[dshow @ 0000000001076f20]     Alternative name "@device_cm_{33D9A762-90C8-11D0-BD43-00A0C911CE86}\wave_{88B242C3-5D3C-44AA-ADC0-9477C42C6620}"
dummy: Immediate exit requested

J:\MYSELF\testSCCamera\refwin\videoInput\SI>ffmpeg -f dshow -list_options true -i video="BudeBuai-6Plus"
ffmpeg version N-80129-ga1953d4 Copyright (c) 2000-2016 the FFmpeg developers
  built with gcc 5.3.0 (GCC)
  configuration: --enable-gpl --enable-version3 --disable-w32threads --enable-nvenc --enable-avisynth --enable-bzlib --enable-fontconfig --enable-frei0r --enable-gnutls --enable-iconv --enable-libass --enable-libbluray --enable-libbs2b --enable-libcaca --enable-libfreetype --enable-libgme --enable-libgsm --enable-libilbc --enable-libmodplug --enable-libmfx --enable-libmp3lame --enable-libopencore-amrnb --enable-libopencore-amrwb --enable-libopenjpeg --enable-libopus --enable-librtmp --enable-libschroedinger --enable-libsnappy --enable-libsoxr --enable-libspeex --enable-libtheora --enable-libtwolame --enable-libvidstab --enable-libvo-amrwbenc --enable-libvorbis --enable-libvpx --enable-libwavpack --enable-libwebp --enable-libx264 --enable-libx265 --enable-libxavs --enable-libxvid --enable-libzimg --enable-lzma --enable-decklink --enable-zlib
  libavutil      55. 24.100 / 55. 24.100
  libavcodec     57. 43.100 / 57. 43.100
  libavformat    57. 37.101 / 57. 37.101
  libavdevice    57.  0.101 / 57.  0.101
  libavfilter     6. 46.100 /  6. 46.100
  libswscale      4.  1.100 /  4.  1.100
  libswresample   2.  0.101 /  2.  0.101
  libpostproc    54.  0.100 / 54.  0.100
[dshow @ 0000000000026f20] DirectShow video device options (from video devices)
[dshow @ 0000000000026f20]  Pin "捕获" (alternative pin name "0")
[dshow @ 0000000000026f20]   vcodec=mjpeg  min s=640x480 fps=30 max s=640x480 fps=30
[dshow @ 0000000000026f20]   vcodec=mjpeg  min s=640x480 fps=30 max s=640x480 fps=30
[dshow @ 0000000000026f20]   vcodec=mjpeg  min s=1280x720 fps=30 max s=1280x720 fps=30
[dshow @ 0000000000026f20]   vcodec=mjpeg  min s=1280x720 fps=30 max s=1280x720 fps=30
[dshow @ 0000000000026f20]   vcodec=mjpeg  min s=320x240 fps=30 max s=320x240 fps=30
[dshow @ 0000000000026f20]   vcodec=mjpeg  min s=320x240 fps=30 max s=320x240 fps=30
[dshow @ 0000000000026f20]   vcodec=mjpeg  min s=800x600 fps=30 max s=800x600 fps=30
[dshow @ 0000000000026f20]   vcodec=mjpeg  min s=800x600 fps=30 max s=800x600 fps=30
[dshow @ 0000000000026f20]   pixel_format=yuyv422  min s=640x480 fps=30 max s=640x480 fps=30
[dshow @ 0000000000026f20]   pixel_format=yuyv422  min s=640x480 fps=30 max s=640x480 fps=30
[dshow @ 0000000000026f20]   pixel_format=yuyv422  min s=320x240 fps=30 max s=320x240 fps=30
[dshow @ 0000000000026f20]   pixel_format=yuyv422  min s=320x240 fps=30 max s=320x240 fps=30
[dshow @ 0000000000026f20]   pixel_format=yuyv422  min s=1280x720 fps=10 max s=1280x720 fps=10
[dshow @ 0000000000026f20]   pixel_format=yuyv422  min s=1280x720 fps=10 max s=1280x720 fps=10
video=BudeBuai-6Plus: Immediate exit requested

J:\MYSELF\testSCCamera\refwin\videoInput\SI>


*/
