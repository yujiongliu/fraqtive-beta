/********************************************************************************
** Form generated from reading UI file 'advancedsettingspage.ui'
**
** Created: Mon Jan 9 20:35:12 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCEDSETTINGSPAGE_H
#define UI_ADVANCEDSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "doubleslider.h"

QT_BEGIN_NAMESPACE

class Ui_AdvancedSettingsPage
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *labelDepth;
    DoubleSlider *sliderDepth;
    QLabel *labelDetail;
    DoubleSlider *sliderDetail;
    QLabel *labelAntiAliasing;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QFrame *frameAntiAliasing;
    QHBoxLayout *hboxLayout1;
    QRadioButton *radioAANone;
    QRadioButton *radioAALow;
    QRadioButton *radioAAMedium;
    QRadioButton *radioAAHigh;
    QLabel *labelResolution;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem1;
    QFrame *frameResolution;
    QHBoxLayout *hboxLayout3;
    QRadioButton *radioResLow;
    QRadioButton *radioResMedium;
    QRadioButton *radioResHigh;
    QRadioButton *radioResVHigh;
    QLabel *labelHeight;
    DoubleSlider *sliderHeight;
    QLabel *labelZoom;
    DoubleSlider *sliderZoom;
    QLabel *labelDefault;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem2;
    QPushButton *buttonRestore;
    QPushButton *buttonStore;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *AdvancedSettingsPage)
    {
        if (AdvancedSettingsPage->objectName().isEmpty())
            AdvancedSettingsPage->setObjectName(QString::fromUtf8("AdvancedSettingsPage"));
        AdvancedSettingsPage->resize(300, 400);
        vboxLayout = new QVBoxLayout(AdvancedSettingsPage);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        labelDepth = new QLabel(AdvancedSettingsPage);
        labelDepth->setObjectName(QString::fromUtf8("labelDepth"));

        vboxLayout->addWidget(labelDepth);

        sliderDepth = new DoubleSlider(AdvancedSettingsPage);
        sliderDepth->setObjectName(QString::fromUtf8("sliderDepth"));
        sliderDepth->setMaximum(100);
        sliderDepth->setOrientation(Qt::Horizontal);
        sliderDepth->setTickPosition(QSlider::TicksBelow);
        sliderDepth->setTickInterval(10);

        vboxLayout->addWidget(sliderDepth);

        labelDetail = new QLabel(AdvancedSettingsPage);
        labelDetail->setObjectName(QString::fromUtf8("labelDetail"));

        vboxLayout->addWidget(labelDetail);

        sliderDetail = new DoubleSlider(AdvancedSettingsPage);
        sliderDetail->setObjectName(QString::fromUtf8("sliderDetail"));
        sliderDetail->setMaximum(100);
        sliderDetail->setOrientation(Qt::Horizontal);
        sliderDetail->setTickPosition(QSlider::TicksBelow);
        sliderDetail->setTickInterval(10);

        vboxLayout->addWidget(sliderDetail);

        labelAntiAliasing = new QLabel(AdvancedSettingsPage);
        labelAntiAliasing->setObjectName(QString::fromUtf8("labelAntiAliasing"));

        vboxLayout->addWidget(labelAntiAliasing);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(51, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        frameAntiAliasing = new QFrame(AdvancedSettingsPage);
        frameAntiAliasing->setObjectName(QString::fromUtf8("frameAntiAliasing"));
        frameAntiAliasing->setFrameShape(QFrame::NoFrame);
        hboxLayout1 = new QHBoxLayout(frameAntiAliasing);
        hboxLayout1->setSpacing(4);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        radioAANone = new QRadioButton(frameAntiAliasing);
        radioAANone->setObjectName(QString::fromUtf8("radioAANone"));
        radioAANone->setChecked(true);

        hboxLayout1->addWidget(radioAANone);

        radioAALow = new QRadioButton(frameAntiAliasing);
        radioAALow->setObjectName(QString::fromUtf8("radioAALow"));

        hboxLayout1->addWidget(radioAALow);

        radioAAMedium = new QRadioButton(frameAntiAliasing);
        radioAAMedium->setObjectName(QString::fromUtf8("radioAAMedium"));

        hboxLayout1->addWidget(radioAAMedium);

        radioAAHigh = new QRadioButton(frameAntiAliasing);
        radioAAHigh->setObjectName(QString::fromUtf8("radioAAHigh"));

        hboxLayout1->addWidget(radioAAHigh);


        hboxLayout->addWidget(frameAntiAliasing);


        vboxLayout->addLayout(hboxLayout);

        labelResolution = new QLabel(AdvancedSettingsPage);
        labelResolution->setObjectName(QString::fromUtf8("labelResolution"));

        vboxLayout->addWidget(labelResolution);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        frameResolution = new QFrame(AdvancedSettingsPage);
        frameResolution->setObjectName(QString::fromUtf8("frameResolution"));
        frameResolution->setFrameShape(QFrame::NoFrame);
        hboxLayout3 = new QHBoxLayout(frameResolution);
        hboxLayout3->setSpacing(4);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        radioResLow = new QRadioButton(frameResolution);
        radioResLow->setObjectName(QString::fromUtf8("radioResLow"));
        radioResLow->setChecked(true);

        hboxLayout3->addWidget(radioResLow);

        radioResMedium = new QRadioButton(frameResolution);
        radioResMedium->setObjectName(QString::fromUtf8("radioResMedium"));

        hboxLayout3->addWidget(radioResMedium);

        radioResHigh = new QRadioButton(frameResolution);
        radioResHigh->setObjectName(QString::fromUtf8("radioResHigh"));

        hboxLayout3->addWidget(radioResHigh);

        radioResVHigh = new QRadioButton(frameResolution);
        radioResVHigh->setObjectName(QString::fromUtf8("radioResVHigh"));

        hboxLayout3->addWidget(radioResVHigh);


        hboxLayout2->addWidget(frameResolution);


        vboxLayout->addLayout(hboxLayout2);

        labelHeight = new QLabel(AdvancedSettingsPage);
        labelHeight->setObjectName(QString::fromUtf8("labelHeight"));

        vboxLayout->addWidget(labelHeight);

        sliderHeight = new DoubleSlider(AdvancedSettingsPage);
        sliderHeight->setObjectName(QString::fromUtf8("sliderHeight"));
        sliderHeight->setMaximum(100);
        sliderHeight->setOrientation(Qt::Horizontal);
        sliderHeight->setTickPosition(QSlider::TicksBelow);
        sliderHeight->setTickInterval(10);

        vboxLayout->addWidget(sliderHeight);

        labelZoom = new QLabel(AdvancedSettingsPage);
        labelZoom->setObjectName(QString::fromUtf8("labelZoom"));

        vboxLayout->addWidget(labelZoom);

        sliderZoom = new DoubleSlider(AdvancedSettingsPage);
        sliderZoom->setObjectName(QString::fromUtf8("sliderZoom"));
        sliderZoom->setMaximum(100);
        sliderZoom->setOrientation(Qt::Horizontal);
        sliderZoom->setTickPosition(QSlider::TicksBelow);
        sliderZoom->setTickInterval(10);

        vboxLayout->addWidget(sliderZoom);

        labelDefault = new QLabel(AdvancedSettingsPage);
        labelDefault->setObjectName(QString::fromUtf8("labelDefault"));

        vboxLayout->addWidget(labelDefault);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem2);

        buttonRestore = new QPushButton(AdvancedSettingsPage);
        buttonRestore->setObjectName(QString::fromUtf8("buttonRestore"));

        hboxLayout4->addWidget(buttonRestore);

        buttonStore = new QPushButton(AdvancedSettingsPage);
        buttonStore->setObjectName(QString::fromUtf8("buttonStore"));

        hboxLayout4->addWidget(buttonStore);


        vboxLayout->addLayout(hboxLayout4);

        spacerItem3 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem3);


        retranslateUi(AdvancedSettingsPage);

        QMetaObject::connectSlotsByName(AdvancedSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *AdvancedSettingsPage)
    {
        AdvancedSettingsPage->setWindowTitle(QApplication::translate("AdvancedSettingsPage", "Advanced Settings", 0, QApplication::UnicodeUTF8));
        labelDepth->setText(QApplication::translate("AdvancedSettingsPage", "Calculation Depth", 0, QApplication::UnicodeUTF8));
        labelDetail->setText(QApplication::translate("AdvancedSettingsPage", "Detail Level", 0, QApplication::UnicodeUTF8));
        labelAntiAliasing->setText(QApplication::translate("AdvancedSettingsPage", "Image Anti-Aliasing", 0, QApplication::UnicodeUTF8));
        radioAANone->setText(QApplication::translate("AdvancedSettingsPage", "None", 0, QApplication::UnicodeUTF8));
        radioAALow->setText(QApplication::translate("AdvancedSettingsPage", "Low", 0, QApplication::UnicodeUTF8));
        radioAAMedium->setText(QApplication::translate("AdvancedSettingsPage", "Medium", 0, QApplication::UnicodeUTF8));
        radioAAHigh->setText(QApplication::translate("AdvancedSettingsPage", "High", 0, QApplication::UnicodeUTF8));
        labelResolution->setText(QApplication::translate("AdvancedSettingsPage", "Mesh Resolution", 0, QApplication::UnicodeUTF8));
        radioResLow->setText(QApplication::translate("AdvancedSettingsPage", "Low", 0, QApplication::UnicodeUTF8));
        radioResMedium->setText(QApplication::translate("AdvancedSettingsPage", "Medium", 0, QApplication::UnicodeUTF8));
        radioResHigh->setText(QApplication::translate("AdvancedSettingsPage", "High", 0, QApplication::UnicodeUTF8));
        radioResVHigh->setText(QApplication::translate("AdvancedSettingsPage", "Very High", 0, QApplication::UnicodeUTF8));
        labelHeight->setText(QApplication::translate("AdvancedSettingsPage", "Mesh Height Scale", 0, QApplication::UnicodeUTF8));
        labelZoom->setText(QApplication::translate("AdvancedSettingsPage", "Camera Zoom", 0, QApplication::UnicodeUTF8));
        labelDefault->setText(QApplication::translate("AdvancedSettingsPage", "Default Settings", 0, QApplication::UnicodeUTF8));
        buttonRestore->setText(QApplication::translate("AdvancedSettingsPage", "Restore", 0, QApplication::UnicodeUTF8));
        buttonStore->setText(QApplication::translate("AdvancedSettingsPage", "Store", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AdvancedSettingsPage: public Ui_AdvancedSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCEDSETTINGSPAGE_H
