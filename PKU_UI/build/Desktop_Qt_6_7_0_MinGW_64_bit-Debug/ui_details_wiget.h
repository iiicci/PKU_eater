/********************************************************************************
** Form generated from reading UI file 'details_wiget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILS_WIGET_H
#define UI_DETAILS_WIGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_details_wiget
{
public:

    void setupUi(QWidget *details_wiget)
    {
        if (details_wiget->objectName().isEmpty())
            details_wiget->setObjectName("details_wiget");
        details_wiget->resize(400, 300);

        retranslateUi(details_wiget);

        QMetaObject::connectSlotsByName(details_wiget);
    } // setupUi

    void retranslateUi(QWidget *details_wiget)
    {
        details_wiget->setWindowTitle(QCoreApplication::translate("details_wiget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class details_wiget: public Ui_details_wiget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILS_WIGET_H
