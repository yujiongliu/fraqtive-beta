/********************************************************************************
** Form generated from reading UI file 'colorsettingspage.ui'
**
** Created: Mon Jan 9 20:35:12 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORSETTINGSPAGE_H
#define UI_COLORSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "colorwidget.h"
#include "doubleslider.h"

QT_BEGIN_NAMESPACE

class Ui_ColorSettingsPage
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *labelBackground;
    QHBoxLayout *hboxLayout;
    ColorWidget *widgetBackground;
    QToolButton *buttonBackground;
    QLabel *labelGradient;
    QHBoxLayout *hboxLayout1;
    ColorWidget *widgetGradient;
    QToolButton *buttonGradient;
    QLabel *labelOptions;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem;
    QCheckBox *checkMirrored;
    QCheckBox *checkReversed;
    QLabel *labelScale;
    DoubleSlider *sliderScale;
    QLabel *labelOffset;
    DoubleSlider *sliderOffset;
    QLabel *labelDefault;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem1;
    QPushButton *buttonRestore;
    QPushButton *buttonStore;
    QLabel *labelPresets;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem2;
    QPushButton *buttonLoad;
    QPushButton *buttonSave;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *ColorSettingsPage)
    {
        if (ColorSettingsPage->objectName().isEmpty())
            ColorSettingsPage->setObjectName(QString::fromUtf8("ColorSettingsPage"));
        ColorSettingsPage->resize(300, 400);
        vboxLayout = new QVBoxLayout(ColorSettingsPage);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        labelBackground = new QLabel(ColorSettingsPage);
        labelBackground->setObjectName(QString::fromUtf8("labelBackground"));

        vboxLayout->addWidget(labelBackground);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        widgetBackground = new ColorWidget(ColorSettingsPage);
        widgetBackground->setObjectName(QString::fromUtf8("widgetBackground"));

        hboxLayout->addWidget(widgetBackground);

        buttonBackground = new QToolButton(ColorSettingsPage);
        buttonBackground->setObjectName(QString::fromUtf8("buttonBackground"));

        hboxLayout->addWidget(buttonBackground);


        vboxLayout->addLayout(hboxLayout);

        labelGradient = new QLabel(ColorSettingsPage);
        labelGradient->setObjectName(QString::fromUtf8("labelGradient"));

        vboxLayout->addWidget(labelGradient);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        widgetGradient = new ColorWidget(ColorSettingsPage);
        widgetGradient->setObjectName(QString::fromUtf8("widgetGradient"));

        hboxLayout1->addWidget(widgetGradient);

        buttonGradient = new QToolButton(ColorSettingsPage);
        buttonGradient->setObjectName(QString::fromUtf8("buttonGradient"));

        hboxLayout1->addWidget(buttonGradient);


        vboxLayout->addLayout(hboxLayout1);

        labelOptions = new QLabel(ColorSettingsPage);
        labelOptions->setObjectName(QString::fromUtf8("labelOptions"));

        vboxLayout->addWidget(labelOptions);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem);

        checkMirrored = new QCheckBox(ColorSettingsPage);
        checkMirrored->setObjectName(QString::fromUtf8("checkMirrored"));

        hboxLayout2->addWidget(checkMirrored);

        checkReversed = new QCheckBox(ColorSettingsPage);
        checkReversed->setObjectName(QString::fromUtf8("checkReversed"));

        hboxLayout2->addWidget(checkReversed);


        vboxLayout->addLayout(hboxLayout2);

        labelScale = new QLabel(ColorSettingsPage);
        labelScale->setObjectName(QString::fromUtf8("labelScale"));

        vboxLayout->addWidget(labelScale);

        sliderScale = new DoubleSlider(ColorSettingsPage);
        sliderScale->setObjectName(QString::fromUtf8("sliderScale"));
        sliderScale->setMaximum(100);
        sliderScale->setOrientation(Qt::Horizontal);
        sliderScale->setTickPosition(QSlider::TicksBelow);
        sliderScale->setTickInterval(10);

        vboxLayout->addWidget(sliderScale);

        labelOffset = new QLabel(ColorSettingsPage);
        labelOffset->setObjectName(QString::fromUtf8("labelOffset"));

        vboxLayout->addWidget(labelOffset);

        sliderOffset = new DoubleSlider(ColorSettingsPage);
        sliderOffset->setObjectName(QString::fromUtf8("sliderOffset"));
        sliderOffset->setMaximum(100);
        sliderOffset->setOrientation(Qt::Horizontal);
        sliderOffset->setTickPosition(QSlider::TicksBelow);
        sliderOffset->setTickInterval(10);

        vboxLayout->addWidget(sliderOffset);

        labelDefault = new QLabel(ColorSettingsPage);
        labelDefault->setObjectName(QString::fromUtf8("labelDefault"));

        vboxLayout->addWidget(labelDefault);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem1);

        buttonRestore = new QPushButton(ColorSettingsPage);
        buttonRestore->setObjectName(QString::fromUtf8("buttonRestore"));

        hboxLayout3->addWidget(buttonRestore);

        buttonStore = new QPushButton(ColorSettingsPage);
        buttonStore->setObjectName(QString::fromUtf8("buttonStore"));

        hboxLayout3->addWidget(buttonStore);


        vboxLayout->addLayout(hboxLayout3);

        labelPresets = new QLabel(ColorSettingsPage);
        labelPresets->setObjectName(QString::fromUtf8("labelPresets"));

        vboxLayout->addWidget(labelPresets);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        spacerItem2 = new QSpacerItem(84, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem2);

        buttonLoad = new QPushButton(ColorSettingsPage);
        buttonLoad->setObjectName(QString::fromUtf8("buttonLoad"));

        hboxLayout4->addWidget(buttonLoad);

        buttonSave = new QPushButton(ColorSettingsPage);
        buttonSave->setObjectName(QString::fromUtf8("buttonSave"));

        hboxLayout4->addWidget(buttonSave);


        vboxLayout->addLayout(hboxLayout4);

        spacerItem3 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem3);


        retranslateUi(ColorSettingsPage);

        QMetaObject::connectSlotsByName(ColorSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *ColorSettingsPage)
    {
        ColorSettingsPage->setWindowTitle(QApplication::translate("ColorSettingsPage", "Color Settings", 0, QApplication::UnicodeUTF8));
        labelBackground->setText(QApplication::translate("ColorSettingsPage", "Background Color", 0, QApplication::UnicodeUTF8));
        buttonBackground->setText(QApplication::translate("ColorSettingsPage", "...", 0, QApplication::UnicodeUTF8));
        labelGradient->setText(QApplication::translate("ColorSettingsPage", "Color Gradient", 0, QApplication::UnicodeUTF8));
        buttonGradient->setText(QApplication::translate("ColorSettingsPage", "...", 0, QApplication::UnicodeUTF8));
        labelOptions->setText(QApplication::translate("ColorSettingsPage", "Gradient Options", 0, QApplication::UnicodeUTF8));
        checkMirrored->setText(QApplication::translate("ColorSettingsPage", "Mirrored", 0, QApplication::UnicodeUTF8));
        checkReversed->setText(QApplication::translate("ColorSettingsPage", "Reversed", 0, QApplication::UnicodeUTF8));
        labelScale->setText(QApplication::translate("ColorSettingsPage", "Mapping Scale", 0, QApplication::UnicodeUTF8));
        labelOffset->setText(QApplication::translate("ColorSettingsPage", "Mapping Offset", 0, QApplication::UnicodeUTF8));
        labelDefault->setText(QApplication::translate("ColorSettingsPage", "Default Settings", 0, QApplication::UnicodeUTF8));
        buttonRestore->setText(QApplication::translate("ColorSettingsPage", "Restore", 0, QApplication::UnicodeUTF8));
        buttonStore->setText(QApplication::translate("ColorSettingsPage", "Store", 0, QApplication::UnicodeUTF8));
        labelPresets->setText(QApplication::translate("ColorSettingsPage", "Color Presets", 0, QApplication::UnicodeUTF8));
        buttonLoad->setText(QApplication::translate("ColorSettingsPage", "Load...", 0, QApplication::UnicodeUTF8));
        buttonSave->setText(QApplication::translate("ColorSettingsPage", "Save...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ColorSettingsPage: public Ui_ColorSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORSETTINGSPAGE_H
