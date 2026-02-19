/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *b_play;
    QPushButton *b_stop;
    QPushButton *b_restart;
    QPushButton *b_previous;
    QPushButton *b_next;
    QSlider *horizontalSlider;
    QLabel *l_volume;
    QComboBox *comboBox;
    QLabel *l_station;
    QTreeView *treeView;
    QLabel *l_logmessages;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(400, 400);
        Widget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);"));
        b_play = new QPushButton(Widget);
        b_play->setObjectName("b_play");
        b_play->setGeometry(QRect(60, 70, 84, 23));
        b_play->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(87, 227, 137);"));
        b_stop = new QPushButton(Widget);
        b_stop->setObjectName("b_stop");
        b_stop->setGeometry(QRect(160, 70, 84, 23));
        b_stop->setStyleSheet(QString::fromUtf8("background-color: rgb(165, 29, 45);"));
        b_restart = new QPushButton(Widget);
        b_restart->setObjectName("b_restart");
        b_restart->setGeometry(QRect(260, 70, 84, 23));
        b_restart->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 95, 180);"));
        b_previous = new QPushButton(Widget);
        b_previous->setObjectName("b_previous");
        b_previous->setGeometry(QRect(100, 120, 84, 23));
        b_previous->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 171, 143);"));
        b_next = new QPushButton(Widget);
        b_next->setObjectName("b_next");
        b_next->setGeometry(QRect(210, 120, 84, 23));
        b_next->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(249, 240, 107);"));
        horizontalSlider = new QSlider(Widget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(70, 180, 261, 16));
        horizontalSlider->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        l_volume = new QLabel(Widget);
        l_volume->setObjectName("l_volume");
        l_volume->setGeometry(QRect(10, 180, 61, 16));
        comboBox = new QComboBox(Widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(60, 20, 281, 23));
        l_station = new QLabel(Widget);
        l_station->setObjectName("l_station");
        l_station->setGeometry(QRect(10, 20, 41, 16));
        treeView = new QTreeView(Widget);
        treeView->setObjectName("treeView");
        treeView->setGeometry(QRect(10, 300, 371, 81));
        treeView->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        l_logmessages = new QLabel(Widget);
        l_logmessages->setObjectName("l_logmessages");
        l_logmessages->setGeometry(QRect(10, 270, 101, 16));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Radio Player", nullptr));
        b_play->setText(QCoreApplication::translate("Widget", "Play", nullptr));
        b_stop->setText(QCoreApplication::translate("Widget", "Stop", nullptr));
        b_restart->setText(QCoreApplication::translate("Widget", "Restart", nullptr));
        b_previous->setText(QCoreApplication::translate("Widget", "Previous", nullptr));
        b_next->setText(QCoreApplication::translate("Widget", "Next", nullptr));
        l_volume->setText(QCoreApplication::translate("Widget", "Volume", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "Adrar", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "Chlef", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Widget", "Laghouat", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Widget", "Oumbouaghi", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Widget", "Batna", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Widget", "Bejaia", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("Widget", "Biskra", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("Widget", "Bechar", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("Widget", "Blida", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("Widget", "Bouira", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("Widget", "Tamanrasset", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("Widget", "Tebessa", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("Widget", "Tlemcen", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("Widget", "Tiaret", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("Widget", "Tiziouzou", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("Widget", "Elbahdja", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("Widget", "Djelfa", nullptr));
        comboBox->setItemText(17, QCoreApplication::translate("Widget", "Jijel", nullptr));
        comboBox->setItemText(18, QCoreApplication::translate("Widget", "Setif", nullptr));
        comboBox->setItemText(19, QCoreApplication::translate("Widget", "Saida", nullptr));
        comboBox->setItemText(20, QCoreApplication::translate("Widget", "Skikda", nullptr));
        comboBox->setItemText(21, QCoreApplication::translate("Widget", "Sidibelabes", nullptr));
        comboBox->setItemText(22, QCoreApplication::translate("Widget", "Annaba", nullptr));
        comboBox->setItemText(23, QCoreApplication::translate("Widget", "Guelma", nullptr));
        comboBox->setItemText(24, QCoreApplication::translate("Widget", "Constantine", nullptr));
        comboBox->setItemText(25, QCoreApplication::translate("Widget", "Medea", nullptr));
        comboBox->setItemText(26, QCoreApplication::translate("Widget", "Mostaganem", nullptr));
        comboBox->setItemText(27, QCoreApplication::translate("Widget", "Msila", nullptr));
        comboBox->setItemText(28, QCoreApplication::translate("Widget", "Mascara", nullptr));
        comboBox->setItemText(29, QCoreApplication::translate("Widget", "Ouargla", nullptr));
        comboBox->setItemText(30, QCoreApplication::translate("Widget", "Oran", nullptr));
        comboBox->setItemText(31, QCoreApplication::translate("Widget", "radioelbayedh", nullptr));
        comboBox->setItemText(32, QCoreApplication::translate("Widget", "Illizi", nullptr));
        comboBox->setItemText(33, QCoreApplication::translate("Widget", "bordjboubrreridj", nullptr));
        comboBox->setItemText(34, QCoreApplication::translate("Widget", "Boumerdes", nullptr));
        comboBox->setItemText(35, QCoreApplication::translate("Widget", "Taref", nullptr));
        comboBox->setItemText(36, QCoreApplication::translate("Widget", "Tindouf", nullptr));
        comboBox->setItemText(37, QCoreApplication::translate("Widget", "Tissemssilt", nullptr));
        comboBox->setItemText(38, QCoreApplication::translate("Widget", "Ouedsouf", nullptr));
        comboBox->setItemText(39, QCoreApplication::translate("Widget", "Khenchla", nullptr));
        comboBox->setItemText(40, QCoreApplication::translate("Widget", "SoukAhras", nullptr));
        comboBox->setItemText(41, QCoreApplication::translate("Widget", "Tipaza", nullptr));
        comboBox->setItemText(42, QCoreApplication::translate("Widget", "Mila", nullptr));
        comboBox->setItemText(43, QCoreApplication::translate("Widget", "Aindefla", nullptr));
        comboBox->setItemText(44, QCoreApplication::translate("Widget", "Naama", nullptr));
        comboBox->setItemText(45, QCoreApplication::translate("Widget", "AinTimouchent", nullptr));
        comboBox->setItemText(46, QCoreApplication::translate("Widget", "Ghardaia", nullptr));
        comboBox->setItemText(47, QCoreApplication::translate("Widget", "Relizan", nullptr));
        comboBox->setItemText(48, QCoreApplication::translate("Widget", "Culture", nullptr));
        comboBox->setItemText(49, QCoreApplication::translate("Widget", "Chaine1", nullptr));
        comboBox->setItemText(50, QCoreApplication::translate("Widget", "Chaine2", nullptr));
        comboBox->setItemText(51, QCoreApplication::translate("Widget", "Chaine3", nullptr));
        comboBox->setItemText(52, QCoreApplication::translate("Widget", "Internationale", nullptr));
        comboBox->setItemText(53, QCoreApplication::translate("Widget", "Coran", nullptr));
        comboBox->setItemText(54, QCoreApplication::translate("Widget", "Jeunesse", nullptr));

        l_station->setText(QCoreApplication::translate("Widget", "Station", nullptr));
        l_logmessages->setText(QCoreApplication::translate("Widget", "Log/Messages :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
