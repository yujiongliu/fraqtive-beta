/********************************************************************************
** Form generated from reading UI file 'fractaltypewidget.ui'
**
** Created: Mon Jan 9 20:35:12 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRACTALTYPEWIDGET_H
#define UI_FRACTALTYPEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "doubleedit.h"

QT_BEGIN_NAMESPACE

class Ui_FractalTypeWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupSet;
    QGridLayout *gridLayout1;
    QRadioButton *radioMandelbrot;
    QRadioButton *radioJulia;
    QHBoxLayout *hboxLayout;
    QLabel *labelJuliaX;
    DoubleEdit *editJuliaX;
    QSpacerItem *spacerItem;
    QLabel *labelJuliaY;
    DoubleEdit *editJuliaY;
    QSpacerItem *spacerItem1;
    QGroupBox *groupVariant;
    QVBoxLayout *vboxLayout;
    QRadioButton *radioNormal;
    QRadioButton *radioConjugate;
    QRadioButton *radioAbsolute;
    QRadioButton *radioAbsoluteIm;
    QGroupBox *groupExponent;
    QGridLayout *gridLayout2;
    QRadioButton *radioIntegral;
    QSpinBox *spinIntegral;
    QRadioButton *radioReal;
    QDoubleSpinBox *spinReal;
    QDoubleSpinBox *spinB1;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout1;
    QLabel *labelFormula;
    QLabel *valueFormula;

    void setupUi(QWidget *FractalTypeWidget)
    {
        if (FractalTypeWidget->objectName().isEmpty())
            FractalTypeWidget->setObjectName(QString::fromUtf8("FractalTypeWidget"));
        FractalTypeWidget->resize(400, 250);
        gridLayout = new QGridLayout(FractalTypeWidget);
        gridLayout->setSpacing(9);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupSet = new QGroupBox(FractalTypeWidget);
        groupSet->setObjectName(QString::fromUtf8("groupSet"));
        gridLayout1 = new QGridLayout(groupSet);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        radioMandelbrot = new QRadioButton(groupSet);
        radioMandelbrot->setObjectName(QString::fromUtf8("radioMandelbrot"));
        radioMandelbrot->setChecked(true);

        gridLayout1->addWidget(radioMandelbrot, 0, 0, 1, 1);

        radioJulia = new QRadioButton(groupSet);
        radioJulia->setObjectName(QString::fromUtf8("radioJulia"));

        gridLayout1->addWidget(radioJulia, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        labelJuliaX = new QLabel(groupSet);
        labelJuliaX->setObjectName(QString::fromUtf8("labelJuliaX"));

        hboxLayout->addWidget(labelJuliaX);

        editJuliaX = new DoubleEdit(groupSet);
        editJuliaX->setObjectName(QString::fromUtf8("editJuliaX"));
        editJuliaX->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editJuliaX->sizePolicy().hasHeightForWidth());
        editJuliaX->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(editJuliaX);

        spacerItem = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        labelJuliaY = new QLabel(groupSet);
        labelJuliaY->setObjectName(QString::fromUtf8("labelJuliaY"));

        hboxLayout->addWidget(labelJuliaY);

        editJuliaY = new DoubleEdit(groupSet);
        editJuliaY->setObjectName(QString::fromUtf8("editJuliaY"));
        editJuliaY->setEnabled(false);
        sizePolicy.setHeightForWidth(editJuliaY->sizePolicy().hasHeightForWidth());
        editJuliaY->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(editJuliaY);

        spacerItem1 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        gridLayout1->addLayout(hboxLayout, 1, 1, 1, 1);


        gridLayout->addWidget(groupSet, 0, 0, 1, 2);

        groupVariant = new QGroupBox(FractalTypeWidget);
        groupVariant->setObjectName(QString::fromUtf8("groupVariant"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupVariant->sizePolicy().hasHeightForWidth());
        groupVariant->setSizePolicy(sizePolicy1);
        vboxLayout = new QVBoxLayout(groupVariant);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        radioNormal = new QRadioButton(groupVariant);
        radioNormal->setObjectName(QString::fromUtf8("radioNormal"));
        radioNormal->setChecked(true);

        vboxLayout->addWidget(radioNormal);

        radioConjugate = new QRadioButton(groupVariant);
        radioConjugate->setObjectName(QString::fromUtf8("radioConjugate"));

        vboxLayout->addWidget(radioConjugate);

        radioAbsolute = new QRadioButton(groupVariant);
        radioAbsolute->setObjectName(QString::fromUtf8("radioAbsolute"));

        vboxLayout->addWidget(radioAbsolute);

        radioAbsoluteIm = new QRadioButton(groupVariant);
        radioAbsoluteIm->setObjectName(QString::fromUtf8("radioAbsoluteIm"));

        vboxLayout->addWidget(radioAbsoluteIm);


        gridLayout->addWidget(groupVariant, 1, 0, 2, 1);

        groupExponent = new QGroupBox(FractalTypeWidget);
        groupExponent->setObjectName(QString::fromUtf8("groupExponent"));
        sizePolicy1.setHeightForWidth(groupExponent->sizePolicy().hasHeightForWidth());
        groupExponent->setSizePolicy(sizePolicy1);
        gridLayout2 = new QGridLayout(groupExponent);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        radioIntegral = new QRadioButton(groupExponent);
        radioIntegral->setObjectName(QString::fromUtf8("radioIntegral"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(radioIntegral->sizePolicy().hasHeightForWidth());
        radioIntegral->setSizePolicy(sizePolicy2);
        radioIntegral->setChecked(true);

        gridLayout2->addWidget(radioIntegral, 0, 0, 1, 1);

        spinIntegral = new QSpinBox(groupExponent);
        spinIntegral->setObjectName(QString::fromUtf8("spinIntegral"));
        spinIntegral->setMinimum(2);
        spinIntegral->setMaximum(6);

        gridLayout2->addWidget(spinIntegral, 0, 1, 1, 1);

        radioReal = new QRadioButton(groupExponent);
        radioReal->setObjectName(QString::fromUtf8("radioReal"));
        sizePolicy2.setHeightForWidth(radioReal->sizePolicy().hasHeightForWidth());
        radioReal->setSizePolicy(sizePolicy2);

        gridLayout2->addWidget(radioReal, 1, 0, 1, 1);

        spinReal = new QDoubleSpinBox(groupExponent);
        spinReal->setObjectName(QString::fromUtf8("spinReal"));
        spinReal->setEnabled(false);
        spinReal->setMinimum(1);
        spinReal->setMaximum(20);
        spinReal->setSingleStep(0.1);
        spinReal->setValue(2.5);

        gridLayout2->addWidget(spinReal, 1, 1, 1, 1);


        gridLayout->addWidget(groupExponent, 1, 1, 1, 1);

        spinB1 = new QDoubleSpinBox(FractalTypeWidget);
        spinB1->setObjectName(QString::fromUtf8("spinB1"));
        spinB1->setEnabled(true);
        spinB1->setMinimum(1);
        spinB1->setMaximum(20);
        spinB1->setSingleStep(0.1);
        spinB1->setValue(2.5);

        gridLayout->addWidget(spinB1, 4, 2, 1, 1);

        spacerItem2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem2, 2, 1, 2, 1);

        spacerItem3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem3, 3, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        labelFormula = new QLabel(FractalTypeWidget);
        labelFormula->setObjectName(QString::fromUtf8("labelFormula"));

        hboxLayout1->addWidget(labelFormula);

        valueFormula = new QLabel(FractalTypeWidget);
        valueFormula->setObjectName(QString::fromUtf8("valueFormula"));
        sizePolicy1.setHeightForWidth(valueFormula->sizePolicy().hasHeightForWidth());
        valueFormula->setSizePolicy(sizePolicy1);
        valueFormula->setTextFormat(Qt::RichText);

        hboxLayout1->addWidget(valueFormula);


        gridLayout->addLayout(hboxLayout1, 4, 0, 1, 2);

        QWidget::setTabOrder(radioMandelbrot, radioJulia);
        QWidget::setTabOrder(radioJulia, editJuliaX);
        QWidget::setTabOrder(editJuliaX, editJuliaY);

        retranslateUi(FractalTypeWidget);
        QObject::connect(radioJulia, SIGNAL(toggled(bool)), editJuliaX, SLOT(setEnabled(bool)));
        QObject::connect(radioJulia, SIGNAL(toggled(bool)), editJuliaY, SLOT(setEnabled(bool)));
        QObject::connect(radioIntegral, SIGNAL(toggled(bool)), spinIntegral, SLOT(setEnabled(bool)));
        QObject::connect(radioReal, SIGNAL(toggled(bool)), spinReal, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(FractalTypeWidget);
    } // setupUi

    void retranslateUi(QWidget *FractalTypeWidget)
    {
        groupSet->setTitle(QApplication::translate("FractalTypeWidget", "Fractal Set", 0, QApplication::UnicodeUTF8));
        radioMandelbrot->setText(QApplication::translate("FractalTypeWidget", "Mandelbrot", 0, QApplication::UnicodeUTF8));
        radioJulia->setText(QApplication::translate("FractalTypeWidget", "Julia", 0, QApplication::UnicodeUTF8));
        labelJuliaX->setText(QApplication::translate("FractalTypeWidget", "X:", 0, QApplication::UnicodeUTF8));
        editJuliaX->setText(QApplication::translate("FractalTypeWidget", "0.5", 0, QApplication::UnicodeUTF8));
        labelJuliaY->setText(QApplication::translate("FractalTypeWidget", "Y:", 0, QApplication::UnicodeUTF8));
        editJuliaY->setText(QApplication::translate("FractalTypeWidget", "0.5", 0, QApplication::UnicodeUTF8));
        groupVariant->setTitle(QApplication::translate("FractalTypeWidget", "Variant", 0, QApplication::UnicodeUTF8));
        radioNormal->setText(QApplication::translate("FractalTypeWidget", "Normal", 0, QApplication::UnicodeUTF8));
        radioConjugate->setText(QApplication::translate("FractalTypeWidget", "Conjugate", 0, QApplication::UnicodeUTF8));
        radioAbsolute->setText(QApplication::translate("FractalTypeWidget", "Absolute", 0, QApplication::UnicodeUTF8));
        radioAbsoluteIm->setText(QApplication::translate("FractalTypeWidget", "Absolute Im.", 0, QApplication::UnicodeUTF8));
        groupExponent->setTitle(QApplication::translate("FractalTypeWidget", "Exponent", 0, QApplication::UnicodeUTF8));
        radioIntegral->setText(QApplication::translate("FractalTypeWidget", "Integral", 0, QApplication::UnicodeUTF8));
        radioReal->setText(QApplication::translate("FractalTypeWidget", "Real", 0, QApplication::UnicodeUTF8));
        labelFormula->setText(QApplication::translate("FractalTypeWidget", "Formula:", 0, QApplication::UnicodeUTF8));
        valueFormula->setText(QString());
        Q_UNUSED(FractalTypeWidget);
    } // retranslateUi

};

namespace Ui {
    class FractalTypeWidget: public Ui_FractalTypeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRACTALTYPEWIDGET_H
