/********************************************************************************
** Form generated from reading UI file 'gradienteditor.ui'
**
** Created: Mon Jan 9 20:35:12 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADIENTEDITOR_H
#define UI_GRADIENTEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "shadewidget.h"

QT_BEGIN_NAMESPACE

class Ui_GradientEditor
{
public:
    QVBoxLayout *vboxLayout;
    ShadeWidget *gradient;
    ShadeWidget *shadeRed;
    ShadeWidget *shadeGreen;
    ShadeWidget *shadeBlue;

    void setupUi(QWidget *GradientEditor)
    {
        if (GradientEditor->objectName().isEmpty())
            GradientEditor->setObjectName(QString::fromUtf8("GradientEditor"));
        GradientEditor->resize(459, 309);
        vboxLayout = new QVBoxLayout(GradientEditor);
        vboxLayout->setSpacing(5);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        gradient = new ShadeWidget(GradientEditor);
        gradient->setObjectName(QString::fromUtf8("gradient"));

        vboxLayout->addWidget(gradient);

        shadeRed = new ShadeWidget(GradientEditor);
        shadeRed->setObjectName(QString::fromUtf8("shadeRed"));

        vboxLayout->addWidget(shadeRed);

        shadeGreen = new ShadeWidget(GradientEditor);
        shadeGreen->setObjectName(QString::fromUtf8("shadeGreen"));

        vboxLayout->addWidget(shadeGreen);

        shadeBlue = new ShadeWidget(GradientEditor);
        shadeBlue->setObjectName(QString::fromUtf8("shadeBlue"));

        vboxLayout->addWidget(shadeBlue);


        retranslateUi(GradientEditor);

        QMetaObject::connectSlotsByName(GradientEditor);
    } // setupUi

    void retranslateUi(QWidget *GradientEditor)
    {
        GradientEditor->setWindowTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class GradientEditor: public Ui_GradientEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADIENTEDITOR_H
