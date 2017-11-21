/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *capimage1;
    QLabel *m_station1_totalnum;
    QLabel *m_station1_passnum;
    QLabel *m_station1_failnum;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *cam_win_1;
    QLineEdit *ck_edit;
    QLabel *label;
    QPushButton *ckopen_Button;
    QLabel *ckStatus_label;
    QLabel *label_1;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit1;
    QLabel *label_5;
    QLineEdit *lineEdit2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *cam_win_2;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_gif;
    QLabel *label_10;
    QLineEdit *lineEdit_2;
    QLabel *label_11;
    QLineEdit *ck_edit2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1410, 1022);
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        capimage1 = new QPushButton(centralwidget);
        capimage1->setObjectName(QStringLiteral("capimage1"));
        capimage1->setGeometry(QRect(1110, 90, 121, 41));
        m_station1_totalnum = new QLabel(centralwidget);
        m_station1_totalnum->setObjectName(QStringLiteral("m_station1_totalnum"));
        m_station1_totalnum->setGeometry(QRect(1240, 890, 131, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        m_station1_totalnum->setFont(font);
        m_station1_passnum = new QLabel(centralwidget);
        m_station1_passnum->setObjectName(QStringLiteral("m_station1_passnum"));
        m_station1_passnum->setGeometry(QRect(1240, 790, 141, 41));
        m_station1_passnum->setFont(font);
        m_station1_failnum = new QLabel(centralwidget);
        m_station1_failnum->setObjectName(QStringLiteral("m_station1_failnum"));
        m_station1_failnum->setGeometry(QRect(1240, 840, 131, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        m_station1_failnum->setFont(font1);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(1061, 840, 151, 91));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        cam_win_1 = new QLabel(centralwidget);
        cam_win_1->setObjectName(QStringLiteral("cam_win_1"));
        cam_win_1->setGeometry(QRect(230, 60, 651, 431));
        ck_edit = new QLineEdit(centralwidget);
        ck_edit->setObjectName(QStringLiteral("ck_edit"));
        ck_edit->setGeometry(QRect(1210, 510, 100, 30));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1060, 510, 141, 30));
        ckopen_Button = new QPushButton(centralwidget);
        ckopen_Button->setObjectName(QStringLiteral("ckopen_Button"));
        ckopen_Button->setGeometry(QRect(1320, 510, 60, 81));
        ckStatus_label = new QLabel(centralwidget);
        ckStatus_label->setObjectName(QStringLiteral("ckStatus_label"));
        ckStatus_label->setGeometry(QRect(1170, 620, 241, 20));
        label_1 = new QLabel(centralwidget);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(1060, 790, 151, 41));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(1200, 380, 120, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(1060, 374, 121, 31));
        lineEdit1 = new QLineEdit(centralwidget);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));
        lineEdit1->setGeometry(QRect(1200, 420, 120, 21));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(1060, 420, 121, 31));
        lineEdit2 = new QLineEdit(centralwidget);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));
        lineEdit2->setGeometry(QRect(1200, 460, 120, 21));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1060, 460, 131, 31));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1060, 610, 111, 40));
        cam_win_2 = new QLabel(centralwidget);
        cam_win_2->setObjectName(QStringLiteral("cam_win_2"));
        cam_win_2->setGeometry(QRect(230, 510, 651, 321));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(920, 710, 311, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        label_8->setFont(font2);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(1240, 720, 181, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        label_9->setFont(font3);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1110, 170, 121, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1110, 250, 121, 41));
        label_gif = new QLabel(centralwidget);
        label_gif->setObjectName(QStringLiteral("label_gif"));
        label_gif->setGeometry(QRect(1180, 1190, 291, 131));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(1060, 320, 121, 51));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(1200, 340, 120, 21));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(1060, 560, 141, 30));
        ck_edit2 = new QLineEdit(centralwidget);
        ck_edit2->setObjectName(QStringLiteral("ck_edit2"));
        ck_edit2->setGeometry(QRect(1210, 560, 100, 30));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1410, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\205\250\350\207\252\345\212\250\351\233\214\351\233\204\350\232\225\350\233\271\345\210\206\351\200\211\346\234\272 V2.0", 0));
        capimage1->setText(QApplication::translate("MainWindow", "\351\207\207\351\233\206\345\233\276\345\203\217", 0));
        m_station1_totalnum->setText(QApplication::translate("MainWindow", "0", 0));
        m_station1_passnum->setText(QApplication::translate("MainWindow", "0", 0));
        m_station1_failnum->setText(QApplication::translate("MainWindow", "0", 0));
        label_2->setText(QApplication::translate("MainWindow", "\351\233\204\350\233\271\346\225\260\351\207\217", 0));
        label_3->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\346\200\273\346\225\260", 0));
        cam_win_1->setText(QString());
        ck_edit->setText(QApplication::translate("MainWindow", "4", 0));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\347\253\257\345\217\2431", 0));
        ckopen_Button->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0));
        ckStatus_label->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", 0));
        label_1->setText(QApplication::translate("MainWindow", "\351\233\214\350\233\271\346\225\260\351\207\217", 0));
        lineEdit->setText(QApplication::translate("MainWindow", "8", 0));
        label_4->setText(QApplication::translate("MainWindow", "\351\230\210\345\200\274\345\217\202\346\225\260", 0));
        lineEdit1->setText(QApplication::translate("MainWindow", "20", 0));
        label_5->setText(QApplication::translate("MainWindow", "\351\235\242\347\247\257\345\217\202\346\225\260", 0));
        lineEdit2->setText(QApplication::translate("MainWindow", "80", 0));
        label_6->setText(QApplication::translate("MainWindow", "\350\276\205\345\212\251\347\263\273\346\225\260", 0));
        label_7->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\347\212\266\346\200\201:", 0));
        cam_win_2->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\346\243\200\346\265\213\347\273\223\346\236\234\357\274\232", 0));
        label_9->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "\351\200\273\350\276\221\345\244\215\344\275\215", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\270\205\351\233\266", 0));
        label_gif->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "\345\273\266\346\227\266\345\217\202\346\225\260", 0));
        lineEdit_2->setText(QApplication::translate("MainWindow", "3500", 0));
        label_11->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\347\253\257\345\217\2432", 0));
        ck_edit2->setText(QApplication::translate("MainWindow", "6", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
