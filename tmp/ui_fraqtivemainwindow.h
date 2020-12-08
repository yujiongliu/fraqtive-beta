/********************************************************************************
** Form generated from reading UI file 'fraqtivemainwindow.ui'
**
** Created: Mon Jan 9 20:35:12 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAQTIVEMAINWINDOW_H
#define UI_FRAQTIVEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "propertytoolbox.h"
#include "viewcontainer.h"

QT_BEGIN_NAMESPACE

class Ui_FraqtiveMainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *vboxLayout;
    ViewContainer *mainContainer;
    QDockWidget *dockProperties;
    QWidget *dockPropertiesContents;
    QVBoxLayout *vboxLayout1;
    PropertyToolBox *propertyToolBox;
    QDockWidget *dockPreview;
    QWidget *dockPreviewContents;
    QVBoxLayout *vboxLayout2;
    ViewContainer *previewContainer;

    void setupUi(QMainWindow *FraqtiveMainWindow)
    {
        if (FraqtiveMainWindow->objectName().isEmpty())
            FraqtiveMainWindow->setObjectName(QString::fromUtf8("FraqtiveMainWindow"));
        FraqtiveMainWindow->resize(880, 650);
        centralWidget = new QWidget(FraqtiveMainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        vboxLayout = new QVBoxLayout(centralWidget);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        mainContainer = new ViewContainer(centralWidget);
        mainContainer->setObjectName(QString::fromUtf8("mainContainer"));

        vboxLayout->addWidget(mainContainer);

        FraqtiveMainWindow->setCentralWidget(centralWidget);
        dockProperties = new QDockWidget(FraqtiveMainWindow);
        dockProperties->setObjectName(QString::fromUtf8("dockProperties"));
        dockPropertiesContents = new QWidget();
        dockPropertiesContents->setObjectName(QString::fromUtf8("dockPropertiesContents"));
        vboxLayout1 = new QVBoxLayout(dockPropertiesContents);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        propertyToolBox = new PropertyToolBox(dockPropertiesContents);
        propertyToolBox->setObjectName(QString::fromUtf8("propertyToolBox"));

        vboxLayout1->addWidget(propertyToolBox);

        dockProperties->setWidget(dockPropertiesContents);
        FraqtiveMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockProperties);
        dockPreview = new QDockWidget(FraqtiveMainWindow);
        dockPreview->setObjectName(QString::fromUtf8("dockPreview"));
        dockPreviewContents = new QWidget();
        dockPreviewContents->setObjectName(QString::fromUtf8("dockPreviewContents"));
        vboxLayout2 = new QVBoxLayout(dockPreviewContents);
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        previewContainer = new ViewContainer(dockPreviewContents);
        previewContainer->setObjectName(QString::fromUtf8("previewContainer"));

        vboxLayout2->addWidget(previewContainer);

        dockPreview->setWidget(dockPreviewContents);
        FraqtiveMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockPreview);

        retranslateUi(FraqtiveMainWindow);

        QMetaObject::connectSlotsByName(FraqtiveMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FraqtiveMainWindow)
    {
        FraqtiveMainWindow->setWindowTitle(QApplication::translate("FraqtiveMainWindow", "Fraqtive", 0, QApplication::UnicodeUTF8));
        dockProperties->setWindowTitle(QApplication::translate("FraqtiveMainWindow", "Properties", 0, QApplication::UnicodeUTF8));
        dockPreview->setWindowTitle(QApplication::translate("FraqtiveMainWindow", "Julia Preview", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FraqtiveMainWindow: public Ui_FraqtiveMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAQTIVEMAINWINDOW_H
