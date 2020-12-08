/********************************************************************************
** Form generated from reading UI file 'savebookmarkdialog.ui'
**
** Created: Mon Jan 9 20:35:12 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEBOOKMARKDIALOG_H
#define UI_SAVEBOOKMARKDIALOG_H

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
#include "bookmarklistview.h"
#include "xmlui/gradientwidget.h"

QT_BEGIN_NAMESPACE

class Ui_SaveBookmarkDialog
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
    QVBoxLayout *verticalLayout;
    BookmarkListView *listView;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *editName;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SaveBookmarkDialog)
    {
        if (SaveBookmarkDialog->objectName().isEmpty())
            SaveBookmarkDialog->setObjectName(QString::fromUtf8("SaveBookmarkDialog"));
        SaveBookmarkDialog->resize(450, 340);
        topLayout = new QVBoxLayout(SaveBookmarkDialog);
        topLayout->setSpacing(0);
        topLayout->setContentsMargins(0, 0, 0, 0);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        promptWidget = new XmlUi::GradientWidget(SaveBookmarkDialog);
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

        line = new QFrame(SaveBookmarkDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        topLayout->addWidget(line);

        mainWidget = new QWidget(SaveBookmarkDialog);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        verticalLayout_2 = new QVBoxLayout(mainWidget);
        verticalLayout_2->setSpacing(9);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listView = new BookmarkListView(mainWidget);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout->addWidget(listView);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(mainWidget);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        editName = new QLineEdit(mainWidget);
        editName->setObjectName(QString::fromUtf8("editName"));
        editName->setMaxLength(60);

        hboxLayout->addWidget(editName);


        verticalLayout->addLayout(hboxLayout);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(mainWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        topLayout->addWidget(mainWidget);

        topLayout->setStretch(2, 1);

        retranslateUi(SaveBookmarkDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SaveBookmarkDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SaveBookmarkDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SaveBookmarkDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveBookmarkDialog)
    {
        SaveBookmarkDialog->setWindowTitle(QApplication::translate("SaveBookmarkDialog", "Save Bookmark", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SaveBookmarkDialog", "Bookmark Name:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SaveBookmarkDialog: public Ui_SaveBookmarkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEBOOKMARKDIALOG_H
