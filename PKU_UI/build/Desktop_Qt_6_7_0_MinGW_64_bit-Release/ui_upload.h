/********************************************************************************
** Form generated from reading UI file 'upload.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPLOAD_H
#define UI_UPLOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpLoad
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *UpLoad)
    {
        if (UpLoad->objectName().isEmpty())
            UpLoad->setObjectName("UpLoad");
        UpLoad->resize(480, 672);
        buttonBox = new QDialogButtonBox(UpLoad);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(100, 620, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(UpLoad);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 70, 61, 31));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        layoutWidget = new QWidget(UpLoad);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 130, 371, 41));
        layoutWidget->setAcceptDrops(true);
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setAcceptDrops(true);

        horizontalLayout_2->addWidget(comboBox_2);

        comboBox_3 = new QComboBox(layoutWidget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setAcceptDrops(true);

        horizontalLayout_2->addWidget(comboBox_3);

        comboBox_4 = new QComboBox(layoutWidget);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setAcceptDrops(true);
        comboBox_4->setEditable(false);
        comboBox_4->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_2->addWidget(comboBox_4);

        lineEdit = new QLineEdit(UpLoad);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 70, 291, 31));
        label_2 = new QLabel(UpLoad);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 220, 350, 280));
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::Box);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(UpLoad);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 17, 91, 21));
        QFont font2;
        font2.setPointSize(14);
        label_3->setFont(font2);

        retranslateUi(UpLoad);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, UpLoad, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, UpLoad, qOverload<>(&QDialog::reject));

        comboBox_4->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UpLoad);
    } // setupUi

    void retranslateUi(QDialog *UpLoad)
    {
        UpLoad->setWindowTitle(QCoreApplication::translate("UpLoad", "PKU eater", nullptr));
        label->setText(QCoreApplication::translate("UpLoad", "\350\217\234\345\223\201\345\220\215\347\247\260", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("UpLoad", "\345\207\211or\347\203\255", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("UpLoad", "\345\207\211\350\217\234", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("UpLoad", "\347\203\255\350\217\234", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("UpLoad", "\350\276\243\344\270\215\350\276\243", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("UpLoad", "\350\276\243", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("UpLoad", "\344\270\215\350\276\243", nullptr));

        comboBox_4->setItemText(0, QCoreApplication::translate("UpLoad", "\351\243\237\345\240\202", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("UpLoad", "\345\255\246\344\270\200", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("UpLoad", "\345\256\266\345\233\255", nullptr));

        comboBox_4->setCurrentText(QCoreApplication::translate("UpLoad", "\351\243\237\345\240\202", nullptr));
        label_2->setText(QCoreApplication::translate("UpLoad", "\346\213\226\345\212\250\345\233\276\347\211\207\345\210\260\346\255\244\345\244\204", nullptr));
        label_3->setText(QCoreApplication::translate("UpLoad", "\350\217\234\345\223\201\344\270\212\344\274\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpLoad: public Ui_UpLoad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPLOAD_H
