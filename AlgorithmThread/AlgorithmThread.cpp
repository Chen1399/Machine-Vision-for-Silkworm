#include "AlgorithmThread.h"


AlgorithmThread::AlgorithmThread()
{
	isfirst = true;
}

AlgorithmThread::AlgorithmThread(int i)
{
	stoped = false;
	al_index = i;
}
AlgorithmThread::~AlgorithmThread()
{
}
void AlgorithmThread::run() 
{
	vector<Mat> channels;
	Mat green_channel;
	while (!stoped)
	{
		if (isfirst){ isfirst = false; }
		if (src.data)
		{
// 
// 			if (src.channels() == 3)
// 			{
// 				split(src, channels);
// 				green_channel = channels.at(1).clone();
// 			}
// 			else green_channel = src;
			cvtColor(src, green_channel, CV_RGB2GRAY);
/*
			green_channel = MinFilter(green_channel, 11);
			Mat element = getStructuringElement(MORPH_CROSS, Size(11, 11));
			erode(green_channel, green_channel, element);
			//imwrite("6.bmp", green_channel);
			element = getStructuringElement(MORPH_CROSS, Size(7, 7));
			morphologyEx(green_channel, m_dImage, MORPH_OPEN, element);*/
// 			integral(green_channel, m_dImage, CV_32F);
// 			normalize(m_dImage, m_dImage, 0, 255, CV_MINMAX);
			m_dImage = green_channel;
			emit AlgorithmThreadFinished(m_dImage, al_index);
		}
		else continue;
	}
	stoped = false;
}
Mat AlgorithmThread::MinFilter(Mat src, int ksize)
{
	int r = (ksize - 1) / 2;
	Mat dst(cv::Size(src.cols, src.rows), CV_8UC1);
	for (int i = 0; i < src.rows - ksize; i++)
	{
		uchar *ptr = dst.ptr<uchar>(i);
		for (int j = 0; j < src.cols - ksize; j++)
		{
			Rect roi(j, i, ksize, ksize);
			Mat roi_of_image = src(roi);
			double minVal = 0, maxVal = 0;
			cv::Point minPt, maxPt;
			minVal = MinLoc(roi_of_image);
			//minMaxLoc(roi_of_image, &minVal, &maxVal, &minPt, &maxPt);
			ptr[j] = minVal;
		}
	}
	return dst;
}
int AlgorithmThread::MinLoc(Mat SrcImage)
{
	int minl = 255;
	for (int i = 0; i < SrcImage.rows; i++)
	{
		uchar *ptr = SrcImage.ptr<uchar>(i);
		for (int j = 0; j < SrcImage.cols; j++)
		{
			if (ptr[j] < minl)
			{
				minl = ptr[j];
			}
		}
	}
	return minl;
}