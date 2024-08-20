#ifndef WEATHERTOOL_H
#define WEATHERTOOL_H

#include <QMap>
#include <QFile>
#include <QJSonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonValue>

class WeatherTool{
public:
    static QMap<QString,QString>myCityMap;

    static void loadCityMap(){
        QFile file("D:\\QT\\Projects\\weather\\weather\\city\\city_weather_code.json");
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QByteArray bytearray = file.readAll();
        file.close();

        QJsonParseError err;
        QJsonDocument jsondoc = QJsonDocument::fromJson(bytearray,&err);
        if(err.error!=QJsonParseError::NoError || !jsondoc.isArray()){
            return;
        }

        QJsonArray jsonArray = jsondoc.array();
        for(int i=0;i<jsonArray.size();i++){
            QJsonObject cityObj = jsonArray[i].toObject();
            myCityMap.insert(cityObj.value("cityName").toString(),cityObj.value("cityCode").toString());
        }
    }

    static QString getCityCode(QString cityName){
        if(myCityMap.isEmpty()){
            loadCityMap();
        }

        QString code = myCityMap[cityName];
        if(code!="")
            return code;
        else
            return "";
    }

};
QMap<QString,QString> WeatherTool::myCityMap={};


#endif // WEATHERTOOL_H
