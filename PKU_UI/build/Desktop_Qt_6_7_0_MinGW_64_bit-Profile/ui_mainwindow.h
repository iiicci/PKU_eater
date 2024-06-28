/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditSearch;
    QPushButton *pushButtonSearch;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *imglabel_1;
    QLabel *imglabel_2;
    QLabel *imglabel_3;
    QLabel *imglabel_4;
    QLabel *imglabel_5;
    QLabel *imglabel_6;
    QPushButton *pushButtonChange;
    QPushButton *imgButton_1;
    QPushButton *imgButton_2;
    QPushButton *imgButton_3;
    QPushButton *imgButton_4;
    QPushButton *imgButton_5;
    QPushButton *imgButton_6;
    QPushButton *RandomButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(480, 672);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 20, 371, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditSearch = new QLineEdit(layoutWidget);
        lineEditSearch->setObjectName("lineEditSearch");

        horizontalLayout->addWidget(lineEditSearch);

        pushButtonSearch = new QPushButton(layoutWidget);
        pushButtonSearch->setObjectName("pushButtonSearch");

        horizontalLayout->addWidget(pushButtonSearch);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 60, 371, 34));
        layoutWidget1->setAcceptDrops(true);
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(layoutWidget1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setAcceptDrops(true);

        horizontalLayout_2->addWidget(comboBox);

        comboBox_2 = new QComboBox(layoutWidget1);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setAcceptDrops(true);

        horizontalLayout_2->addWidget(comboBox_2);

        comboBox_3 = new QComboBox(layoutWidget1);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setAcceptDrops(true);
        comboBox_3->setEditable(false);
        comboBox_3->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_2->addWidget(comboBox_3);

        imglabel_1 = new QLabel(centralwidget);
        imglabel_1->setObjectName("imglabel_1");
        imglabel_1->setGeometry(QRect(50, 204, 169, 113));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(imglabel_1->sizePolicy().hasHeightForWidth());
        imglabel_1->setSizePolicy(sizePolicy);
        imglabel_1->setFrameShape(QFrame::Box);
        imglabel_1->setScaledContents(false);
        imglabel_1->setAlignment(Qt::AlignCenter);
        imglabel_2 = new QLabel(centralwidget);
        imglabel_2->setObjectName("imglabel_2");
        imglabel_2->setGeometry(QRect(250, 204, 169, 113));
        sizePolicy.setHeightForWidth(imglabel_2->sizePolicy().hasHeightForWidth());
        imglabel_2->setSizePolicy(sizePolicy);
        imglabel_2->setFrameShape(QFrame::Box);
        imglabel_2->setScaledContents(false);
        imglabel_2->setAlignment(Qt::AlignCenter);
        imglabel_3 = new QLabel(centralwidget);
        imglabel_3->setObjectName("imglabel_3");
        imglabel_3->setGeometry(QRect(50, 347, 169, 113));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(imglabel_3->sizePolicy().hasHeightForWidth());
        imglabel_3->setSizePolicy(sizePolicy1);
        imglabel_3->setFrameShape(QFrame::Box);
        imglabel_3->setScaledContents(true);
        imglabel_3->setAlignment(Qt::AlignCenter);
        imglabel_4 = new QLabel(centralwidget);
        imglabel_4->setObjectName("imglabel_4");
        imglabel_4->setGeometry(QRect(250, 347, 169, 113));
        sizePolicy.setHeightForWidth(imglabel_4->sizePolicy().hasHeightForWidth());
        imglabel_4->setSizePolicy(sizePolicy);
        imglabel_4->setFrameShape(QFrame::Box);
        imglabel_4->setScaledContents(false);
        imglabel_4->setAlignment(Qt::AlignCenter);
        imglabel_5 = new QLabel(centralwidget);
        imglabel_5->setObjectName("imglabel_5");
        imglabel_5->setGeometry(QRect(50, 490, 169, 113));
        sizePolicy.setHeightForWidth(imglabel_5->sizePolicy().hasHeightForWidth());
        imglabel_5->setSizePolicy(sizePolicy);
        imglabel_5->setFrameShape(QFrame::Box);
        imglabel_5->setScaledContents(false);
        imglabel_5->setAlignment(Qt::AlignCenter);
        imglabel_6 = new QLabel(centralwidget);
        imglabel_6->setObjectName("imglabel_6");
        imglabel_6->setGeometry(QRect(250, 490, 169, 113));
        sizePolicy.setHeightForWidth(imglabel_6->sizePolicy().hasHeightForWidth());
        imglabel_6->setSizePolicy(sizePolicy);
        imglabel_6->setFrameShape(QFrame::Box);
        imglabel_6->setScaledContents(false);
        imglabel_6->setAlignment(Qt::AlignCenter);
        pushButtonChange = new QPushButton(centralwidget);
        pushButtonChange->setObjectName("pushButtonChange");
        pushButtonChange->setGeometry(QRect(50, 110, 371, 22));
        imgButton_1 = new QPushButton(centralwidget);
        imgButton_1->setObjectName("imgButton_1");
        imgButton_1->setGeometry(QRect(0, 0, 1, 1));
        imgButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(52, 152, 219, 0); /* 0.5 is 50% transparency */\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
""));
        imgButton_2 = new QPushButton(centralwidget);
        imgButton_2->setObjectName("imgButton_2");
        imgButton_2->setGeometry(QRect(0, 10, 1, 1));
        imgButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(52, 152, 219, 0); /* 0.5 is 50% transparency */\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
""));
        imgButton_3 = new QPushButton(centralwidget);
        imgButton_3->setObjectName("imgButton_3");
        imgButton_3->setGeometry(QRect(10, 10, 1, 1));
        imgButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(52, 152, 219, 0); /* 0.5 is 50% transparency */\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
""));
        imgButton_4 = new QPushButton(centralwidget);
        imgButton_4->setObjectName("imgButton_4");
        imgButton_4->setGeometry(QRect(0, 10, 1, 1));
        imgButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(52, 152, 219, 0); /* 0.5 is 50% transparency */\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
""));
        imgButton_5 = new QPushButton(centralwidget);
        imgButton_5->setObjectName("imgButton_5");
        imgButton_5->setGeometry(QRect(10, 10, 1, 1));
        imgButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(52, 152, 219, 0); /* 0.5 is 50% transparency */\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
""));
        imgButton_6 = new QPushButton(centralwidget);
        imgButton_6->setObjectName("imgButton_6");
        imgButton_6->setGeometry(QRect(10, 10, 1, 1));
        imgButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(52, 152, 219, 0); /* 0.5 is 50% transparency */\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
""));
        RandomButton = new QPushButton(centralwidget);
        RandomButton->setObjectName("RandomButton");
        RandomButton->setGeometry(QRect(170, 400, 400, 400));
        RandomButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 200px; /* \345\260\206\346\214\211\351\222\256\347\232\204\350\276\271\346\241\206\345\215\212\345\276\204\350\256\276\347\275\256\344\270\272100\345\203\217\347\264\240\357\274\214\345\215\263\347\233\264\345\276\204\344\270\272200 */\n"
"    background-color: rgb(155, 4, 4); /* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272(155, 4, 4) */\n"
"}"));
        RandomButton->setIconSize(QSize(40, 40));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        comboBox_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\345\207\211or\347\203\255", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\345\207\211\350\217\234", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\347\203\255\350\217\234", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "\350\276\243\344\270\215\350\276\243", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "\350\276\243", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "\344\270\215\350\276\243", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "\351\243\237\345\240\202", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "\345\255\246\344\270\200", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "\345\256\266\345\233\255", nullptr));

        comboBox_3->setCurrentText(QCoreApplication::translate("MainWindow", "\351\243\237\345\240\202", nullptr));
        imglabel_1->setText(QCoreApplication::translate("MainWindow", "loading", nullptr));
        imglabel_2->setText(QCoreApplication::translate("MainWindow", "loading", nullptr));
        imglabel_3->setText(QCoreApplication::translate("MainWindow", "loading", nullptr));
        imglabel_4->setText(QCoreApplication::translate("MainWindow", "loading", nullptr));
        imglabel_5->setText(QCoreApplication::translate("MainWindow", "loading", nullptr));
        imglabel_6->setText(QCoreApplication::translate("MainWindow", "loading", nullptr));
        pushButtonChange->setText(QCoreApplication::translate("MainWindow", "\346\215\242\344\270\200\346\211\271", nullptr));
        imgButton_1->setText(QString());
        imgButton_2->setText(QString());
        imgButton_3->setText(QString());
        imgButton_4->setText(QString());
        imgButton_5->setText(QString());
        imgButton_6->setText(QString());
        RandomButton->setText(QCoreApplication::translate("MainWindow", "\346\235\245\347\202\271\346\216\250\350\215\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
