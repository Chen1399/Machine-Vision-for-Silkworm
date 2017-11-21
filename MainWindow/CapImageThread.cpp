#include "CapImageThread.h"


CapImageThread::CapImageThread()
{
}

CapImageThread::CapImageThread(int i)
{
	cam_index = i;
	stoped = false;
}

CapImageThread::~CapImageThread()
{
}
void CapImageThread::run()
{
	videoCap.open(cam_index);
	while (!stoped)
	{	
		//Sleep(time);
		videoCap >> SrcImage;
		if (SrcImage.data)
		{
			cvtColor(SrcImage, SrcImage, CV_BGR2RGB);//Qt��֧�ֵ���RGBͼ��, OpenCV��֧�ֵ���BGR  
			emit ImageProcessFinished(SrcImage, cam_index);
		}
	}
	stoped = false;
}