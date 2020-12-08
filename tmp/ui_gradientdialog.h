/********************************************************************************
** Form generated from reading UI file 'gradientdialog.ui'
**
** Created: Mon Jan 9 20:35:12 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADIENTDIALOG_H
#define UI_GRADIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "gradienteditor.h"
#include "xmlui/gradientwidget.h"

QT_BEGIN_NAMESPACE

class Ui_GradientDialog
{
public:
    QVBoxLayout *topLayout;
    XmlUi::GradientWidget *promptWidget;
    QHBoxLayout *promptLayout;
    QLabel *promptPixmap;
    QLabel *promptLabel;
    QFrame *line;
    QWidget *mainWidget;
    QVBoxLayout *verticalLayout;
    GradientEditor *gradient;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GradientDialog)
    {
        if (GradientDialog->objectName().isEmpty())
            GradientDialog->setObjectName(QString::fromUtf8("GradientDialog"));
        GradientDialog->resize(525, 450);
        topLayout = new QVBoxLayout(GradientDialog);
        topLayout->setSpacing(0);
        topLayout->setContentsMargins(0, 0, 0, 0);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        promptWidget = new XmlUi::GradientWidget(GradientDialog);
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

        line = new QFrame(GradientDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        topLayout->addWidget(line);

        mainWidget = new QWidget(GradientDialog);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        verticalLayout = new QVBoxLayout(mainWidget);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gradient = new GradientEditor(mainWidget);
        gradient->setObjectName(QString::fromUtf8("gradient"));

        verticalLayout->addWidget(gradient);

        buttonBox = new QDialogButtonBox(mainWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        topLayout->addWidget(mainWidget);

        topLayout->setStretch(2, 1);

        retranslateUi(GradientDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GradientDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GradientDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GradientDialog);
    } // setupUi

    void retranslateUi(QDialog *GradientDialog)
    {
        GradientDialog->setWindowTitle(QApplication::translate("GradientDialog", "Edit Gradient", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GradientDialog: public Ui_GradientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADIENTDIALOG_H
