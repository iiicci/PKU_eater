/********************************************************************************
** Form generated from reading UI file 'commentdetails.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTDETAILS_H
#define UI_COMMENTDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CommentDetails
{
public:
    QLabel *allComments;
    QPushButton *backToCuisine;
    QWidget *layoutWidget;
    QHBoxLayout *voteSystem;
    QPushButton *pagedown;
    QLabel *pagenumber;
    QPushButton *pageup;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *comment1;
    QLabel *comment2;
    QLabel *comment3;
    QLabel *comment4;
    QLabel *comment5;
    QLabel *comment6;
    QLabel *comment7;
    QLabel *comment8;
    QLabel *comment9;
    QLabel *comment10;

    void setupUi(QDialog *CommentDetails)
    {
        if (CommentDetails->objectName().isEmpty())
            CommentDetails->setObjectName("CommentDetails");
        CommentDetails->resize(480, 672);
        allComments = new QLabel(CommentDetails);
        allComments->setObjectName("allComments");
        allComments->setGeometry(QRect(160, 10, 151, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Heiti SC")});
        font.setPointSize(23);
        font.setBold(true);
        allComments->setFont(font);
        allComments->setStyleSheet(QString::fromUtf8("QLabel { padding: 5px; }"));
        allComments->setAlignment(Qt::AlignCenter);
        backToCuisine = new QPushButton(CommentDetails);
        backToCuisine->setObjectName("backToCuisine");
        backToCuisine->setGeometry(QRect(0, 0, 51, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font1.setPointSize(33);
        backToCuisine->setFont(font1);
        backToCuisine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(52, 152, 219, 0); /* 0.5 is 50% transparency */\n"
"}\n"
""));
        layoutWidget = new QWidget(CommentDetails);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(160, 610, 152, 62));
        voteSystem = new QHBoxLayout(layoutWidget);
        voteSystem->setSpacing(0);
        voteSystem->setObjectName("voteSystem");
        voteSystem->setContentsMargins(0, 0, 0, 0);
        pagedown = new QPushButton(layoutWidget);
        pagedown->setObjectName("pagedown");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pagedown->sizePolicy().hasHeightForWidth());
        pagedown->setSizePolicy(sizePolicy);
        pagedown->setMinimumSize(QSize(0, 0));
        pagedown->setMaximumSize(QSize(50, 50));
        QFont font2;
        font2.setPointSize(33);
        pagedown->setFont(font2);
        pagedown->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(52, 152, 219, 0); /* 0.5 is 50% transparency */\n"
"}\n"
""));

        voteSystem->addWidget(pagedown);

        pagenumber = new QLabel(layoutWidget);
        pagenumber->setObjectName("pagenumber");
        sizePolicy.setHeightForWidth(pagenumber->sizePolicy().hasHeightForWidth());
        pagenumber->setSizePolicy(sizePolicy);
        pagenumber->setMinimumSize(QSize(0, 0));
        pagenumber->setMaximumSize(QSize(50, 50));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Heiti SC")});
        font3.setPointSize(33);
        font3.setBold(false);
        pagenumber->setFont(font3);
        pagenumber->setStyleSheet(QString::fromUtf8("QLabel { qproperty-alignment: AlignCenter; }"));

        voteSystem->addWidget(pagenumber);

        pageup = new QPushButton(layoutWidget);
        pageup->setObjectName("pageup");
        sizePolicy.setHeightForWidth(pageup->sizePolicy().hasHeightForWidth());
        pageup->setSizePolicy(sizePolicy);
        pageup->setMinimumSize(QSize(0, 0));
        pageup->setMaximumSize(QSize(50, 50));
        pageup->setFont(font2);
        pageup->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(52, 152, 219, 0); /* 0.5 is 50% transparency */\n"
"}\n"
""));

        voteSystem->addWidget(pageup);

        widget = new QWidget(CommentDetails);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 40, 421, 574));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        comment1 = new QLabel(widget);
        comment1->setObjectName("comment1");
        comment1->setMinimumSize(QSize(0, 50));
        comment1->setMaximumSize(QSize(16777215, 50));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Heiti SC")});
        font4.setPointSize(23);
        comment1->setFont(font4);

        verticalLayout->addWidget(comment1);

        comment2 = new QLabel(widget);
        comment2->setObjectName("comment2");
        comment2->setMinimumSize(QSize(0, 50));
        comment2->setMaximumSize(QSize(16777215, 50));
        comment2->setFont(font4);

        verticalLayout->addWidget(comment2);

        comment3 = new QLabel(widget);
        comment3->setObjectName("comment3");
        comment3->setMinimumSize(QSize(0, 50));
        comment3->setMaximumSize(QSize(16777215, 50));
        comment3->setFont(font4);

        verticalLayout->addWidget(comment3);

        comment4 = new QLabel(widget);
        comment4->setObjectName("comment4");
        comment4->setMinimumSize(QSize(0, 50));
        comment4->setMaximumSize(QSize(16777215, 50));
        comment4->setFont(font4);

        verticalLayout->addWidget(comment4);

        comment5 = new QLabel(widget);
        comment5->setObjectName("comment5");
        comment5->setMinimumSize(QSize(0, 50));
        comment5->setMaximumSize(QSize(16777215, 50));
        comment5->setFont(font4);

        verticalLayout->addWidget(comment5);

        comment6 = new QLabel(widget);
        comment6->setObjectName("comment6");
        comment6->setMinimumSize(QSize(0, 50));
        comment6->setMaximumSize(QSize(16777215, 50));
        comment6->setFont(font4);

        verticalLayout->addWidget(comment6);

        comment7 = new QLabel(widget);
        comment7->setObjectName("comment7");
        comment7->setMinimumSize(QSize(0, 50));
        comment7->setMaximumSize(QSize(16777215, 50));
        comment7->setFont(font4);

        verticalLayout->addWidget(comment7);

        comment8 = new QLabel(widget);
        comment8->setObjectName("comment8");
        comment8->setMinimumSize(QSize(0, 50));
        comment8->setMaximumSize(QSize(16777215, 50));
        comment8->setFont(font4);

        verticalLayout->addWidget(comment8);

        comment9 = new QLabel(widget);
        comment9->setObjectName("comment9");
        comment9->setMinimumSize(QSize(0, 50));
        comment9->setMaximumSize(QSize(16777215, 50));
        comment9->setFont(font4);

        verticalLayout->addWidget(comment9);

        comment10 = new QLabel(widget);
        comment10->setObjectName("comment10");
        comment10->setMinimumSize(QSize(0, 50));
        comment10->setMaximumSize(QSize(16777215, 50));
        comment10->setFont(font4);

        verticalLayout->addWidget(comment10);


        retranslateUi(CommentDetails);

        QMetaObject::connectSlotsByName(CommentDetails);
    } // setupUi

    void retranslateUi(QDialog *CommentDetails)
    {
        CommentDetails->setWindowTitle(QCoreApplication::translate("CommentDetails", "Dialog", nullptr));
        allComments->setText(QCoreApplication::translate("CommentDetails", "\345\205\250\351\203\250\350\257\204\350\256\272", nullptr));
        backToCuisine->setText(QCoreApplication::translate("CommentDetails", "\342\206\220", nullptr));
        pagedown->setText(QCoreApplication::translate("CommentDetails", "\342\206\220", nullptr));
        pagenumber->setText(QCoreApplication::translate("CommentDetails", "1", nullptr));
        pageup->setText(QCoreApplication::translate("CommentDetails", "\342\206\222", nullptr));
        comment1->setText(QString());
        comment2->setText(QString());
        comment3->setText(QString());
        comment4->setText(QString());
        comment5->setText(QString());
        comment6->setText(QString());
        comment7->setText(QString());
        comment8->setText(QString());
        comment9->setText(QString());
        comment10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CommentDetails: public Ui_CommentDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTDETAILS_H
