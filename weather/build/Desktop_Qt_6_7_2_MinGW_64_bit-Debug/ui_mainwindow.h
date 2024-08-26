/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QWidget *detail_widget;
    QGridLayout *gridLayout_4;
    QWidget *detail_wind_widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *wind_icon;
    QWidget *detail_wind_right_widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *wind_today;
    QLabel *power_today;
    QWidget *detail_pm_widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *pm_icon;
    QWidget *detail_pm_right_widget;
    QVBoxLayout *verticalLayout_5;
    QLabel *pm25;
    QLabel *pm25_today;
    QWidget *detail_humidness_widget;
    QHBoxLayout *horizontalLayout_10;
    QLabel *humidness_icon;
    QWidget *detail_humidness_right_widget;
    QVBoxLayout *verticalLayout_6;
    QLabel *humidness;
    QLabel *humidness_today;
    QWidget *detail_air_widget;
    QHBoxLayout *horizontalLayout_11;
    QLabel *air_icon;
    QWidget *detail_air_right_widget;
    QVBoxLayout *verticalLayout_7;
    QLabel *air;
    QLabel *air_today;
    QWidget *forecast_widget;
    QVBoxLayout *verticalLayout;
    QWidget *forcast_date_widget;
    QGridLayout *gridLayout;
    QLabel *week7;
    QLabel *week1;
    QLabel *week3;
    QLabel *week5;
    QLabel *week2;
    QLabel *week6;
    QLabel *date1;
    QLabel *week4;
    QLabel *date2;
    QLabel *date3;
    QLabel *date4;
    QLabel *date5;
    QLabel *date6;
    QLabel *date7;
    QWidget *forcast_weather_widget;
    QGridLayout *gridLayout_2;
    QLabel *type_icon7;
    QLabel *type_icon2;
    QLabel *type_icon6;
    QLabel *type_icon4;
    QLabel *type_icon5;
    QLabel *type_icon3;
    QLabel *type_icon1;
    QLabel *type1;
    QLabel *type2;
    QLabel *type3;
    QLabel *type4;
    QLabel *type5;
    QLabel *type6;
    QLabel *type7;
    QWidget *forcast_air_widget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *air1;
    QLabel *air2;
    QLabel *air3;
    QLabel *air4;
    QLabel *air5;
    QLabel *air6;
    QLabel *air7;
    QWidget *forcast_detail_widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *curve_label;
    QWidget *forcast_wind_widget;
    QGridLayout *gridLayout_3;
    QLabel *wind6;
    QLabel *wind4;
    QLabel *wind7;
    QLabel *wind3;
    QLabel *wind5;
    QLabel *wind2;
    QLabel *wind1;
    QLabel *power1;
    QLabel *power2;
    QLabel *power3;
    QLabel *power4;
    QLabel *power5;
    QLabel *power6;
    QLabel *power7;
    QWidget *weather_widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *weather_main_widget;
    QHBoxLayout *horizontalLayout_8;
    QLabel *weather_icon;
    QWidget *weather_main_right_widget;
    QVBoxLayout *verticalLayout_3;
    QWidget *weather_main_right_on_widget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *city;
    QSpacerItem *horizontalSpacer;
    QLabel *temperature;
    QLabel *weather_temperature;
    QWidget *weather_tip_widget;
    QHBoxLayout *horizontalLayout_9;
    QLabel *notice;
    QWidget *top_widget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *search_lineEdit;
    QPushButton *search_Button;
    QSpacerItem *horizontalSpacer_2;
    QLabel *today_date;
    QLabel *update_time;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 550);
        MainWindow->setMinimumSize(QSize(800, 550));
        MainWindow->setMaximumSize(QSize(800, 550));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	border-image:url(:/res/background.png);\n"
"}\n"
"\n"
"QLabel{\n"
"	font:25 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius:4px;\n"
"	background-color:rgba(160,160,160,30);\n"
"	color:rgb(255,255,255);\n"
"}"));
        detail_widget = new QWidget(widget);
        detail_widget->setObjectName("detail_widget");
        detail_widget->setGeometry(QRect(20, 270, 320, 150));
        detail_widget->setMinimumSize(QSize(320, 150));
        detail_widget->setMaximumSize(QSize(320, 150));
        detail_widget->setStyleSheet(QString::fromUtf8("QWidget#detail_widget{\n"
"	border-radius:18px;\n"
"	background-color:rgba(160,160,160,60);\n"
"}\n"
""));
        gridLayout_4 = new QGridLayout(detail_widget);
        gridLayout_4->setSpacing(30);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(15, 20, 15, 20);
        detail_wind_widget = new QWidget(detail_widget);
        detail_wind_widget->setObjectName("detail_wind_widget");
        detail_wind_widget->setMinimumSize(QSize(110, 55));
        detail_wind_widget->setMaximumSize(QSize(110, 55));
        horizontalLayout_4 = new QHBoxLayout(detail_wind_widget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(2, 2, 2, 2);
        wind_icon = new QLabel(detail_wind_widget);
        wind_icon->setObjectName("wind_icon");
        wind_icon->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color:rgba(160,016,160,0);\n"
"}"));
        wind_icon->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(wind_icon);

        detail_wind_right_widget = new QWidget(detail_wind_widget);
        detail_wind_right_widget->setObjectName("detail_wind_right_widget");
        verticalLayout_4 = new QVBoxLayout(detail_wind_right_widget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        wind_today = new QLabel(detail_wind_right_widget);
        wind_today->setObjectName("wind_today");
        wind_today->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(wind_today);

        power_today = new QLabel(detail_wind_right_widget);
        power_today->setObjectName("power_today");
        power_today->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(power_today);


        horizontalLayout_4->addWidget(detail_wind_right_widget);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);

        gridLayout_4->addWidget(detail_wind_widget, 0, 0, 1, 1);

        detail_pm_widget = new QWidget(detail_widget);
        detail_pm_widget->setObjectName("detail_pm_widget");
        detail_pm_widget->setMinimumSize(QSize(110, 55));
        detail_pm_widget->setMaximumSize(QSize(110, 55));
        horizontalLayout_5 = new QHBoxLayout(detail_pm_widget);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        pm_icon = new QLabel(detail_pm_widget);
        pm_icon->setObjectName("pm_icon");
        pm_icon->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color:rgba(160,016,160,0);\n"
"}"));
        pm_icon->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(pm_icon);

        detail_pm_right_widget = new QWidget(detail_pm_widget);
        detail_pm_right_widget->setObjectName("detail_pm_right_widget");
        verticalLayout_5 = new QVBoxLayout(detail_pm_right_widget);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        pm25 = new QLabel(detail_pm_right_widget);
        pm25->setObjectName("pm25");
        pm25->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(pm25);

        pm25_today = new QLabel(detail_pm_right_widget);
        pm25_today->setObjectName("pm25_today");
        pm25_today->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(pm25_today);


        horizontalLayout_5->addWidget(detail_pm_right_widget);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        gridLayout_4->addWidget(detail_pm_widget, 0, 1, 1, 1);

        detail_humidness_widget = new QWidget(detail_widget);
        detail_humidness_widget->setObjectName("detail_humidness_widget");
        detail_humidness_widget->setMinimumSize(QSize(110, 55));
        detail_humidness_widget->setMaximumSize(QSize(110, 55));
        horizontalLayout_10 = new QHBoxLayout(detail_humidness_widget);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(2, 2, 2, 2);
        humidness_icon = new QLabel(detail_humidness_widget);
        humidness_icon->setObjectName("humidness_icon");
        humidness_icon->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color:rgba(160,016,160,0);\n"
"}"));
        humidness_icon->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(humidness_icon);

        detail_humidness_right_widget = new QWidget(detail_humidness_widget);
        detail_humidness_right_widget->setObjectName("detail_humidness_right_widget");
        verticalLayout_6 = new QVBoxLayout(detail_humidness_right_widget);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        humidness = new QLabel(detail_humidness_right_widget);
        humidness->setObjectName("humidness");
        humidness->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(humidness);

        humidness_today = new QLabel(detail_humidness_right_widget);
        humidness_today->setObjectName("humidness_today");
        humidness_today->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(humidness_today);


        horizontalLayout_10->addWidget(detail_humidness_right_widget);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 2);

        gridLayout_4->addWidget(detail_humidness_widget, 1, 0, 1, 1);

        detail_air_widget = new QWidget(detail_widget);
        detail_air_widget->setObjectName("detail_air_widget");
        detail_air_widget->setMinimumSize(QSize(110, 55));
        detail_air_widget->setMaximumSize(QSize(110, 55));
        horizontalLayout_11 = new QHBoxLayout(detail_air_widget);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(2, 2, 2, 2);
        air_icon = new QLabel(detail_air_widget);
        air_icon->setObjectName("air_icon");
        air_icon->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color:rgba(160,016,160,0);\n"
"}"));
        air_icon->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(air_icon);

        detail_air_right_widget = new QWidget(detail_air_widget);
        detail_air_right_widget->setObjectName("detail_air_right_widget");
        verticalLayout_7 = new QVBoxLayout(detail_air_right_widget);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        air = new QLabel(detail_air_right_widget);
        air->setObjectName("air");
        air->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(air);

        air_today = new QLabel(detail_air_right_widget);
        air_today->setObjectName("air_today");
        air_today->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(air_today);


        horizontalLayout_11->addWidget(detail_air_right_widget);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 2);

        gridLayout_4->addWidget(detail_air_widget, 1, 1, 1, 1);

        forecast_widget = new QWidget(widget);
        forecast_widget->setObjectName("forecast_widget");
        forecast_widget->setGeometry(QRect(340, 70, 450, 450));
        forecast_widget->setMinimumSize(QSize(450, 450));
        forecast_widget->setMaximumSize(QSize(450, 430));
        verticalLayout = new QVBoxLayout(forecast_widget);
        verticalLayout->setObjectName("verticalLayout");
        forcast_date_widget = new QWidget(forecast_widget);
        forcast_date_widget->setObjectName("forcast_date_widget");
        gridLayout = new QGridLayout(forcast_date_widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        week7 = new QLabel(forcast_date_widget);
        week7->setObjectName("week7");
        week7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(week7, 0, 6, 1, 1);

        week1 = new QLabel(forcast_date_widget);
        week1->setObjectName("week1");
        week1->setMinimumSize(QSize(0, 0));
        week1->setMaximumSize(QSize(16777215, 16777215));
        week1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(week1, 0, 0, 1, 1);

        week3 = new QLabel(forcast_date_widget);
        week3->setObjectName("week3");
        week3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(week3, 0, 2, 1, 1);

        week5 = new QLabel(forcast_date_widget);
        week5->setObjectName("week5");
        week5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(week5, 0, 4, 1, 1);

        week2 = new QLabel(forcast_date_widget);
        week2->setObjectName("week2");
        week2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(week2, 0, 1, 1, 1);

        week6 = new QLabel(forcast_date_widget);
        week6->setObjectName("week6");
        week6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(week6, 0, 5, 1, 1);

        date1 = new QLabel(forcast_date_widget);
        date1->setObjectName("date1");
        date1->setMinimumSize(QSize(0, 0));
        date1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date1, 1, 0, 1, 1);

        week4 = new QLabel(forcast_date_widget);
        week4->setObjectName("week4");
        week4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(week4, 0, 3, 1, 1);

        date2 = new QLabel(forcast_date_widget);
        date2->setObjectName("date2");
        date2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date2, 1, 1, 1, 1);

        date3 = new QLabel(forcast_date_widget);
        date3->setObjectName("date3");
        date3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date3, 1, 2, 1, 1);

        date4 = new QLabel(forcast_date_widget);
        date4->setObjectName("date4");
        date4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date4, 1, 3, 1, 1);

        date5 = new QLabel(forcast_date_widget);
        date5->setObjectName("date5");
        date5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date5, 1, 4, 1, 1);

        date6 = new QLabel(forcast_date_widget);
        date6->setObjectName("date6");
        date6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date6, 1, 5, 1, 1);

        date7 = new QLabel(forcast_date_widget);
        date7->setObjectName("date7");
        date7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date7, 1, 6, 1, 1);


        verticalLayout->addWidget(forcast_date_widget);

        forcast_weather_widget = new QWidget(forecast_widget);
        forcast_weather_widget->setObjectName("forcast_weather_widget");
        gridLayout_2 = new QGridLayout(forcast_weather_widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(-1, 0, -1, 0);
        type_icon7 = new QLabel(forcast_weather_widget);
        type_icon7->setObjectName("type_icon7");
        type_icon7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type_icon7, 0, 6, 1, 1);

        type_icon2 = new QLabel(forcast_weather_widget);
        type_icon2->setObjectName("type_icon2");
        type_icon2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type_icon2, 0, 1, 1, 1);

        type_icon6 = new QLabel(forcast_weather_widget);
        type_icon6->setObjectName("type_icon6");
        type_icon6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type_icon6, 0, 5, 1, 1);

        type_icon4 = new QLabel(forcast_weather_widget);
        type_icon4->setObjectName("type_icon4");
        type_icon4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type_icon4, 0, 3, 1, 1);

        type_icon5 = new QLabel(forcast_weather_widget);
        type_icon5->setObjectName("type_icon5");
        type_icon5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type_icon5, 0, 4, 1, 1);

        type_icon3 = new QLabel(forcast_weather_widget);
        type_icon3->setObjectName("type_icon3");
        type_icon3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type_icon3, 0, 2, 1, 1);

        type_icon1 = new QLabel(forcast_weather_widget);
        type_icon1->setObjectName("type_icon1");
        type_icon1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type_icon1, 0, 0, 1, 1);

        type1 = new QLabel(forcast_weather_widget);
        type1->setObjectName("type1");
        type1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type1, 1, 0, 1, 1);

        type2 = new QLabel(forcast_weather_widget);
        type2->setObjectName("type2");
        type2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type2, 1, 1, 1, 1);

        type3 = new QLabel(forcast_weather_widget);
        type3->setObjectName("type3");
        type3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type3, 1, 2, 1, 1);

        type4 = new QLabel(forcast_weather_widget);
        type4->setObjectName("type4");
        type4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type4, 1, 3, 1, 1);

        type5 = new QLabel(forcast_weather_widget);
        type5->setObjectName("type5");
        type5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type5, 1, 4, 1, 1);

        type6 = new QLabel(forcast_weather_widget);
        type6->setObjectName("type6");
        type6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type6, 1, 5, 1, 1);

        type7 = new QLabel(forcast_weather_widget);
        type7->setObjectName("type7");
        type7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type7, 1, 6, 1, 1);


        verticalLayout->addWidget(forcast_weather_widget);

        forcast_air_widget = new QWidget(forecast_widget);
        forcast_air_widget->setObjectName("forcast_air_widget");
        horizontalLayout_6 = new QHBoxLayout(forcast_air_widget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        air1 = new QLabel(forcast_air_widget);
        air1->setObjectName("air1");
        air1->setMinimumSize(QSize(0, 35));
        air1->setMaximumSize(QSize(16777215, 35));
        air1->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(air1);

        air2 = new QLabel(forcast_air_widget);
        air2->setObjectName("air2");
        air2->setMinimumSize(QSize(0, 35));
        air2->setMaximumSize(QSize(16777215, 35));
        air2->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(air2);

        air3 = new QLabel(forcast_air_widget);
        air3->setObjectName("air3");
        air3->setMinimumSize(QSize(0, 35));
        air3->setMaximumSize(QSize(16777215, 35));
        air3->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(air3);

        air4 = new QLabel(forcast_air_widget);
        air4->setObjectName("air4");
        air4->setMinimumSize(QSize(0, 35));
        air4->setMaximumSize(QSize(16777215, 35));
        air4->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(air4);

        air5 = new QLabel(forcast_air_widget);
        air5->setObjectName("air5");
        air5->setMinimumSize(QSize(0, 35));
        air5->setMaximumSize(QSize(16777215, 35));
        air5->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(air5);

        air6 = new QLabel(forcast_air_widget);
        air6->setObjectName("air6");
        air6->setMinimumSize(QSize(0, 35));
        air6->setMaximumSize(QSize(16777215, 35));
        air6->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(air6);

        air7 = new QLabel(forcast_air_widget);
        air7->setObjectName("air7");
        air7->setMinimumSize(QSize(0, 35));
        air7->setMaximumSize(QSize(16777215, 35));
        air7->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(air7);


        verticalLayout->addWidget(forcast_air_widget);

        forcast_detail_widget = new QWidget(forecast_widget);
        forcast_detail_widget->setObjectName("forcast_detail_widget");
        horizontalLayout_3 = new QHBoxLayout(forcast_detail_widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        curve_label = new QLabel(forcast_detail_widget);
        curve_label->setObjectName("curve_label");

        horizontalLayout_3->addWidget(curve_label);


        verticalLayout->addWidget(forcast_detail_widget);

        forcast_wind_widget = new QWidget(forecast_widget);
        forcast_wind_widget->setObjectName("forcast_wind_widget");
        gridLayout_3 = new QGridLayout(forcast_wind_widget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setVerticalSpacing(0);
        wind6 = new QLabel(forcast_wind_widget);
        wind6->setObjectName("wind6");
        wind6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(wind6, 0, 5, 1, 1);

        wind4 = new QLabel(forcast_wind_widget);
        wind4->setObjectName("wind4");
        wind4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(wind4, 0, 3, 1, 1);

        wind7 = new QLabel(forcast_wind_widget);
        wind7->setObjectName("wind7");
        wind7->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(wind7, 0, 6, 1, 1);

        wind3 = new QLabel(forcast_wind_widget);
        wind3->setObjectName("wind3");
        wind3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(wind3, 0, 2, 1, 1);

        wind5 = new QLabel(forcast_wind_widget);
        wind5->setObjectName("wind5");
        wind5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(wind5, 0, 4, 1, 1);

        wind2 = new QLabel(forcast_wind_widget);
        wind2->setObjectName("wind2");
        wind2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(wind2, 0, 1, 1, 1);

        wind1 = new QLabel(forcast_wind_widget);
        wind1->setObjectName("wind1");
        wind1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(wind1, 0, 0, 1, 1);

        power1 = new QLabel(forcast_wind_widget);
        power1->setObjectName("power1");
        power1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(power1, 1, 0, 1, 1);

        power2 = new QLabel(forcast_wind_widget);
        power2->setObjectName("power2");
        power2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(power2, 1, 1, 1, 1);

        power3 = new QLabel(forcast_wind_widget);
        power3->setObjectName("power3");
        power3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(power3, 1, 2, 1, 1);

        power4 = new QLabel(forcast_wind_widget);
        power4->setObjectName("power4");
        power4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(power4, 1, 3, 1, 1);

        power5 = new QLabel(forcast_wind_widget);
        power5->setObjectName("power5");
        power5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(power5, 1, 4, 1, 1);

        power6 = new QLabel(forcast_wind_widget);
        power6->setObjectName("power6");
        power6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(power6, 1, 5, 1, 1);

        power7 = new QLabel(forcast_wind_widget);
        power7->setObjectName("power7");
        power7->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(power7, 1, 6, 1, 1);


        verticalLayout->addWidget(forcast_wind_widget);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 3);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 10);
        verticalLayout->setStretch(4, 2);
        weather_widget = new QWidget(widget);
        weather_widget->setObjectName("weather_widget");
        weather_widget->setGeometry(QRect(20, 60, 320, 200));
        weather_widget->setMinimumSize(QSize(320, 200));
        weather_widget->setMaximumSize(QSize(320, 200));
        verticalLayout_2 = new QVBoxLayout(weather_widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        weather_main_widget = new QWidget(weather_widget);
        weather_main_widget->setObjectName("weather_main_widget");
        horizontalLayout_8 = new QHBoxLayout(weather_main_widget);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(2, -1, 2, -1);
        weather_icon = new QLabel(weather_main_widget);
        weather_icon->setObjectName("weather_icon");
        weather_icon->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color:rgba(160,160,160,0);\n"
"}"));
        weather_icon->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(weather_icon);

        weather_main_right_widget = new QWidget(weather_main_widget);
        weather_main_right_widget->setObjectName("weather_main_right_widget");
        verticalLayout_3 = new QVBoxLayout(weather_main_right_widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(2, -1, 2, -1);
        weather_main_right_on_widget = new QWidget(weather_main_right_widget);
        weather_main_right_on_widget->setObjectName("weather_main_right_on_widget");
        horizontalLayout_7 = new QHBoxLayout(weather_main_right_on_widget);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, -1, 0, -1);
        city = new QLabel(weather_main_right_on_widget);
        city->setObjectName("city");
        city->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font:25 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:rgba(160,160,160,0);\n"
"}\n"
""));

        horizontalLayout_7->addWidget(city);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        temperature = new QLabel(weather_main_right_on_widget);
        temperature->setObjectName("temperature");
        temperature->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font:25 28pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color:rgba(160,160,160,0);\n"
"}"));

        horizontalLayout_7->addWidget(temperature);


        verticalLayout_3->addWidget(weather_main_right_on_widget);

        weather_temperature = new QLabel(weather_main_right_widget);
        weather_temperature->setObjectName("weather_temperature");
        weather_temperature->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font:25 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));

        verticalLayout_3->addWidget(weather_temperature);

        verticalLayout_3->setStretch(0, 3);
        verticalLayout_3->setStretch(1, 1);

        horizontalLayout_8->addWidget(weather_main_right_widget);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 2);

        verticalLayout_2->addWidget(weather_main_widget);

        weather_tip_widget = new QWidget(weather_widget);
        weather_tip_widget->setObjectName("weather_tip_widget");
        horizontalLayout_9 = new QHBoxLayout(weather_tip_widget);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        notice = new QLabel(weather_tip_widget);
        notice->setObjectName("notice");

        horizontalLayout_9->addWidget(notice);


        verticalLayout_2->addWidget(weather_tip_widget);

        verticalLayout_2->setStretch(0, 3);
        verticalLayout_2->setStretch(1, 1);
        top_widget = new QWidget(widget);
        top_widget->setObjectName("top_widget");
        top_widget->setGeometry(QRect(20, 0, 750, 35));
        top_widget->setMinimumSize(QSize(750, 35));
        top_widget->setMaximumSize(QSize(750, 35));
        horizontalLayout_2 = new QHBoxLayout(top_widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        search_lineEdit = new QLineEdit(top_widget);
        search_lineEdit->setObjectName("search_lineEdit");
        search_lineEdit->setMinimumSize(QSize(150, 25));
        search_lineEdit->setMaximumSize(QSize(150, 25));

        horizontalLayout_2->addWidget(search_lineEdit);

        search_Button = new QPushButton(top_widget);
        search_Button->setObjectName("search_Button");
        search_Button->setMinimumSize(QSize(25, 25));
        search_Button->setMaximumSize(QSize(25, 25));

        horizontalLayout_2->addWidget(search_Button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        today_date = new QLabel(top_widget);
        today_date->setObjectName("today_date");
        today_date->setMinimumSize(QSize(250, 25));
        today_date->setMaximumSize(QSize(250, 25));
        today_date->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font:25 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));

        horizontalLayout_2->addWidget(today_date);

        update_time = new QLabel(widget);
        update_time->setObjectName("update_time");
        update_time->setGeometry(QRect(10, 530, 100, 20));
        update_time->setMinimumSize(QSize(100, 20));
        update_time->setMaximumSize(QSize(80, 20));
        update_time->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font:25 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));

        horizontalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        wind_icon->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        wind_today->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        power_today->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        pm_icon->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        pm25->setText(QCoreApplication::translate("MainWindow", "PM2.5", nullptr));
        pm25_today->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        humidness_icon->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        humidness->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        humidness_today->setText(QCoreApplication::translate("MainWindow", "60%", nullptr));
        air_icon->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        air->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        air_today->setText(QCoreApplication::translate("MainWindow", "\350\211\257", nullptr));
        week7->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\205\255", nullptr));
        week1->setText(QCoreApplication::translate("MainWindow", "\346\230\250\345\244\251", nullptr));
        week3->setText(QCoreApplication::translate("MainWindow", "\346\230\216\345\244\251", nullptr));
        week5->setText(QCoreApplication::translate("MainWindow", "\345\221\250\344\272\224", nullptr));
        week2->setText(QCoreApplication::translate("MainWindow", "\344\273\212\345\244\251", nullptr));
        week6->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\205\255", nullptr));
        date1->setText(QCoreApplication::translate("MainWindow", "01/01", nullptr));
        week4->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\233\233", nullptr));
        date2->setText(QCoreApplication::translate("MainWindow", "01/02", nullptr));
        date3->setText(QCoreApplication::translate("MainWindow", "01/03", nullptr));
        date4->setText(QCoreApplication::translate("MainWindow", "01/04", nullptr));
        date5->setText(QCoreApplication::translate("MainWindow", "01/05", nullptr));
        date6->setText(QCoreApplication::translate("MainWindow", "01/06", nullptr));
        date7->setText(QCoreApplication::translate("MainWindow", "01/07", nullptr));
        type_icon7->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        type_icon2->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        type_icon6->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        type_icon4->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        type_icon5->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        type_icon3->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        type_icon1->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        type1->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        type2->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        type3->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        type4->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        type5->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        type6->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        type7->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        air1->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        air2->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        air3->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        air4->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        air5->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        air6->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        air7->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        curve_label->setText(QString());
        wind6->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        wind4->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        wind7->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        wind3->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        wind5->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        wind2->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        wind1->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        power1->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        power2->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        power3->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        power4->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        power5->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        power6->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        power7->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        weather_icon->setText(QCoreApplication::translate("MainWindow", "tb", nullptr));
        city->setText(QCoreApplication::translate("MainWindow", "\346\234\252\350\201\224\347\275\221", nullptr));
        temperature->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        weather_temperature->setText(QCoreApplication::translate("MainWindow", "\346\231\264\350\275\254\345\244\232\344\272\221       0~0", nullptr));
        notice->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        search_Button->setText(QString());
        today_date->setText(QCoreApplication::translate("MainWindow", "2024/01/10 \346\230\237\346\234\237\344\270\200", nullptr));
        update_time->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
