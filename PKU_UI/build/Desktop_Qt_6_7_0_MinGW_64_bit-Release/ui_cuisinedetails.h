/********************************************************************************
** Form generated from reading UI file 'cuisinedetails.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUISINEDETAILS_H
#define UI_CUISINEDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CuisineDetails
{
public:
    QPushButton *backToMain;
    QLabel *detailPicture;
    QLabel *cuisineName;
    QWidget *layoutWidget;
    QVBoxLayout *commentSystem;
    QLabel *comment1;
    QLabel *comment2;
    QLabel *comment3;
    QWidget *layoutWidget1;
    QHBoxLayout *newCommentSystem;
    QLineEdit *newComment;
    QPushButton *enterComment;
    QWidget *layoutWidget2;
    QHBoxLayout *voteSystem;
    QPushButton *upvote;
    QLabel *vote;
    QPushButton *downvote;
    QWidget *layoutWidget3;
    QHBoxLayout *commentOperatingSystem;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *changeSelectedComments;
    QLabel *selectedComments;
    QLabel *label;
    QPushButton *showAllComment;
    QLabel *cuisineName_2;

    void setupUi(QDialog *CuisineDetails)
    {
        if (CuisineDetails->objectName().isEmpty())
            CuisineDetails->setObjectName("CuisineDetails");
        CuisineDetails->resize(480, 672);
        QFont font;
        font.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        CuisineDetails->setFont(font);
        backToMain = new QPushButton(CuisineDetails);
        backToMain->setObjectName("backToMain");
        backToMain->setGeometry(QRect(0, 0, 51, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setPointSize(18);
        backToMain->setFont(font1);
        backToMain->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(52, 152, 219, 0); /* 0.5 is 50% transparency */\n"
"}\n"
""));
        detailPicture = new QLabel(CuisineDetails);
        detailPicture->setObjectName("detailPicture");
        detailPicture->setGeometry(QRect(20, 110, 441, 281));
        detailPicture->setScaledContents(true);
        detailPicture->setAlignment(Qt::AlignCenter);
        cuisineName = new QLabel(CuisineDetails);
        cuisineName->setObjectName("cuisineName");
        cuisineName->setGeometry(QRect(20, 70, 151, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font2.setPointSize(16);
        font2.setBold(false);
        cuisineName->setFont(font2);
        cuisineName->setStyleSheet(QString::fromUtf8("QLabel { padding: 5px; }"));
        cuisineName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        layoutWidget = new QWidget(CuisineDetails);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 440, 441, 161));
        commentSystem = new QVBoxLayout(layoutWidget);
        commentSystem->setObjectName("commentSystem");
        commentSystem->setContentsMargins(0, 0, 0, 0);
        comment1 = new QLabel(layoutWidget);
        comment1->setObjectName("comment1");
        comment1->setMinimumSize(QSize(0, 50));
        comment1->setMaximumSize(QSize(16777215, 50));
        comment1->setFont(font1);

        commentSystem->addWidget(comment1);

        comment2 = new QLabel(layoutWidget);
        comment2->setObjectName("comment2");
        comment2->setMinimumSize(QSize(0, 50));
        comment2->setMaximumSize(QSize(16777215, 50));
        comment2->setFont(font1);

        commentSystem->addWidget(comment2);

        comment3 = new QLabel(layoutWidget);
        comment3->setObjectName("comment3");
        comment3->setMinimumSize(QSize(0, 50));
        comment3->setMaximumSize(QSize(16777215, 50));
        comment3->setFont(font1);

        commentSystem->addWidget(comment3);

        layoutWidget1 = new QWidget(CuisineDetails);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 610, 441, 62));
        newCommentSystem = new QHBoxLayout(layoutWidget1);
        newCommentSystem->setObjectName("newCommentSystem");
        newCommentSystem->setContentsMargins(0, 0, 0, 0);
        newComment = new QLineEdit(layoutWidget1);
        newComment->setObjectName("newComment");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(newComment->sizePolicy().hasHeightForWidth());
        newComment->setSizePolicy(sizePolicy);
        newComment->setMinimumSize(QSize(0, 50));
        newComment->setMaximumSize(QSize(16777215, 50));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Heiti SC")});
        font3.setPointSize(23);
        font3.setBold(true);
        newComment->setFont(font3);
        newComment->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        newCommentSystem->addWidget(newComment);

        enterComment = new QPushButton(layoutWidget1);
        enterComment->setObjectName("enterComment");
        sizePolicy.setHeightForWidth(enterComment->sizePolicy().hasHeightForWidth());
        enterComment->setSizePolicy(sizePolicy);
        enterComment->setMinimumSize(QSize(100, 50));
        enterComment->setMaximumSize(QSize(100, 50));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font4.setPointSize(18);
        font4.setBold(false);
        enterComment->setFont(font4);

        newCommentSystem->addWidget(enterComment);

        layoutWidget2 = new QWidget(CuisineDetails);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(340, 50, 152, 62));
        voteSystem = new QHBoxLayout(layoutWidget2);
        voteSystem->setSpacing(0);
        voteSystem->setObjectName("voteSystem");
        voteSystem->setContentsMargins(0, 0, 0, 0);
        upvote = new QPushButton(layoutWidget2);
        upvote->setObjectName("upvote");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(upvote->sizePolicy().hasHeightForWidth());
        upvote->setSizePolicy(sizePolicy1);
        upvote->setMinimumSize(QSize(0, 0));
        upvote->setMaximumSize(QSize(50, 50));
        upvote->setFont(font1);
        upvote->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(52, 152, 219, 0); /* 0.5 is 50% transparency */\n"
"}\n"
""));

        voteSystem->addWidget(upvote);

        vote = new QLabel(layoutWidget2);
        vote->setObjectName("vote");
        sizePolicy1.setHeightForWidth(vote->sizePolicy().hasHeightForWidth());
        vote->setSizePolicy(sizePolicy1);
        vote->setMinimumSize(QSize(0, 0));
        vote->setMaximumSize(QSize(50, 50));
        vote->setFont(font2);
        vote->setStyleSheet(QString::fromUtf8("QLabel { qproperty-alignment: AlignCenter; }"));

        voteSystem->addWidget(vote);

        downvote = new QPushButton(layoutWidget2);
        downvote->setObjectName("downvote");
        sizePolicy1.setHeightForWidth(downvote->sizePolicy().hasHeightForWidth());
        downvote->setSizePolicy(sizePolicy1);
        downvote->setMinimumSize(QSize(0, 0));
        downvote->setMaximumSize(QSize(50, 50));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font5.setPointSize(14);
        downvote->setFont(font5);
        downvote->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(52, 152, 219, 0); /* 0.5 is 50% transparency */\n"
"}\n"
""));

        voteSystem->addWidget(downvote);

        layoutWidget3 = new QWidget(CuisineDetails);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(20, 390, 441, 64));
        commentOperatingSystem = new QHBoxLayout(layoutWidget3);
        commentOperatingSystem->setObjectName("commentOperatingSystem");
        commentOperatingSystem->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        changeSelectedComments = new QPushButton(layoutWidget3);
        changeSelectedComments->setObjectName("changeSelectedComments");
        sizePolicy1.setHeightForWidth(changeSelectedComments->sizePolicy().hasHeightForWidth());
        changeSelectedComments->setSizePolicy(sizePolicy1);
        changeSelectedComments->setMaximumSize(QSize(40, 50));
        changeSelectedComments->setFont(font4);
        changeSelectedComments->setFocusPolicy(Qt::NoFocus);
        changeSelectedComments->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(changeSelectedComments);

        selectedComments = new QLabel(layoutWidget3);
        selectedComments->setObjectName("selectedComments");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(selectedComments->sizePolicy().hasHeightForWidth());
        selectedComments->setSizePolicy(sizePolicy2);
        selectedComments->setMinimumSize(QSize(0, 30));
        selectedComments->setMaximumSize(QSize(100, 16777215));
        selectedComments->setFont(font4);
        selectedComments->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        horizontalLayout_2->addWidget(selectedComments);

        label = new QLabel(layoutWidget3);
        label->setObjectName("label");
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);


        commentOperatingSystem->addLayout(horizontalLayout_2);

        showAllComment = new QPushButton(layoutWidget3);
        showAllComment->setObjectName("showAllComment");
        showAllComment->setMaximumSize(QSize(100, 50));
        showAllComment->setFont(font4);
        showAllComment->setFocusPolicy(Qt::NoFocus);
        showAllComment->setStyleSheet(QString::fromUtf8(""));

        commentOperatingSystem->addWidget(showAllComment);

        cuisineName_2 = new QLabel(CuisineDetails);
        cuisineName_2->setObjectName("cuisineName_2");
        cuisineName_2->setGeometry(QRect(160, 10, 151, 31));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font6.setPointSize(14);
        font6.setBold(false);
        cuisineName_2->setFont(font6);
        cuisineName_2->setStyleSheet(QString::fromUtf8("QLabel { padding: 5px; }"));
        cuisineName_2->setAlignment(Qt::AlignCenter);

        retranslateUi(CuisineDetails);

        QMetaObject::connectSlotsByName(CuisineDetails);
    } // setupUi

    void retranslateUi(QDialog *CuisineDetails)
    {
        CuisineDetails->setWindowTitle(QCoreApplication::translate("CuisineDetails", "PKU eater", nullptr));
        backToMain->setText(QCoreApplication::translate("CuisineDetails", "\342\206\220", nullptr));
        detailPicture->setText(QCoreApplication::translate("CuisineDetails", "detailPicture", nullptr));
        cuisineName->setText(QCoreApplication::translate("CuisineDetails", "cuisineName", nullptr));
        comment1->setText(QString());
        comment2->setText(QString());
        comment3->setText(QString());
        enterComment->setText(QCoreApplication::translate("CuisineDetails", "\345\217\221\345\270\203", nullptr));
        upvote->setText(QCoreApplication::translate("CuisineDetails", "\360\237\221\215\360\237\217\273", nullptr));
        vote->setText(QCoreApplication::translate("CuisineDetails", "vote", nullptr));
        downvote->setText(QCoreApplication::translate("CuisineDetails", "\360\237\221\216\360\237\217\273", nullptr));
        changeSelectedComments->setText(QCoreApplication::translate("CuisineDetails", "\360\237\224\201", nullptr));
        selectedComments->setText(QCoreApplication::translate("CuisineDetails", "\347\262\276\351\200\211\350\257\204\350\256\272", nullptr));
        label->setText(QString());
        showAllComment->setText(QCoreApplication::translate("CuisineDetails", "\345\205\250\351\203\250\350\257\204\350\256\272", nullptr));
        cuisineName_2->setText(QCoreApplication::translate("CuisineDetails", "\350\217\234\345\223\201\350\257\246\346\203\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CuisineDetails: public Ui_CuisineDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUISINEDETAILS_H
