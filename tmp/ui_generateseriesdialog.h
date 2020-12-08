/********************************************************************************
** Form generated from reading UI file 'generateseriesdialog.ui'
**
** Created: Mon Jan 9 20:35:12 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATESERIESDIALOG_H
#define UI_GENERATESERIESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "doubleslider.h"
#include "viewcontainer.h"
#include "xmlui/gradientwidget.h"

QT_BEGIN_NAMESPACE

class Ui_GenerateSeriesDialog
{
public:
    QVBoxLayout *topLayout;
    XmlUi::GradientWidget *promptWidget;
    QHBoxLayout *promptLayout;
    QLabel *promptPixmap;
    QLabel *promptLabel;
    QFrame *line;
    QWidget *mainWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
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
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frameMultiSampling;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioMSNone;
    QRadioButton *radioMS2x2;
    QRadioButton *radioMS4x4;
    QRadioButton *radioMS8x8;
    QSpacerItem *spacer_3;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *imageSpacer;
    QSpinBox *spinImages;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_4;
    QGridLayout *animationLayout;
    QLabel *labelZoom;
    QDoubleSpinBox *spinZoom;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelAngle;
    QDoubleSpinBox *spinAngle;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelBlending;
    QDoubleSpinBox *spinBlending;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *_3;
    QGroupBox *groupPreview;
    QVBoxLayout *_5;
    ViewContainer *viewContainer;
    QSlider *animSlider;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GenerateSeriesDialog)
    {
        if (GenerateSeriesDialog->objectName().isEmpty())
            GenerateSeriesDialog->setObjectName(QString::fromUtf8("GenerateSeriesDialog"));
        GenerateSeriesDialog->resize(731, 390);
        topLayout = new QVBoxLayout(GenerateSeriesDialog);
        topLayout->setSpacing(0);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        topLayout->setContentsMargins(0, 0, 0, 0);
        promptWidget = new XmlUi::GradientWidget(GenerateSeriesDialog);
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

        line = new QFrame(GenerateSeriesDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        topLayout->addWidget(line);

        mainWidget = new QWidget(GenerateSeriesDialog);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        verticalLayout_4 = new QVBoxLayout(mainWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
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

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        frameMultiSampling = new QFrame(groupBox_2);
        frameMultiSampling->setObjectName(QString::fromUtf8("frameMultiSampling"));
        frameMultiSampling->setFrameShape(QFrame::NoFrame);
        horizontalLayout_6 = new QHBoxLayout(frameMultiSampling);
        horizontalLayout_6->setSpacing(4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        radioMSNone = new QRadioButton(frameMultiSampling);
        radioMSNone->setObjectName(QString::fromUtf8("radioMSNone"));
        radioMSNone->setChecked(true);

        horizontalLayout_6->addWidget(radioMSNone);

        radioMS2x2 = new QRadioButton(frameMultiSampling);
        radioMS2x2->setObjectName(QString::fromUtf8("radioMS2x2"));

        horizontalLayout_6->addWidget(radioMS2x2);

        radioMS4x4 = new QRadioButton(frameMultiSampling);
        radioMS4x4->setObjectName(QString::fromUtf8("radioMS4x4"));

        horizontalLayout_6->addWidget(radioMS4x4);

        radioMS8x8 = new QRadioButton(frameMultiSampling);
        radioMS8x8->setObjectName(QString::fromUtf8("radioMS8x8"));

        horizontalLayout_6->addWidget(radioMS8x8);


        horizontalLayout_5->addWidget(frameMultiSampling);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addWidget(groupBox_2);

        spacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacer_3);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_3 = new QGroupBox(mainWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        imageSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(imageSpacer);

        spinImages = new QSpinBox(groupBox_3);
        spinImages->setObjectName(QString::fromUtf8("spinImages"));
        spinImages->setMinimumSize(QSize(60, 0));
        spinImages->setMinimum(2);
        spinImages->setMaximum(10000);

        horizontalLayout_2->addWidget(spinImages);

        horizontalSpacer = new QSpacerItem(63, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(mainWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        animationLayout = new QGridLayout(groupBox_4);
        animationLayout->setObjectName(QString::fromUtf8("animationLayout"));
        labelZoom = new QLabel(groupBox_4);
        labelZoom->setObjectName(QString::fromUtf8("labelZoom"));

        animationLayout->addWidget(labelZoom, 0, 0, 1, 1);

        spinZoom = new QDoubleSpinBox(groupBox_4);
        spinZoom->setObjectName(QString::fromUtf8("spinZoom"));
        spinZoom->setMinimumSize(QSize(100, 0));
        spinZoom->setMinimum(-15);
        spinZoom->setMaximum(15);
        spinZoom->setSingleStep(0.1);

        animationLayout->addWidget(spinZoom, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(26, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        animationLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        labelAngle = new QLabel(groupBox_4);
        labelAngle->setObjectName(QString::fromUtf8("labelAngle"));

        animationLayout->addWidget(labelAngle, 1, 0, 1, 1);

        spinAngle = new QDoubleSpinBox(groupBox_4);
        spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
        spinAngle->setMinimumSize(QSize(100, 0));
        spinAngle->setDecimals(1);
        spinAngle->setMinimum(-36000);
        spinAngle->setMaximum(36000);
        spinAngle->setSingleStep(5);

        animationLayout->addWidget(spinAngle, 1, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(mainWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelBlending = new QLabel(groupBox_5);
        labelBlending->setObjectName(QString::fromUtf8("labelBlending"));

        horizontalLayout_3->addWidget(labelBlending);

        spinBlending = new QDoubleSpinBox(groupBox_5);
        spinBlending->setObjectName(QString::fromUtf8("spinBlending"));
        spinBlending->setMinimumSize(QSize(60, 0));
        spinBlending->setDecimals(1);
        spinBlending->setMaximum(0.9);
        spinBlending->setSingleStep(0.1);

        horizontalLayout_3->addWidget(spinBlending);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_3->addWidget(groupBox_5);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout_3);

        _3 = new QVBoxLayout();
        _3->setObjectName(QString::fromUtf8("_3"));
        groupPreview = new QGroupBox(mainWidget);
        groupPreview->setObjectName(QString::fromUtf8("groupPreview"));
        _5 = new QVBoxLayout(groupPreview);
        _5->setObjectName(QString::fromUtf8("_5"));
        viewContainer = new ViewContainer(groupPreview);
        viewContainer->setObjectName(QString::fromUtf8("viewContainer"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(viewContainer->sizePolicy().hasHeightForWidth());
        viewContainer->setSizePolicy(sizePolicy);

        _5->addWidget(viewContainer);

        animSlider = new QSlider(groupPreview);
        animSlider->setObjectName(QString::fromUtf8("animSlider"));
        animSlider->setMaximum(100);
        animSlider->setPageStep(1);
        animSlider->setOrientation(Qt::Horizontal);

        _5->addWidget(animSlider);


        _3->addWidget(groupPreview);

        spacerItem1 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _3->addItem(spacerItem1);


        horizontalLayout_4->addLayout(_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(mainWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);


        topLayout->addWidget(mainWidget);

        topLayout->setStretch(2, 1);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(spinWidth);
        label_2->setBuddy(spinHeight);
        labelZoom->setBuddy(spinZoom);
        labelAngle->setBuddy(spinAngle);
        labelBlending->setBuddy(spinBlending);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(spinWidth, spinHeight);
        QWidget::setTabOrder(spinHeight, sliderDepth);
        QWidget::setTabOrder(sliderDepth, sliderDetail);
        QWidget::setTabOrder(sliderDetail, radioAANone);
        QWidget::setTabOrder(radioAANone, radioAALow);
        QWidget::setTabOrder(radioAALow, radioAAMedium);
        QWidget::setTabOrder(radioAAMedium, radioAAHigh);
        QWidget::setTabOrder(radioAAHigh, spinImages);
        QWidget::setTabOrder(spinImages, spinZoom);
        QWidget::setTabOrder(spinZoom, spinAngle);
        QWidget::setTabOrder(spinAngle, buttonBox);

        retranslateUi(GenerateSeriesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GenerateSeriesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GenerateSeriesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GenerateSeriesDialog);
    } // setupUi

    void retranslateUi(QDialog *GenerateSeriesDialog)
    {
        GenerateSeriesDialog->setWindowTitle(QApplication::translate("GenerateSeriesDialog", "Generate Series", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("GenerateSeriesDialog", "Image Resolution", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GenerateSeriesDialog", "Width:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GenerateSeriesDialog", "Height:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("GenerateSeriesDialog", "Advanced Settings", 0, QApplication::UnicodeUTF8));
        labelDepth->setText(QApplication::translate("GenerateSeriesDialog", "Calculation Depth", 0, QApplication::UnicodeUTF8));
        labelDetail->setText(QApplication::translate("GenerateSeriesDialog", "Detail Level", 0, QApplication::UnicodeUTF8));
        labelAntiAliasing->setText(QApplication::translate("GenerateSeriesDialog", "Image Anti-Aliasing", 0, QApplication::UnicodeUTF8));
        radioAANone->setText(QApplication::translate("GenerateSeriesDialog", "None", 0, QApplication::UnicodeUTF8));
        radioAALow->setText(QApplication::translate("GenerateSeriesDialog", "Low", 0, QApplication::UnicodeUTF8));
        radioAAMedium->setText(QApplication::translate("GenerateSeriesDialog", "Medium", 0, QApplication::UnicodeUTF8));
        radioAAHigh->setText(QApplication::translate("GenerateSeriesDialog", "High", 0, QApplication::UnicodeUTF8));
        labelMultiSampling->setText(QApplication::translate("GenerateSeriesDialog", "Multi-Sampling", 0, QApplication::UnicodeUTF8));
        radioMSNone->setText(QApplication::translate("GenerateSeriesDialog", "None", 0, QApplication::UnicodeUTF8));
        radioMS2x2->setText(QApplication::translate("GenerateSeriesDialog", "2 x 2", 0, QApplication::UnicodeUTF8));
        radioMS4x4->setText(QApplication::translate("GenerateSeriesDialog", "4 x 4", 0, QApplication::UnicodeUTF8));
        radioMS8x8->setText(QApplication::translate("GenerateSeriesDialog", "8 x 8", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("GenerateSeriesDialog", "Number of Images", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("GenerateSeriesDialog", "Animation", 0, QApplication::UnicodeUTF8));
        labelZoom->setText(QApplication::translate("GenerateSeriesDialog", "&Zoom Factor:", 0, QApplication::UnicodeUTF8));
        spinZoom->setPrefix(QApplication::translate("GenerateSeriesDialog", "10^", 0, QApplication::UnicodeUTF8));
        labelAngle->setText(QApplication::translate("GenerateSeriesDialog", "&Rotation:", 0, QApplication::UnicodeUTF8));
        spinAngle->setSuffix(QApplication::translate("GenerateSeriesDialog", " deg", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("GenerateSeriesDialog", "Post-Processing", 0, QApplication::UnicodeUTF8));
        labelBlending->setText(QApplication::translate("GenerateSeriesDialog", "&Blending:", 0, QApplication::UnicodeUTF8));
        groupPreview->setTitle(QApplication::translate("GenerateSeriesDialog", "Preview", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GenerateSeriesDialog: public Ui_GenerateSeriesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATESERIESDIALOG_H
