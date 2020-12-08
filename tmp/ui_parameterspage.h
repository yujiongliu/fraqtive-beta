/********************************************************************************
** Form generated from reading UI file 'parameterspage.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETERSPAGE_H
#define UI_PARAMETERSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "doubleedit.h"

QT_BEGIN_NAMESPACE

class Ui_ParametersPage
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QHBoxLayout *hboxLayout;
    QLineEdit *editType;
    QToolButton *buttonType;
    QLabel *labelJulia;
    QHBoxLayout *hboxLayout1;
    QLabel *labelJuliaX;
    DoubleEdit *editJuliaX;
    QSpacerItem *spacerItem;
    QLabel *labelJuliaY;
    DoubleEdit *editJuliaY;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QSlider *SliderT;
    QLabel *labelPosition;
    QHBoxLayout *hboxLayout2;
    QLabel *labelPositionX;
    DoubleEdit *editPositionX;
    QSpacerItem *spacerItem1;
    QLabel *labelPositionY;
    DoubleEdit *editPositionY;
    QLabel *labelZoom;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem2;
    QDoubleSpinBox *spinZoom;
    QLabel *labelAngle;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem3;
    QDoubleSpinBox *spinAngle;
    QLabel *labelDefault;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem4;
    QPushButton *buttonRestore;
    QLabel *labelBookmarks;
    QHBoxLayout *hboxLayout6;
    QSpacerItem *spacerItem5;
    QPushButton *buttonLoad;
    QPushButton *buttonSave;
    QSpacerItem *spacerItem6;

    void setupUi(QWidget *ParametersPage)
    {
        if (ParametersPage->objectName().isEmpty())
            ParametersPage->setObjectName(QStringLiteral("ParametersPage"));
        ParametersPage->resize(300, 620);
        vboxLayout = new QVBoxLayout(ParametersPage);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        label = new QLabel(ParametersPage);
        label->setObjectName(QStringLiteral("label"));

        vboxLayout->addWidget(label);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        editType = new QLineEdit(ParametersPage);
        editType->setObjectName(QStringLiteral("editType"));
        editType->setReadOnly(true);

        hboxLayout->addWidget(editType);

        buttonType = new QToolButton(ParametersPage);
        buttonType->setObjectName(QStringLiteral("buttonType"));

        hboxLayout->addWidget(buttonType);


        vboxLayout->addLayout(hboxLayout);

        labelJulia = new QLabel(ParametersPage);
        labelJulia->setObjectName(QStringLiteral("labelJulia"));

        vboxLayout->addWidget(labelJulia);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        labelJuliaX = new QLabel(ParametersPage);
        labelJuliaX->setObjectName(QStringLiteral("labelJuliaX"));

        hboxLayout1->addWidget(labelJuliaX);

        editJuliaX = new DoubleEdit(ParametersPage);
        editJuliaX->setObjectName(QStringLiteral("editJuliaX"));

        hboxLayout1->addWidget(editJuliaX);

        spacerItem = new QSpacerItem(10, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        labelJuliaY = new QLabel(ParametersPage);
        labelJuliaY->setObjectName(QStringLiteral("labelJuliaY"));

        hboxLayout1->addWidget(labelJuliaY);

        editJuliaY = new DoubleEdit(ParametersPage);
        editJuliaY->setObjectName(QStringLiteral("editJuliaY"));

        hboxLayout1->addWidget(editJuliaY);


        vboxLayout->addLayout(hboxLayout1);

        label_3 = new QLabel(ParametersPage);
        label_3->setObjectName(QStringLiteral("label_3"));

        vboxLayout->addWidget(label_3);

        lineEdit_2 = new QLineEdit(ParametersPage);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        vboxLayout->addWidget(lineEdit_2);

        label_5 = new QLabel(ParametersPage);
        label_5->setObjectName(QStringLiteral("label_5"));

        vboxLayout->addWidget(label_5);

        SliderT = new QSlider(ParametersPage);
        SliderT->setObjectName(QStringLiteral("SliderT"));
        SliderT->setMaximum(10000);
        SliderT->setOrientation(Qt::Horizontal);

        vboxLayout->addWidget(SliderT);

        labelPosition = new QLabel(ParametersPage);
        labelPosition->setObjectName(QStringLiteral("labelPosition"));

        vboxLayout->addWidget(labelPosition);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        labelPositionX = new QLabel(ParametersPage);
        labelPositionX->setObjectName(QStringLiteral("labelPositionX"));

        hboxLayout2->addWidget(labelPositionX);

        editPositionX = new DoubleEdit(ParametersPage);
        editPositionX->setObjectName(QStringLiteral("editPositionX"));

        hboxLayout2->addWidget(editPositionX);

        spacerItem1 = new QSpacerItem(10, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        labelPositionY = new QLabel(ParametersPage);
        labelPositionY->setObjectName(QStringLiteral("labelPositionY"));

        hboxLayout2->addWidget(labelPositionY);

        editPositionY = new DoubleEdit(ParametersPage);
        editPositionY->setObjectName(QStringLiteral("editPositionY"));

        hboxLayout2->addWidget(editPositionY);


        vboxLayout->addLayout(hboxLayout2);

        labelZoom = new QLabel(ParametersPage);
        labelZoom->setObjectName(QStringLiteral("labelZoom"));

        vboxLayout->addWidget(labelZoom);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem2);

        spinZoom = new QDoubleSpinBox(ParametersPage);
        spinZoom->setObjectName(QStringLiteral("spinZoom"));
        spinZoom->setMinimumSize(QSize(100, 0));
        spinZoom->setMinimum(-1);
        spinZoom->setMaximum(15);
        spinZoom->setSingleStep(0.1);

        hboxLayout3->addWidget(spinZoom);


        vboxLayout->addLayout(hboxLayout3);

        labelAngle = new QLabel(ParametersPage);
        labelAngle->setObjectName(QStringLiteral("labelAngle"));

        vboxLayout->addWidget(labelAngle);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem3);

        spinAngle = new QDoubleSpinBox(ParametersPage);
        spinAngle->setObjectName(QStringLiteral("spinAngle"));
        spinAngle->setMinimumSize(QSize(100, 0));
        spinAngle->setDecimals(1);
        spinAngle->setMinimum(0);
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(5);

        hboxLayout4->addWidget(spinAngle);


        vboxLayout->addLayout(hboxLayout4);

        labelDefault = new QLabel(ParametersPage);
        labelDefault->setObjectName(QStringLiteral("labelDefault"));

        vboxLayout->addWidget(labelDefault);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem4);

        buttonRestore = new QPushButton(ParametersPage);
        buttonRestore->setObjectName(QStringLiteral("buttonRestore"));

        hboxLayout5->addWidget(buttonRestore);


        vboxLayout->addLayout(hboxLayout5);

        labelBookmarks = new QLabel(ParametersPage);
        labelBookmarks->setObjectName(QStringLiteral("labelBookmarks"));

        vboxLayout->addWidget(labelBookmarks);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QStringLiteral("hboxLayout6"));
        spacerItem5 = new QSpacerItem(84, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem5);

        buttonLoad = new QPushButton(ParametersPage);
        buttonLoad->setObjectName(QStringLiteral("buttonLoad"));

        hboxLayout6->addWidget(buttonLoad);

        buttonSave = new QPushButton(ParametersPage);
        buttonSave->setObjectName(QStringLiteral("buttonSave"));

        hboxLayout6->addWidget(buttonSave);


        vboxLayout->addLayout(hboxLayout6);

        spacerItem6 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem6);

        QWidget::setTabOrder(editJuliaX, editJuliaY);
        QWidget::setTabOrder(editJuliaY, editPositionX);
        QWidget::setTabOrder(editPositionX, editPositionY);
        QWidget::setTabOrder(editPositionY, spinZoom);
        QWidget::setTabOrder(spinZoom, spinAngle);
        QWidget::setTabOrder(spinAngle, buttonRestore);

        retranslateUi(ParametersPage);

        QMetaObject::connectSlotsByName(ParametersPage);
    } // setupUi

    void retranslateUi(QWidget *ParametersPage)
    {
        ParametersPage->setWindowTitle(QApplication::translate("ParametersPage", "Parameters", 0));
        label->setText(QApplication::translate("ParametersPage", "Fractal Type", 0));
        editType->setText(QString());
        buttonType->setText(QApplication::translate("ParametersPage", "...", 0));
        labelJulia->setText(QApplication::translate("ParametersPage", "Julia Parameters", 0));
        labelJuliaX->setText(QApplication::translate("ParametersPage", "X:", 0));
        editJuliaX->setText(QString());
        labelJuliaY->setText(QApplication::translate("ParametersPage", "Y:", 0));
        editJuliaY->setText(QString());
        label_3->setText(QApplication::translate("ParametersPage", "Input Parameter t (0 - 1 Analytic)", 0));
        label_5->setText(QApplication::translate("ParametersPage", "t", 0));
        labelPosition->setText(QApplication::translate("ParametersPage", "View Position", 0));
        labelPositionX->setText(QApplication::translate("ParametersPage", "X:", 0));
        editPositionX->setText(QString());
        labelPositionY->setText(QApplication::translate("ParametersPage", "Y:", 0));
        editPositionY->setText(QString());
        labelZoom->setText(QApplication::translate("ParametersPage", "Zoom Factor", 0));
        spinZoom->setPrefix(QApplication::translate("ParametersPage", "10^", 0));
        labelAngle->setText(QApplication::translate("ParametersPage", "Rotation Angle", 0));
        spinAngle->setSuffix(QApplication::translate("ParametersPage", " deg", 0));
        labelDefault->setText(QApplication::translate("ParametersPage", "Default Position", 0));
        buttonRestore->setText(QApplication::translate("ParametersPage", "Restore", 0));
        labelBookmarks->setText(QApplication::translate("ParametersPage", "Bookmarks", 0));
        buttonLoad->setText(QApplication::translate("ParametersPage", "Load...", 0));
        buttonSave->setText(QApplication::translate("ParametersPage", "Save...", 0));
    } // retranslateUi

};

namespace Ui {
    class ParametersPage: public Ui_ParametersPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETERSPAGE_H
