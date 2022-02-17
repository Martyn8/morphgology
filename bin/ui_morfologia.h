/********************************************************************************
** Form generated from reading UI file 'morfologia.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MORFOLOGIA_H
#define UI_MORFOLOGIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Morfologia
{
public:
    QAction *actionOtworz;
    QWidget *centralwidget;
    QLabel *labelOryginal;
    QLabel *labelBinarny;
    QLabel *labelPrzetworzony;
    QSplitter *splitter;
    QPushButton *Dylatacja;
    QPushButton *Erozja;
    QPushButton *Otwarcie;
    QPushButton *Domkniecie;
    QPushButton *TopHat;
    QPushButton *BottomHat;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *labelNapis;
    QPushButton *Reset;
    QMenuBar *menubar;
    QMenu *menuPlik;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Morfologia)
    {
        if (Morfologia->objectName().isEmpty())
            Morfologia->setObjectName(QString::fromUtf8("Morfologia"));
        Morfologia->resize(563, 369);
        actionOtworz = new QAction(Morfologia);
        actionOtworz->setObjectName(QString::fromUtf8("actionOtworz"));
        centralwidget = new QWidget(Morfologia);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelOryginal = new QLabel(centralwidget);
        labelOryginal->setObjectName(QString::fromUtf8("labelOryginal"));
        labelOryginal->setGeometry(QRect(20, 10, 161, 191));
        labelBinarny = new QLabel(centralwidget);
        labelBinarny->setObjectName(QString::fromUtf8("labelBinarny"));
        labelBinarny->setGeometry(QRect(200, 10, 161, 191));
        labelPrzetworzony = new QLabel(centralwidget);
        labelPrzetworzony->setObjectName(QString::fromUtf8("labelPrzetworzony"));
        labelPrzetworzony->setGeometry(QRect(380, 10, 161, 191));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(20, 240, 521, 23));
        splitter->setOrientation(Qt::Horizontal);
        Dylatacja = new QPushButton(splitter);
        Dylatacja->setObjectName(QString::fromUtf8("Dylatacja"));
        splitter->addWidget(Dylatacja);
        Erozja = new QPushButton(splitter);
        Erozja->setObjectName(QString::fromUtf8("Erozja"));
        splitter->addWidget(Erozja);
        Otwarcie = new QPushButton(splitter);
        Otwarcie->setObjectName(QString::fromUtf8("Otwarcie"));
        splitter->addWidget(Otwarcie);
        Domkniecie = new QPushButton(splitter);
        Domkniecie->setObjectName(QString::fromUtf8("Domkniecie"));
        splitter->addWidget(Domkniecie);
        TopHat = new QPushButton(splitter);
        TopHat->setObjectName(QString::fromUtf8("TopHat"));
        splitter->addWidget(TopHat);
        BottomHat = new QPushButton(splitter);
        BottomHat->setObjectName(QString::fromUtf8("BottomHat"));
        splitter->addWidget(BottomHat);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 210, 81, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 210, 81, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(410, 210, 111, 16));
        labelNapis = new QLabel(centralwidget);
        labelNapis->setObjectName(QString::fromUtf8("labelNapis"));
        labelNapis->setGeometry(QRect(40, 300, 481, 21));
        Reset = new QPushButton(centralwidget);
        Reset->setObjectName(QString::fromUtf8("Reset"));
        Reset->setGeometry(QRect(240, 270, 81, 23));
        Morfologia->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Morfologia);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 563, 22));
        menuPlik = new QMenu(menubar);
        menuPlik->setObjectName(QString::fromUtf8("menuPlik"));
        Morfologia->setMenuBar(menubar);
        statusbar = new QStatusBar(Morfologia);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Morfologia->setStatusBar(statusbar);

        menubar->addAction(menuPlik->menuAction());
        menuPlik->addAction(actionOtworz);

        retranslateUi(Morfologia);

        QMetaObject::connectSlotsByName(Morfologia);
    } // setupUi

    void retranslateUi(QMainWindow *Morfologia)
    {
        Morfologia->setWindowTitle(QApplication::translate("Morfologia", "Morfologia", nullptr));
        actionOtworz->setText(QApplication::translate("Morfologia", "Otworz", nullptr));
        labelOryginal->setText(QString());
        labelBinarny->setText(QString());
        labelPrzetworzony->setText(QString());
        Dylatacja->setText(QApplication::translate("Morfologia", "Dylatacja", nullptr));
        Erozja->setText(QApplication::translate("Morfologia", "Erozja", nullptr));
        Otwarcie->setText(QApplication::translate("Morfologia", "Otwarcie", nullptr));
        Domkniecie->setText(QApplication::translate("Morfologia", "Domkni\304\231cie", nullptr));
        TopHat->setText(QApplication::translate("Morfologia", "Top hat", nullptr));
        BottomHat->setText(QApplication::translate("Morfologia", "Bottom hat", nullptr));
        label->setText(QApplication::translate("Morfologia", "Obraz oryginalny", nullptr));
        label_2->setText(QApplication::translate("Morfologia", "  Obraz binarny", nullptr));
        label_3->setText(QApplication::translate("Morfologia", " Obraz przetworzony", nullptr));
        labelNapis->setText(QString());
        Reset->setText(QApplication::translate("Morfologia", "Reset", nullptr));
        menuPlik->setTitle(QApplication::translate("Morfologia", "Plik", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Morfologia: public Ui_Morfologia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MORFOLOGIA_H
