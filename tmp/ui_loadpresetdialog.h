/********************************************************************************
** Form generated from reading UI file 'loadpresetdialog.ui'
**
** Created: Mon Jan 9 20:35:12 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADPRESETDIALOG_H
#define UI_LOADPRESETDIALOG_H

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
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "presetlistview.h"
#include "xmlui/gradientwidget.h"

QT_BEGIN_NAMESPACE

class Ui_LoadPresetDialog
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
    QTabWidget *tabWidget;
    QWidget *tabDefault;
    QVBoxLayout *vboxLayout;
    PresetListView *listDefault;
    QWidget *tabUser;
    QVBoxLayout *vboxLayout1;
    PresetListView *listUser;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LoadPresetDialog)
    {
        if (LoadPresetDialog->objectName().isEmpty())
            LoadPresetDialog->setObjectName(QString::fromUtf8("LoadPresetDialog"));
        LoadPresetDialog->resize(450, 380);
        topLayout = new QVBoxLayout(LoadPresetDialog);
        topLayout->setSpacing(0);
        topLayout->setContentsMargins(0, 0, 0, 0);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        promptWidget = new XmlUi::GradientWidget(LoadPresetDialog);
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

        line = new QFrame(LoadPresetDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        topLayout->addWidget(line);

        mainWidget = new QWidget(LoadPresetDialog);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        verticalLayout = new QVBoxLayout(mainWidget);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(mainWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabDefault = new QWidget();
        tabDefault->setObjectName(QString::fromUtf8("tabDefault"));
        vboxLayout = new QVBoxLayout(tabDefault);
        vboxLayout->setContentsMargins(6, 6, 6, 6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        listDefault = new PresetListView(tabDefault);
        listDefault->setObjectName(QString::fromUtf8("listDefault"));

        vboxLayout->addWidget(listDefault);

        tabWidget->addTab(tabDefault, QString());
        tabUser = new QWidget();
        tabUser->setObjectName(QString::fromUtf8("tabUser"));
        vboxLayout1 = new QVBoxLayout(tabUser);
        vboxLayout1->setContentsMargins(6, 6, 6, 6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        listUser = new PresetListView(tabUser);
        listUser->setObjectName(QString::fromUtf8("listUser"));

        vboxLayout1->addWidget(listUser);

        tabWidget->addTab(tabUser, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(mainWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        topLayout->addWidget(mainWidget);

        topLayout->setStretch(2, 1);

        retranslateUi(LoadPresetDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LoadPresetDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LoadPresetDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LoadPresetDialog);
    } // setupUi

    void retranslateUi(QDialog *LoadPresetDialog)
    {
        LoadPresetDialog->setWindowTitle(QApplication::translate("LoadPresetDialog", "Load Preset", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabDefault), QApplication::translate("LoadPresetDialog", "Default Presets", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabUser), QApplication::translate("LoadPresetDialog", "My Presets", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoadPresetDialog: public Ui_LoadPresetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADPRESETDIALOG_H
