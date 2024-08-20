#ifndef WEATHERDATE_H
#define WEATHERDATE_H
#include <QString>


class OneDay{
public:
    OneDay(){
        maximumTemperature = 0;
        minimumTemperature = 0;
        date = "0000-00-00";
        week = "无";
        sunriseTime = "00:00";
        sunsetTime = "00:00";
        airQuality = 0;
        windDirection = "无";
        windPower = "无";
        type = "无";
        notice = "无";
    }

    qint32 maximumTemperature;
    qint32 minimumTemperature;
    QString date;
    QString week;
    QString sunriseTime;
    QString sunsetTime;
    qint32 airQuality;
    QString windDirection;
    QString windPower;
    QString type;
    QString notice;

};

class OtherStatus{
public:
    OtherStatus(){
        date = "0000-00-00";
        city = "无";
        updateTime = "00:00";
        humidness = "0%";
        pm25 = 0;
        pm10 = 0;
        airQuality = 0;
        temperature = 0;
        coldNotice = "无";
    }

    QString date;
    QString city;
    QString updateTime;
    QString humidness;
    qint32 pm25;
    qint32 pm10;
    qint32 airQuality;
    qreal temperature;
    QString coldNotice;

};




#endif // WEATHERDATE_H
