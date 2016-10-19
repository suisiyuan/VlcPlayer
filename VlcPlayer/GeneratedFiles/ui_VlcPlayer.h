/********************************************************************************
** Form generated from reading UI file 'VlcPlayer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VLCPLAYER_H
#define UI_VLCPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VlcPlayerClass
{
public:
    QGridLayout *gridLayout;
    QPushButton *startButton;
    QPushButton *stopButton;
    QLabel *video;

    void setupUi(QWidget *VlcPlayerClass)
    {
        if (VlcPlayerClass->objectName().isEmpty())
            VlcPlayerClass->setObjectName(QStringLiteral("VlcPlayerClass"));
        VlcPlayerClass->resize(603, 452);
        gridLayout = new QGridLayout(VlcPlayerClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        startButton = new QPushButton(VlcPlayerClass);
        startButton->setObjectName(QStringLiteral("startButton"));

        gridLayout->addWidget(startButton, 1, 0, 1, 1);

        stopButton = new QPushButton(VlcPlayerClass);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        gridLayout->addWidget(stopButton, 1, 1, 1, 1);

        video = new QLabel(VlcPlayerClass);
        video->setObjectName(QStringLiteral("video"));

        gridLayout->addWidget(video, 0, 0, 1, 2);


        retranslateUi(VlcPlayerClass);

        QMetaObject::connectSlotsByName(VlcPlayerClass);
    } // setupUi

    void retranslateUi(QWidget *VlcPlayerClass)
    {
        VlcPlayerClass->setWindowTitle(QApplication::translate("VlcPlayerClass", "VlcPlayer", 0));
        startButton->setText(QApplication::translate("VlcPlayerClass", "\345\274\200\345\247\213", 0));
        stopButton->setText(QApplication::translate("VlcPlayerClass", "\347\273\223\346\235\237", 0));
        video->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VlcPlayerClass: public Ui_VlcPlayerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VLCPLAYER_H
