/********************************************************************************
** Form generated from reading UI file 'animationpage.ui'
**
** Created: Mon Jan 9 20:35:12 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATIONPAGE_H
#define UI_ANIMATIONPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "doubleslider.h"

QT_BEGIN_NAMESPACE

class Ui_AnimationPage
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *labelScroll;
    QHBoxLayout *hboxLayout;
    DoubleSlider *sliderScrolling;
    QPushButton *stopScrolling;
    QLabel *labelAuto;
    QHBoxLayout *hboxLayout1;
    DoubleSlider *sliderRotation;
    QPushButton *stopRotation;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *AnimationPage)
    {
        if (AnimationPage->objectName().isEmpty())
            AnimationPage->setObjectName(QString::fromUtf8("AnimationPage"));
        AnimationPage->resize(300, 400);
        vboxLayout = new QVBoxLayout(AnimationPage);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        labelScroll = new QLabel(AnimationPage);
        labelScroll->setObjectName(QString::fromUtf8("labelScroll"));

        vboxLayout->addWidget(labelScroll);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        sliderScrolling = new DoubleSlider(AnimationPage);
        sliderScrolling->setObjectName(QString::fromUtf8("sliderScrolling"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sliderScrolling->sizePolicy().hasHeightForWidth());
        sliderScrolling->setSizePolicy(sizePolicy);
        sliderScrolling->setMinimum(-100);
        sliderScrolling->setMaximum(100);
        sliderScrolling->setOrientation(Qt::Horizontal);
        sliderScrolling->setTickPosition(QSlider::TicksBelow);
        sliderScrolling->setTickInterval(20);

        hboxLayout->addWidget(sliderScrolling);

        stopScrolling = new QPushButton(AnimationPage);
        stopScrolling->setObjectName(QString::fromUtf8("stopScrolling"));

        hboxLayout->addWidget(stopScrolling);


        vboxLayout->addLayout(hboxLayout);

        labelAuto = new QLabel(AnimationPage);
        labelAuto->setObjectName(QString::fromUtf8("labelAuto"));

        vboxLayout->addWidget(labelAuto);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        sliderRotation = new DoubleSlider(AnimationPage);
        sliderRotation->setObjectName(QString::fromUtf8("sliderRotation"));
        sizePolicy.setHeightForWidth(sliderRotation->sizePolicy().hasHeightForWidth());
        sliderRotation->setSizePolicy(sizePolicy);
        sliderRotation->setMinimum(-100);
        sliderRotation->setMaximum(100);
        sliderRotation->setOrientation(Qt::Horizontal);
        sliderRotation->setTickPosition(QSlider::TicksBelow);
        sliderRotation->setTickInterval(20);

        hboxLayout1->addWidget(sliderRotation);

        stopRotation = new QPushButton(AnimationPage);
        stopRotation->setObjectName(QString::fromUtf8("stopRotation"));

        hboxLayout1->addWidget(stopRotation);


        vboxLayout->addLayout(hboxLayout1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        QWidget::setTabOrder(sliderScrolling, stopScrolling);
        QWidget::setTabOrder(stopScrolling, sliderRotation);
        QWidget::setTabOrder(sliderRotation, stopRotation);

        retranslateUi(AnimationPage);

        QMetaObject::connectSlotsByName(AnimationPage);
    } // setupUi

    void retranslateUi(QWidget *AnimationPage)
    {
        AnimationPage->setWindowTitle(QApplication::translate("AnimationPage", "Animation", 0, QApplication::UnicodeUTF8));
        labelScroll->setText(QApplication::translate("AnimationPage", "Color Scrolling", 0, QApplication::UnicodeUTF8));
        stopScrolling->setText(QApplication::translate("AnimationPage", "Stop", 0, QApplication::UnicodeUTF8));
        labelAuto->setText(QApplication::translate("AnimationPage", "Mesh Rotation", 0, QApplication::UnicodeUTF8));
        stopRotation->setText(QApplication::translate("AnimationPage", "Stop", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AnimationPage: public Ui_AnimationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATIONPAGE_H
