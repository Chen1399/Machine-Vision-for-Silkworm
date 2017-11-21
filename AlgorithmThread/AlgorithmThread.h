#pragma once
#include <QThread>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
class AlgorithmThread :public QThread
{
	Q_OBJECT
public:
	AlgorithmThread();
	AlgorithmThread(int i);
	~AlgorithmThread();
	void run();
	void SetDetectImage(Mat &DetectImage) { mutex.lock();  src = DetectImage.clone(); mutex.unlock(); }
	//Mat Image() const { return m_dImage; }
private:
	Mat MinFilter(Mat src, int ksize);
	int MinLoc(Mat SrcImage);
	Mat src;
	Mat m_dImage;
	volatile bool stoped;
	int al_index;
	bool isfirst;
	QMutex mutex;
signals:
	void AlgorithmThreadFinished(Mat Image,int al_index);
};

