#include "mainwindow.h"
queue<int> MainWindow::ff;
void CALLBACK MainWindow::onTimeFunc(UINT wTimerID, UINT msg, DWORD dwUser, DWORD dwl, DWORD dw2)
{
	ff.push(1);
	//((MainWindow*)dwUser)->onTimeFunc2(wTimerID, msg,dwl,dw2);
}

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QImage imageshow("timg.jpg");
	countnum = sucessenum = 0;
	thresh = 8;
	thresh1 = 20;
	detectsize = 80;
	sleepTime = 3500;
// 	imageshow.scaledToHeight(127);
// 	imageshow.scaledToWidth(300);
	ui.label_gif->setScaledContents(true);
	ui.label_gif->setPixmap(QPixmap::fromImage(imageshow));
	ui.label_gif->setFixedSize(300, 127);
	ui.lineEdit->setText(QString::number(thresh));
	ui.lineEdit1->setText(QString::number(thresh1));
	ui.lineEdit2->setText(QString::number(detectsize));
	ui.lineEdit_2->setText(QString::number(sleepTime));
	qRegisterMetaType<Mat>("Mat");
	this->setWindowIcon(QIcon(":MainWindow/Resources/icon.ico"));
	////////////////////////////////////////////////////////公共部分和工位1
	connect(&theTimer, &QTimer::timeout, this, &MainWindow::ShowImage);
	connect(ui.capimage1, SIGNAL(clicked()), this, SLOT(StartCapImage()));
	connect(ui.ckopen_Button, SIGNAL(clicked()), this, SLOT(OpenCom()));
	connect(ui.lineEdit, SIGNAL(textChanged(QString)), this, SLOT(ThreshChange(QString)));
	connect(ui.lineEdit1, SIGNAL(textChanged(QString)), this, SLOT(Thresh1Change(QString)));
	connect(ui.lineEdit2, SIGNAL(textChanged(QString)), this, SLOT(DetectSizeChange(QString)));
	connect(ui.lineEdit_2, SIGNAL(textChanged(QString)), this, SLOT(SleepTimeChange(QString)));
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(StartWork()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(StopWork()));
}
MainWindow::~MainWindow()
{
}

void MainWindow::ShowImage()
{
	QImage image;
	videoCap >> capImage;
	Mat imagetoshow;
	if (capImage.data)
	{
		cvtColor(capImage, imagetoshow, CV_BGR2RGB);  //changed
		QImage image1 = QImage((uchar*)(imagetoshow.data), imagetoshow.cols, imagetoshow.rows, QImage::Format_RGB888);
		ui.cam_win_2->setPixmap(QPixmap::fromImage(image1));
		ui.cam_win_2->show();
	}
	if (mySerialPort1.flag == true || mySerialPort2.flag == true) {
		
		int result;
		if (mySerialPort1.flag == true) {
			
			result = 1;
			Sleep(300);
			if (mySerialPort2.flag == true) {
				result = 3;
				
			}
		}
		else if(mySerialPort2.flag == true) {
			
			result = 2;
			Sleep(300);
			if (mySerialPort1.flag == true) {
				result = 3;
				
			}
		}
		q.push(result);
		MMRESULT timer_id = timeSetEvent(sleepTime, 1, (LPTIMECALLBACK)onTimeFunc, DWORD(1), TIME_ONESHOT);
		mySerialPort2.flag = false;
		mySerialPort1.flag = false;
	}
	if (!ff.empty()&& ff.front() == 1){
		ff.pop();
		stringstream ss;
		ss << aaa++;
		imwrite("E:\\dataset\\" + ss.str() + ".jpg", capImage);
		//Mat wa;
		//wa = imread("E:\\dataset\\1.jpg");
		cvtColor(capImage, srcImage, CV_BGR2GRAY);
		//cvtColor(wa, srcImage, CV_BGR2GRAY);
		Mat element = getStructuringElement(MORPH_CROSS, Size(3, 3));
		erode(srcImage, srcImage, element);
		threshold(srcImage, srcImage, thresh, 255, THRESH_BINARY);
		QImage image;
		image = QImage((uchar*)(srcImage.data), srcImage.cols, srcImage.rows, QImage::Format_Indexed8);
		ui.cam_win_1->setPixmap(QPixmap::fromImage(image));
		ui.cam_win_1->show();
		int sex = find_rect(srcImage, thresh1, detectsize);
		int res = q.front();
		unsigned char p[1];
		q.pop();
		if (res == 1) {
			countnum++;
			if (sex == 1) {
				sucessenum++;
				p[0] = '1';
				mySerialPort1.WriteData(p, 3);
				p[0] = 0x0d;
				mySerialPort1.WriteData(p, 1);
				p[0] = 0x0a;
				mySerialPort1.WriteData(p, 1);
			}
			else
			{
				p[0] = '2';
				mySerialPort1.WriteData(p, 3);
				p[0] = 0x0d;
				mySerialPort1.WriteData(p, 1);
				p[0] = 0x0a;
				mySerialPort1.WriteData(p, 1);
			}
		}
		else if (res == 2) {
			countnum++;
			if (sex == 2) {
				sucessenum++;
				p[0] = '1';
				mySerialPort2.WriteData(p, 3);
				p[0] = 0x0d;
				mySerialPort2.WriteData(p, 1);
				p[0] = 0x0a;
				mySerialPort2.WriteData(p, 1);
			}
			else
			{
				p[0] = '2';
				mySerialPort2.WriteData(p, 3);
				p[0] = 0x0d;
				mySerialPort2.WriteData(p, 1);
				p[0] = 0x0a;
				mySerialPort2.WriteData(p, 1);
			}
		}
		else if (res == 3) {
			countnum+=2;
			if (sex == 1) {
				sucessenum++;
				p[0] = '1';
				mySerialPort1.WriteData(p, 3);
				p[0] = 0x0d;
				mySerialPort1.WriteData(p, 1);
				p[0] = 0x0a;
				mySerialPort1.WriteData(p, 1);
				p[0] = '2';
				mySerialPort2.WriteData(p, 3);
				p[0] = 0x0d;
				mySerialPort2.WriteData(p, 1);
				p[0] = 0x0a;
				mySerialPort2.WriteData(p, 1);
			}
			else if (sex == 2) {
				sucessenum++;
				p[0] = '1';
				mySerialPort2.WriteData(p, 3);
				p[0] = 0x0d;
				mySerialPort2.WriteData(p, 1);
				p[0] = 0x0a;
				mySerialPort2.WriteData(p, 1);
				p[0] = '2';
				mySerialPort1.WriteData(p, 3);
				p[0] = 0x0d;
				mySerialPort1.WriteData(p, 1);
				p[0] = 0x0a;
				mySerialPort1.WriteData(p, 1);
			}
			else if (sex == 3) {
				sucessenum += 2;
				p[0] = '1';
				mySerialPort2.WriteData(p, 3);
				p[0] = 0x0d;
				mySerialPort2.WriteData(p, 1);
				p[0] = 0x0a;
				mySerialPort2.WriteData(p, 1);
				p[0] = '1';
				mySerialPort1.WriteData(p, 3);
				p[0] = 0x0d;
				mySerialPort1.WriteData(p, 1);
				p[0] = 0x0a;
				mySerialPort1.WriteData(p, 1);
			}
			else {
				p[0] = '2';
				mySerialPort2.WriteData(p, 3);
				p[0] = 0x0d;
				mySerialPort2.WriteData(p, 1);
				p[0] = 0x0a;
				mySerialPort2.WriteData(p, 1);
				p[0] = '2';
				mySerialPort1.WriteData(p, 3);
				p[0] = 0x0d;
				mySerialPort1.WriteData(p, 1);
				p[0] = 0x0a;
				mySerialPort1.WriteData(p, 1);
			}
		}
		ui.m_station1_totalnum->setText(QString::number(countnum));
		ui.m_station1_passnum->setText(QString::number(sucessenum));
		ui.m_station1_failnum->setText(QString::number(countnum - sucessenum));
	}
}
void MainWindow::StartWork()
{
	//mySerialPort1.WriteData("1",1);
	//mySerialPort2.WriteData("1",1);
}
void MainWindow::StopWork()
{
	//mySerialPort1.WriteData("2", 1);
	//mySerialPort2.WriteData("2", 1);
	int a = 1;
	double b = (int)a;
	ui.label_9->setText(QString(""));
	sucessenum = countnum = 0;
	ui.m_station1_passnum->setText(QString::number(sucessenum));
	ui.m_station1_failnum->setText(QString::number(countnum - sucessenum));
	ui.m_station1_totalnum->setText(QString::number(countnum));
}
void MainWindow::StartCapImage()
{
	theTimer.start(20);
	videoCap.open(0);
}
void MainWindow::ThreshChange(QString s)
{
	thresh = s.toInt();
}
void MainWindow::Thresh1Change(QString s)
{
	thresh1 = s.toInt();
}
void MainWindow::SleepTimeChange(QString s)
{
	sleepTime = s.toInt();
}
void MainWindow::DetectSizeChange(QString s)
{
	detectsize = s.toInt();
}
void MainWindow::OpenCom()
{
	QString status="";
	mySerialPort1.CloseListenTread();
	mySerialPort2.CloseListenTread();
	ComName = ui.ck_edit->text();
	ComName2 = ui.ck_edit2->text();
	int a = ComName.toInt();
	int b = ComName2.toInt();
	if (ComName.isEmpty() || ComName2.isEmpty() || !mySerialPort1.InitPort(a) || !mySerialPort2.InitPort(b)
		|| !mySerialPort1.OpenListenThread() || !mySerialPort2.OpenListenThread())
	{
		status = QString::fromLocal8Bit("开启串口失败");
		ui.ckStatus_label->setText(status);
		return;
	}
	else
	{
		mySerialPort1.comName = a;
		mySerialPort2.comName = b;
		status = QString::fromLocal8Bit("已打开串口");
		ui.ckStatus_label->setText(status);
		return;
	}
}

void MainWindow::find_flaw(Mat &src, int fsize, int thre2, bool &flag)
{
	Mat Integral_Image;
	float sum = 0;
	integral(src, Integral_Image, CV_32F);
	//normalize(Integral_Image, Integral_Image, 0, 255, CV_MINMAX);
	//imwrite("mb1.bmp", Integral_Image);
	for (int i = 0; i < src.rows - fsize; i++)
	{
		for (int j = 0; j < src.cols - fsize; j++)
		{
			sum = Integral_Image.at<float>(i, j) - Integral_Image.at<float>(i + fsize, j) - Integral_Image.at<float>(i, j + fsize) + Integral_Image.at<float>(i + fsize, j + fsize);
			if (sum >= thre2*fsize*fsize)
			{
				Rect rect;
				rect.x = j;
				rect.y = i;
				rect.width = rect.height = fsize;
				rectangle(src, rect, 125, 2);
				flag = true;
				return;
			}
		}
	}
}


int MainWindow::find_rect(Mat &src, int fsize, int thre2) {
	Mat src1 = src(Rect(0, 205, src.cols / 2, 165));
	Mat src2 = src(Rect(src.cols / 2, 205, src.cols / 2, 165));
	int num = 0;
	bool flag = false;
	find_flaw(src1, fsize, thre2, flag);
	if (flag == true) {
		num = 1;
	}
	flag = false;
	find_flaw(src2, fsize, thre2, flag);
	if (flag == true) {
		num += 2;
	}
	return num;
}
