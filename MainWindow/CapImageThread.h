#pragma once
#include "qthread.h"
#include <opencv2/opencv.hpp>
using namespace cv;
class CapImageThread :public QThread
{
	Q_OBJECT
public:
	CapImageThread();
	CapImageThread(int i);
	~CapImageThread();
	void run();
private:
	VideoCapture videoCap;
	int cam_index;
	Mat SrcImage;
	volatile bool stoped;
	QMutex mutex;
	int time;
signals:
	void ImageProcessFinished(Mat image, int num);
};

