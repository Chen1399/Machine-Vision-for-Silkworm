#include "mainwindow.h"
#include <QtWidgets/QApplication>
#include <QFile>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QFile file("3.qss");
	file.open(QFile::ReadOnly);
	QString styleSheet = QLatin1String(file.readAll());
	qApp->setStyleSheet(styleSheet);
	MainWindow w;
	w.show();
	return a.exec();
}