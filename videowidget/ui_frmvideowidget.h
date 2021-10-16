/********************************************************************************
** Form generated from reading UI file 'frmvideowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMVIDEOWIDGET_H
#define UI_FRMVIDEOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "videowidget.h"

QT_BEGIN_NAMESPACE

class Ui_frmVideoWidget
{
public:
    QGridLayout *gridLayout;
    VideoWidget *videoWidget2;
    VideoWidget *videoWidget1;
    VideoWidget *videoWidget4;
    VideoWidget *videoWidget3;
    QLabel *label;

    void setupUi(QWidget *frmVideoWidget)
    {
        if (frmVideoWidget->objectName().isEmpty())
            frmVideoWidget->setObjectName(QStringLiteral("frmVideoWidget"));
        frmVideoWidget->resize(500, 300);
        gridLayout = new QGridLayout(frmVideoWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        videoWidget2 = new VideoWidget(frmVideoWidget);
        videoWidget2->setObjectName(QStringLiteral("videoWidget2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(videoWidget2->sizePolicy().hasHeightForWidth());
        videoWidget2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(videoWidget2, 0, 1, 1, 1);

        videoWidget1 = new VideoWidget(frmVideoWidget);
        videoWidget1->setObjectName(QStringLiteral("videoWidget1"));
        sizePolicy.setHeightForWidth(videoWidget1->sizePolicy().hasHeightForWidth());
        videoWidget1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(videoWidget1, 0, 0, 1, 1);

        videoWidget4 = new VideoWidget(frmVideoWidget);
        videoWidget4->setObjectName(QStringLiteral("videoWidget4"));
        sizePolicy.setHeightForWidth(videoWidget4->sizePolicy().hasHeightForWidth());
        videoWidget4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(videoWidget4, 1, 1, 1, 1);

        videoWidget3 = new VideoWidget(frmVideoWidget);
        videoWidget3->setObjectName(QStringLiteral("videoWidget3"));
        sizePolicy.setHeightForWidth(videoWidget3->sizePolicy().hasHeightForWidth());
        videoWidget3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(videoWidget3, 1, 0, 1, 1);

        label = new QLabel(frmVideoWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 2, 0, 1, 2);


        retranslateUi(frmVideoWidget);

        QMetaObject::connectSlotsByName(frmVideoWidget);
    } // setupUi

    void retranslateUi(QWidget *frmVideoWidget)
    {
        frmVideoWidget->setWindowTitle(QApplication::translate("frmVideoWidget", "Form", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class frmVideoWidget: public Ui_frmVideoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMVIDEOWIDGET_H
