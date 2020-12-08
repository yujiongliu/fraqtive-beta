/********************************************************************************
** Form generated from reading UI file 'renamedialog.ui'
**
** Created: Mon Jan 9 20:35:12 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMEDIALOG_H
#define UI_RENAMEDIALOG_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "xmlui/gradientwidget.h"

QT_BEGIN_NAMESPACE

class Ui_RenameDialog
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
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RenameDialog)
    {
        if (RenameDialog->objectName().isEmpty())
            RenameDialog->setObjectName(QString::fromUtf8("RenameDialog"));
        RenameDialog->resize(350, 106);
        topLayout = new QVBoxLayout(RenameDialog);
        topLayout->setSpacing(0);
        topLayout->setContentsMargins(0, 0, 0, 0);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        promptWidget = new XmlUi::GradientWidget(RenameDialog);
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

        line = new QFrame(RenameDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        topLayout->addWidget(line);

        mainWidget = new QWidget(RenameDialog);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        verticalLayout = new QVBoxLayout(mainWidget);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(mainWidget);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        lineEdit = new QLineEdit(mainWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaxLength(60);

        hboxLayout->addWidget(lineEdit);


        verticalLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(mainWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        topLayout->addWidget(mainWidget);

        topLayout->setStretch(2, 1);

        retranslateUi(RenameDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RenameDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RenameDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RenameDialog);
    } // setupUi

    void retranslateUi(QDialog *RenameDialog)
    {
        RenameDialog->setWindowTitle(QApplication::translate("RenameDialog", "Rename", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RenameDialog", "Name:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RenameDialog: public Ui_RenameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAMEDIALOG_H
