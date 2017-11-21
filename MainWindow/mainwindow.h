#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#define _WIN32_WINNT 0x0502
#include <QtWidgets/QMainWindow>
#include <QTimer>
#include <queue>
#include "ui_mainwindow.h"
#include <opencv2/opencv.hpp>
#include "SerialThread.h"
#include "AlgorithmThread.h"
#include "CapImageThread.h"
#include <QtGUI/QMovie>
using namespace std;
using namespace cv;
class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow(); 
	static queue<int> ff;
	static void CALLBACK onTimeFunc(UINT wTimerID, UINT msg, DWORD dwUser, DWORD dwl, DWORD dw2);

// public slots:
// 	void updateImage();
private slots:
   void StartCapImage();
   void OpenCom();
   void ShowImage();
   void ThreshChange(QString s);
   void Thresh1Change(QString s);
   void DetectSizeChange(QString s);
   void SleepTimeChange(QString s);
   void StartWork();
   void StopWork();

   int find_rect(Mat &src, int fsize, int thre2);
   void find_flaw(Mat &src, int fsize, int thre2, bool &flag);
   //static MMRESULT timer_id;
  
  
private:
	int aaa=0;
	VideoCapture videoCap;
	QTimer theTimer;
	Mat srcImage;
	Mat resultImage;
	Mat capImage;
	queue<int>q;
	QString ComName;
	QString ComName2;
	QString bufferDatas;
	Ui::MainWindow ui;
	CSerialPort mySerialPort2;
	CSerialPort mySerialPort1;
	void saveImage(Mat image) { imwrite("1.bmp", image); }
	QMutex mutex;
	int countnum;
	int sucessenum;
	int thresh;
	int detectsize;
	int thresh1;
	int sleepTime;
	int pop_comQue;
	QMovie *movie = new QMovie("photo.gif");
// protected:
// 	void paintEvent(QPaintEvent *e);
};

#endif // MAINWINDOW_H
