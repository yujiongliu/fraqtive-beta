/********************************************************************************
** Form generated from reading UI file 'fractaltypedialog.ui'
**
** Created: Mon Jan 9 20:35:12 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRACTALTYPEDIALOG_H
#define UI_FRACTALTYPEDIALOG_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "fractaltypewidget.h"
#include "viewcontainer.h"
#include "xmlui/gradientwidget.h"

QT_BEGIN_NAMESPACE

class Ui_FractalTypeDialog
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
    FractalTypeWidget *fractalTypeWidget;
    QVBoxLayout *vboxLayout;
    QGroupBox *groupPreview;
    QVBoxLayout *vboxLayout1;
    ViewContainer *viewContainer;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FractalTypeDialog)
    {
        if (FractalTypeDialog->objectName().isEmpty())
            FractalTypeDialog->setObjectName(QString::fromUtf8("FractalTypeDialog"));
        FractalTypeDialog->resize(650, 284);
        topLayout = new QVBoxLayout(FractalTypeDialog);
        topLayout->setSpacing(0);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        topLayout->setContentsMargins(0, 0, 0, 0);
        promptWidget = new XmlUi::GradientWidget(FractalTypeDialog);
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

        line = new QFrame(FractalTypeDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        topLayout->addWidget(line);

        mainWidget = new QWidget(FractalTypeDialog);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        verticalLayout = new QVBoxLayout(mainWidget);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(9);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        fractalTypeWidget = new FractalTypeWidget(mainWidget);
        fractalTypeWidget->setObjectName(QString::fromUtf8("fractalTypeWidget"));

        hboxLayout->addWidget(fractalTypeWidget);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupPreview = new QGroupBox(mainWidget);
        groupPreview->setObjectName(QString::fromUtf8("groupPreview"));
        vboxLayout1 = new QVBoxLayout(groupPreview);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        viewContainer = new ViewContainer(groupPreview);
        viewContainer->setObjectName(QString::fromUtf8("viewContainer"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(viewContainer->sizePolicy().hasHeightForWidth());
        viewContainer->setSizePolicy(sizePolicy);

        vboxLayout1->addWidget(viewContainer);


        vboxLayout->addWidget(groupPreview);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout);


        verticalLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(mainWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        topLayout->addWidget(mainWidget);

        topLayout->setStretch(2, 1);

        retranslateUi(FractalTypeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FractalTypeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FractalTypeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FractalTypeDialog);
    } // setupUi

    void retranslateUi(QDialog *FractalTypeDialog)
    {
        FractalTypeDialog->setWindowTitle(QApplication::translate("FractalTypeDialog", "Change Fractal Type", 0, QApplication::UnicodeUTF8));
        groupPreview->setTitle(QApplication::translate("FractalTypeDialog", "Preview", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FractalTypeDialog: public Ui_FractalTypeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRACTALTYPEDIALOG_H
