/********************************************************************************
** Form generated from reading UI file 'generateimagedialog.ui'
**
** Created: Mon Jan 9 20:35:12 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATEIMAGEDIALOG_H
#define UI_GENERATEIMAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "doubleslider.h"
#include "xmlui/gradientwidget.h"

QT_BEGIN_NAMESPACE

class Ui_GenerateImageDialog
{
public:
    QVBoxLayout *topLayout;
    XmlUi::GradientWidget *promptWidget;
    QHBoxLayout *promptLayout;
    QLabel *promptPixmap;
    QLabel *promptLabel;
    QFrame *line;
    QWidget *mainWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *spacer_4;
    QLabel *label;
    QSpinBox *spinWidth;
    QSpacerItem *spacer;
    QLabel *label_2;
    QSpinBox *spinHeight;
    QSpacerItem *spacer_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelDepth;
    DoubleSlider *sliderDepth;
    QLabel *labelDetail;
    DoubleSlider *sliderDetail;
    QLabel *labelAntiAliasing;
    QHBoxLayout *_2;
    QSpacerItem *spacerItem;
    QFrame *frameAntiAliasing;
    QHBoxLayout *_4;
    QRadioButton *radioAANone;
    QRadioButton *radioAALow;
    QRadioButton *radioAAMedium;
    QRadioButton *radioAAHigh;
    QLabel *labelMultiSampling;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QFrame *frameMultiSampling;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioMSNone;
    QRadioButton *radioMS2x2;
    QRadioButton *radioMS4x4;
    QRadioButton *radioMS8x8;
    QSpacerItem *spacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GenerateImageDialog)
    {
        if (GenerateImageDialog->objectName().isEmpty())
            GenerateImageDialog->setObjectName(QString::fromUtf8("GenerateImageDialog"));
        GenerateImageDialog->resize(350, 394);
        topLayout = new QVBoxLayout(GenerateImageDialog);
        topLayout->setSpacing(0);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        topLayout->setContentsMargins(0, 0, 0, 0);
        promptWidget = new XmlUi::GradientWidget(GenerateImageDialog);
        promptWidget->setObjectName(QString::fromUtf8("promptWidget"));
        promptLayout = new QHBoxLayout(promptWidget);
        promptLayout->setSpacing(10);
        promptLayout->setObjectName(QString::fromUtf8("promptLayout"));
        promptPixmap = new QLabel(promptWidget);
        promptPixmap->setObjectName(QString::fromUtf8("promptPixmap"));

        promptLayout->addWidget(promptPixmap);

        promptLabel = new QLabel(promptWidget);
        promptLabel->setObjectName(QString::fromUtf8("promptLabel"));
        promptLabel->setWordWrap(true);

        promptLayout->addWidget(promptLabel);

        promptLayout->setStretch(1, 1);

        topLayout->addWidget(promptWidget);

        line = new QFrame(GenerateImageDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        topLayout->addWidget(line);

        mainWidget = new QWidget(GenerateImageDialog);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        verticalLayout_2 = new QVBoxLayout(mainWidget);
        verticalLayout_2->setSpacing(9);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(mainWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spacer_4 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer_4);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinWidth = new QSpinBox(groupBox);
        spinWidth->setObjectName(QString::fromUtf8("spinWidth"));
        spinWidth->setMinimumSize(QSize(60, 0));
        spinWidth->setMinimum(32);
        spinWidth->setMaximum(8000);

        horizontalLayout->addWidget(spinWidth);

        spacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        spinHeight = new QSpinBox(groupBox);
        spinHeight->setObjectName(QString::fromUtf8("spinHeight"));
        spinHeight->setMinimumSize(QSize(60, 0));
        spinHeight->setMinimum(32);
        spinHeight->setMaximum(8000);

        horizontalLayout->addWidget(spinHeight);

        spacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer_2);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(mainWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelDepth = new QLabel(groupBox_2);
        labelDepth->setObjectName(QString::fromUtf8("labelDepth"));

        verticalLayout->addWidget(labelDepth);

        sliderDepth = new DoubleSlider(groupBox_2);
        sliderDepth->setObjectName(QString::fromUtf8("sliderDepth"));
        sliderDepth->setMaximum(100);
        sliderDepth->setOrientation(Qt::Horizontal);
        sliderDepth->setTickPosition(QSlider::TicksBelow);
        sliderDepth->setTickInterval(10);

        verticalLayout->addWidget(sliderDepth);

        labelDetail = new QLabel(groupBox_2);
        labelDetail->setObjectName(QString::fromUtf8("labelDetail"));

        verticalLayout->addWidget(labelDetail);

        sliderDetail = new DoubleSlider(groupBox_2);
        sliderDetail->setObjectName(QString::fromUtf8("sliderDetail"));
        sliderDetail->setMaximum(100);
        sliderDetail->setOrientation(Qt::Horizontal);
        sliderDetail->setTickPosition(QSlider::TicksBelow);
        sliderDetail->setTickInterval(10);

        verticalLayout->addWidget(sliderDetail);

        labelAntiAliasing = new QLabel(groupBox_2);
        labelAntiAliasing->setObjectName(QString::fromUtf8("labelAntiAliasing"));

        verticalLayout->addWidget(labelAntiAliasing);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        spacerItem = new QSpacerItem(51, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem);

        frameAntiAliasing = new QFrame(groupBox_2);
        frameAntiAliasing->setObjectName(QString::fromUtf8("frameAntiAliasing"));
        frameAntiAliasing->setFrameShape(QFrame::NoFrame);
        _4 = new QHBoxLayout(frameAntiAliasing);
        _4->setSpacing(4);
        _4->setObjectName(QString::fromUtf8("_4"));
        _4->setContentsMargins(0, 0, 0, 0);
        radioAANone = new QRadioButton(frameAntiAliasing);
        radioAANone->setObjectName(QString::fromUtf8("radioAANone"));
        radioAANone->setChecked(true);

        _4->addWidget(radioAANone);

        radioAALow = new QRadioButton(frameAntiAliasing);
        radioAALow->setObjectName(QString::fromUtf8("radioAALow"));

        _4->addWidget(radioAALow);

        radioAAMedium = new QRadioButton(frameAntiAliasing);
        radioAAMedium->setObjectName(QString::fromUtf8("radioAAMedium"));

        _4->addWidget(radioAAMedium);

        radioAAHigh = new QRadioButton(frameAntiAliasing);
        radioAAHigh->setObjectName(QString::fromUtf8("radioAAHigh"));

        _4->addWidget(radioAAHigh);


        _2->addWidget(frameAntiAliasing);


        verticalLayout->addLayout(_2);

        labelMultiSampling = new QLabel(groupBox_2);
        labelMultiSampling->setObjectName(QString::fromUtf8("labelMultiSampling"));

        verticalLayout->addWidget(labelMultiSampling);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        frameMultiSampling = new QFrame(groupBox_2);
        frameMultiSampling->setObjectName(QString::fromUtf8("frameMultiSampling"));
        frameMultiSampling->setFrameShape(QFrame::NoFrame);
        horizontalLayout_3 = new QHBoxLayout(frameMultiSampling);
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioMSNone = new QRadioButton(frameMultiSampling);
        radioMSNone->setObjectName(QString::fromUtf8("radioMSNone"));
        radioMSNone->setChecked(true);

        horizontalLayout_3->addWidget(radioMSNone);

        radioMS2x2 = new QRadioButton(frameMultiSampling);
        radioMS2x2->setObjectName(QString::fromUtf8("radioMS2x2"));

        horizontalLayout_3->addWidget(radioMS2x2);

        radioMS4x4 = new QRadioButton(frameMultiSampling);
        radioMS4x4->setObjectName(QString::fromUtf8("radioMS4x4"));

        horizontalLayout_3->addWidget(radioMS4x4);

        radioMS8x8 = new QRadioButton(frameMultiSampling);
        radioMS8x8->setObjectName(QString::fromUtf8("radioMS8x8"));

        horizontalLayout_3->addWidget(radioMS8x8);


        horizontalLayout_2->addWidget(frameMultiSampling);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox_2);

        spacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacer_3);

        buttonBox = new QDialogButtonBox(mainWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        topLayout->addWidget(mainWidget);

        topLayout->setStretch(2, 1);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(spinWidth);
        label_2->setBuddy(spinHeight);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(spinWidth, spinHeight);
        QWidget::setTabOrder(spinHeight, sliderDepth);
        QWidget::setTabOrder(sliderDepth, sliderDetail);
        QWidget::setTabOrder(sliderDetail, radioAANone);
        QWidget::setTabOrder(radioAANone, radioAALow);
        QWidget::setTabOrder(radioAALow, radioAAMedium);
        QWidget::setTabOrder(radioAAMedium, radioAAHigh);
        QWidget::setTabOrder(radioAAHigh, buttonBox);

        retranslateUi(GenerateImageDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GenerateImageDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GenerateImageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GenerateImageDialog);
    } // setupUi

    void retranslateUi(QDialog *GenerateImageDialog)
    {
        GenerateImageDialog->setWindowTitle(QApplication::translate("GenerateImageDialog", "Generate Image", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("GenerateImageDialog", "Image Resolution", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GenerateImageDialog", "Width:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GenerateImageDialog", "Height:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("GenerateImageDialog", "Advanced Settings", 0, QApplication::UnicodeUTF8));
        labelDepth->setText(QApplication::translate("GenerateImageDialog", "Calculation Depth", 0, QApplication::UnicodeUTF8));
        labelDetail->setText(QApplication::translate("GenerateImageDialog", "Detail Level", 0, QApplication::UnicodeUTF8));
        labelAntiAliasing->setText(QApplication::translate("GenerateImageDialog", "Image Anti-Aliasing", 0, QApplication::UnicodeUTF8));
        radioAANone->setText(QApplication::translate("GenerateImageDialog", "None", 0, QApplication::UnicodeUTF8));
        radioAALow->setText(QApplication::translate("GenerateImageDialog", "Low", 0, QApplication::UnicodeUTF8));
        radioAAMedium->setText(QApplication::translate("GenerateImageDialog", "Medium", 0, QApplication::UnicodeUTF8));
        radioAAHigh->setText(QApplication::translate("GenerateImageDialog", "High", 0, QApplication::UnicodeUTF8));
        labelMultiSampling->setText(QApplication::translate("GenerateImageDialog", "Multi-Sampling", 0, QApplication::UnicodeUTF8));
        radioMSNone->setText(QApplication::translate("GenerateImageDialog", "None", 0, QApplication::UnicodeUTF8));
        radioMS2x2->setText(QApplication::translate("GenerateImageDialog", "2 x 2", 0, QApplication::UnicodeUTF8));
        radioMS4x4->setText(QApplication::translate("GenerateImageDialog", "4 x 4", 0, QApplication::UnicodeUTF8));
        radioMS8x8->setText(QApplication::translate("GenerateImageDialog", "8 x 8", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GenerateImageDialog: public Ui_GenerateImageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATEIMAGEDIALOG_H
