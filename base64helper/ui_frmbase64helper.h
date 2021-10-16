/********************************************************************************
** Form generated from reading UI file 'frmbase64helper.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMBASE64HELPER_H
#define UI_FRMBASE64HELPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmBase64Helper
{
public:
    QGridLayout *gridLayout;
    QLineEdit *txtFile;
    QPushButton *btnOpen;
    QPushButton *btnImageToBase64;
    QPushButton *btnBase64ToImage;
    QLineEdit *txtText;
    QPushButton *btnClear;
    QPushButton *btnTextToBase64;
    QPushButton *btnBase64ToText;
    QLabel *labImage;
    QTextEdit *txtBase64;

    void setupUi(QWidget *frmBase64Helper)
    {
        if (frmBase64Helper->objectName().isEmpty())
            frmBase64Helper->setObjectName(QString::fromUtf8("frmBase64Helper"));
        frmBase64Helper->resize(800, 600);
        gridLayout = new QGridLayout(frmBase64Helper);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        txtFile = new QLineEdit(frmBase64Helper);
        txtFile->setObjectName(QString::fromUtf8("txtFile"));

        gridLayout->addWidget(txtFile, 0, 0, 1, 1);

        btnOpen = new QPushButton(frmBase64Helper);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));
        btnOpen->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnOpen, 0, 1, 1, 1);

        btnImageToBase64 = new QPushButton(frmBase64Helper);
        btnImageToBase64->setObjectName(QString::fromUtf8("btnImageToBase64"));
        btnImageToBase64->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnImageToBase64, 0, 2, 1, 1);

        btnBase64ToImage = new QPushButton(frmBase64Helper);
        btnBase64ToImage->setObjectName(QString::fromUtf8("btnBase64ToImage"));
        btnBase64ToImage->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnBase64ToImage, 0, 3, 1, 1);

        txtText = new QLineEdit(frmBase64Helper);
        txtText->setObjectName(QString::fromUtf8("txtText"));

        gridLayout->addWidget(txtText, 1, 0, 1, 1);

        btnClear = new QPushButton(frmBase64Helper);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnClear, 1, 1, 1, 1);

        btnTextToBase64 = new QPushButton(frmBase64Helper);
        btnTextToBase64->setObjectName(QString::fromUtf8("btnTextToBase64"));
        btnTextToBase64->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnTextToBase64, 1, 2, 1, 1);

        btnBase64ToText = new QPushButton(frmBase64Helper);
        btnBase64ToText->setObjectName(QString::fromUtf8("btnBase64ToText"));
        btnBase64ToText->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnBase64ToText, 1, 3, 1, 1);

        labImage = new QLabel(frmBase64Helper);
        labImage->setObjectName(QString::fromUtf8("labImage"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labImage->sizePolicy().hasHeightForWidth());
        labImage->setSizePolicy(sizePolicy);
        labImage->setFrameShape(QFrame::Box);
        labImage->setFrameShadow(QFrame::Sunken);
        labImage->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labImage, 2, 0, 1, 4);

        txtBase64 = new QTextEdit(frmBase64Helper);
        txtBase64->setObjectName(QString::fromUtf8("txtBase64"));

        gridLayout->addWidget(txtBase64, 3, 0, 1, 4);


        retranslateUi(frmBase64Helper);

        QMetaObject::connectSlotsByName(frmBase64Helper);
    } // setupUi

    void retranslateUi(QWidget *frmBase64Helper)
    {
        frmBase64Helper->setWindowTitle(QCoreApplication::translate("frmBase64Helper", "Widget", nullptr));
        txtFile->setText(QCoreApplication::translate("frmBase64Helper", "E:/myFile/\347\276\216\345\245\263\345\233\276\347\211\207/2.jpg", nullptr));
        btnOpen->setText(QCoreApplication::translate("frmBase64Helper", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        btnImageToBase64->setText(QCoreApplication::translate("frmBase64Helper", "\345\233\276\347\211\207\350\275\254base64", nullptr));
        btnBase64ToImage->setText(QCoreApplication::translate("frmBase64Helper", "base64\350\275\254\345\233\276\347\211\207", nullptr));
        txtText->setText(QCoreApplication::translate("frmBase64Helper", "\346\270\270\351\276\231 feiyangqingyun QQ: 517216493", nullptr));
        btnClear->setText(QCoreApplication::translate("frmBase64Helper", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        btnTextToBase64->setText(QCoreApplication::translate("frmBase64Helper", "\346\226\207\345\255\227\350\275\254base64", nullptr));
        btnBase64ToText->setText(QCoreApplication::translate("frmBase64Helper", "base64\350\275\254\346\226\207\345\255\227", nullptr));
        labImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class frmBase64Helper: public Ui_frmBase64Helper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMBASE64HELPER_H
