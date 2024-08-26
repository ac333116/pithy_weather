#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "weathertool.h"
#include <QSettings>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    WindowsInitialize();
    merberInitialize();


    //加载配置
    QSettings setting("config.ini", QSettings::IniFormat);
    QString city_default = setting.value("city").toString();
    if(city_default!="")
        ui->search_lineEdit->setText(city_default);
    else
        ui->search_lineEdit->setText("北京");
    on_search_lineEdit_returnPressed();
}



MainWindow::~MainWindow()
{
    //保存配置信息
    QSettings setting("config.ini", QSettings::IniFormat);
    setting.setValue("city",ostatus.city);
    delete ui;
}


//窗口初始化
void MainWindow::WindowsInitialize()
{
    //悬浮菜单初始化
    floatMenu = new QMenu(this);
    myExitAction = new QAction();
    myExitAction->setText("退出");
    myExitAction->setIcon(QIcon(":/lose.ico"));
    floatMenu->addAction(myExitAction);
    connect(myExitAction,&QAction::triggered,this,[](){qApp->exit(0);});

    //图标初始化
    ui->search_Button->setIcon(QIcon(":/res/search.png"));

    ui->wind_icon->setPixmap(QPixmap(":/res/wind.png").scaled(30,30));
    ui->pm_icon->setPixmap(QPixmap(":res/pm25.png").scaled(30,30));
    ui->humidness_icon->setPixmap(QPixmap(":res/humidity.png").scaled(30,30));
    ui->air_icon->setPixmap(QPixmap(":res/aqi.png").scaled(30,30));

    //网络连接初始化
    myNetAccessManager = new QNetworkAccessManager(this);
    connect(myNetAccessManager,&QNetworkAccessManager::finished,this,&MainWindow::onReplied);
    //getWeatherInfo("101010100");

    //cityMap初始化
    WeatherTool::loadCityMap();

    //给标签添加事件过滤器
    ui->curve_label->installEventFilter(this);

}
//成员初始化
void MainWindow::merberInitialize()
{
    weekList<<ui->week1<<ui->week2<<ui->week3<<ui->week4<<ui->week5<<ui->week6<<ui->week7;
    dateList<<ui->date1<<ui->date2<<ui->date3<<ui->date4<<ui->date5<<ui->date6<<ui->date7;
    typeIconList<<ui->type_icon1<<ui->type_icon2<<ui->type_icon3<<ui->type_icon4<<ui->type_icon5<<ui->type_icon6<<ui->type_icon7;
    typeList<<ui->type1<<ui->type2<<ui->type3<<ui->type4<<ui->type5<<ui->type6<<ui->type7;
    airList<<ui->air1<<ui->air2<<ui->air3<<ui->air4<<ui->air5<<ui->air6<<ui->air7;
    windList<<ui->wind1<<ui->wind2<<ui->wind3<<ui->wind4<<ui->wind5<<ui->wind6<<ui->wind7;
    powerList<<ui->power1<<ui->power2<<ui->power3<<ui->power4<<ui->power5<<ui->power6<<ui->power7;


    myTypeMap.insert("暴雪",":/res/type/BaoXue.png");
    myTypeMap.insert("暴雨",":/res/type/BaoYu.png");
    myTypeMap.insert("暴雨到大暴雨",":/res/type/BaoYuDaoDaBaoYu.png");
    myTypeMap.insert("大暴雨",":/res/type/DaBaoYu.png");
    myTypeMap.insert("大暴雨到特大暴雨",":/res/type/DaBaoYuDaoTeDaBaoYu.png");
    myTypeMap.insert("大到暴雪",":/res/type/DaDaoBaoXue.png");
    myTypeMap.insert("大到暴雨",":/res/type/DaDaoBaoYu.png");
    myTypeMap.insert("大雪",":/res/type/DaXue.png");
    myTypeMap.insert("大雨",":/res/type/DaYu.png");
    myTypeMap.insert("冻雨",":/res/type/DongYu.png");
    myTypeMap.insert("多云",":/res/type/DuoYun.png");
    myTypeMap.insert("浮尘",":/res/type/FuChen.png");
    myTypeMap.insert("雷阵雨",":/res/type/LeiZhenYu.png");
    myTypeMap.insert("雷阵雨伴有冰雹",":/res/type/LeiZhenYuBanYouBingBao.png");
    myTypeMap.insert("霾",":/res/type/Mai.png");
    myTypeMap.insert("强沙尘暴",":/res/type/QiangShaChenBao.png");
    myTypeMap.insert("晴",":/res/type/Qing.png");
    myTypeMap.insert("沙尘暴",":/res/type/ShaChenBao.png");
    myTypeMap.insert("特大暴雨",":/res/type/TeDaBaoYu.png");
    myTypeMap.insert("undefined",":/res/type/TeDaBaoYu.png");
    myTypeMap.insert("雾",":/res/type/Wu.png");
    myTypeMap.insert("小到中雪",":/res/type/XiaoDaoZhongXue.png");
    myTypeMap.insert("小到中雨",":/res/type/XiaoDaoZhongYu.png");
    myTypeMap.insert("小雪",":/res/type/XiaoXue.png");
    myTypeMap.insert("小雨",":/res/type/XiaoYu.png");
    myTypeMap.insert("雪",":/res/type/Xue.png");
    myTypeMap.insert("扬沙",":/res/type/YangSha.png");
    myTypeMap.insert("阴",":/res/type/Yin.png");
    myTypeMap.insert("雨",":/res/type/Yu.png");
    myTypeMap.insert("雨夹雪",":/res/type/YuJiaXue.png");
    myTypeMap.insert("阵雪",":/res/type/ZhenXue.png");
    myTypeMap.insert("阵雨",":/res/type/ZhenYu.png");
    myTypeMap.insert("中到大雪",":/res/type/ZhongDaoDaXue.png");
    myTypeMap.insert("中到大雨",":/res/type/ZhongDaoDaYu.png");
    myTypeMap.insert("中雪",":/res/type/ZhongXue.png");
    myTypeMap.insert("中雨",":/res/type/ZhongYu.png");

}



void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    floatMenu->exec(QCursor::pos());
}
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    myOffset = event->globalPos() - this->pos();
}
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos() - myOffset);
}



void MainWindow::onReplied(QNetworkReply *reply)
{
    // qDebug()<<"onReplied success\n";

    int status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();//响应码，200表示成功

    // qDebug()<<"operation:"<<reply->operation();
    // qDebug()<<"status code:"<<status_code;
    // qDebug()<<"url:"<<reply->url();
    // qDebug()<<"raw header:"<<reply->rawHeaderList();

    if(reply->error() != QNetworkReply::NoError || status_code!=200){
        qDebug()<<reply->errorString().toLatin1().data();
        QMessageBox::warning(this,"天气","请求数据失败",QMessageBox::Ok);
    }
    else{
        QByteArray byteArray =reply->readAll();
        //qDebug()<<"readAll:"<<byteArray.data();
        parseJson(byteArray);
        loadUi();
    }


    reply->deleteLater();
}

void MainWindow::parseJson(QByteArray& byteArray)
{
    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(byteArray,&err);
    if(err.error != QJsonParseError::NoError){
        return;
    }
    QJsonObject rootObj = doc.object();

    ostatus.date = rootObj.value("time").toString();

    QJsonObject cityInfoObj = rootObj.value("cityInfo").toObject();
    ostatus.city = cityInfoObj.value("city").toString();
    ostatus.updateTime = cityInfoObj.value("updateTime").toString();

    QJsonObject dataObj = rootObj.value("data").toObject();
    ostatus.humidness = dataObj.value("shidu").toString();
    ostatus.pm25 = dataObj.value("pm25").toInt();
    ostatus.pm10 = dataObj.value("pm10").toInt();
    ostatus.airQuality = dataObj.value("quality").toInt();
    ostatus.temperature = dataObj.value("wendu").toString().toDouble();
    ostatus.coldNotice = dataObj.value("ganmao").toString();

    QJsonObject yesterdayObj = dataObj.value("yesterday").toObject();
    //dayList[0].maximumTemperature = yesterdayObj.value("high").toInt();
    dayList[0].maximumTemperature = getNum(yesterdayObj.value("high").toString());
    // dayList[0].minimumTemperature = yesterdayObj.value("low").toInt();
    dayList[0].minimumTemperature = getNum(yesterdayObj.value("low").toString());
    dayList[0].date = yesterdayObj.value("ymd").toString();
    dayList[0].week = yesterdayObj.value("week").toString();
    dayList[0].sunriseTime = yesterdayObj.value("sunrise").toString();
    dayList[0].sunsetTime = yesterdayObj.value("sunset").toString();
    dayList[0].airQuality = yesterdayObj.value("aqi").toInt();
    dayList[0].windDirection = yesterdayObj.value("fx").toString();
    dayList[0].windPower = yesterdayObj.value("fl").toString();
    dayList[0].type = yesterdayObj.value("type").toString();
    dayList[0].notice = yesterdayObj.value("notice").toString();


    QJsonArray forecastList = dataObj.value("forecast").toArray();
    for(int i=0;i<6;i++){
        QJsonObject onedayObj = forecastList[i].toObject();
        //dayList[i+1].maximumTemperature = onedayObj.value("high").toInt();
        dayList[i+1].maximumTemperature = getNum(onedayObj.value("high").toString());
        //dayList[i+1].minimumTemperature = onedayObj.value("low").toInt();
        dayList[i+1].minimumTemperature = getNum(onedayObj.value("low").toString());
        dayList[i+1].date = onedayObj.value("ymd").toString();
        dayList[i+1].week = onedayObj.value("week").toString();
        dayList[i+1].sunriseTime = onedayObj.value("sunrise").toString();
        dayList[i+1].sunsetTime = onedayObj.value("sunset").toString();
        dayList[i+1].airQuality = onedayObj.value("aqi").toInt();
        dayList[i+1].windDirection = onedayObj.value("fx").toString();
        dayList[i+1].windPower = onedayObj.value("fl").toString();
        dayList[i+1].type = onedayObj.value("type").toString();
        dayList[i+1].notice = onedayObj.value("notice").toString();
    }


}

void MainWindow::loadUi()
{
    ui->today_date->setText(dayList[1].date +"   "+ dayList[1].week);

    ui->temperature->setText(QString::number(ostatus.temperature,'f',1)+"℃");
    ui->city->setText(ostatus.city);
    ui->weather_temperature->setText(dayList[1].type + "       " + QString::number(dayList[1].minimumTemperature) + "~" + QString::number(dayList[1].maximumTemperature) + "℃");
    ui->notice->setText(ostatus.coldNotice);

    ui->wind_today->setText(dayList[1].windDirection);
    ui->power_today->setText(dayList[1].windPower);
    ui->pm25_today->setText(QString::number(ostatus.pm25));
    ui->humidness_today->setText(ostatus.humidness);
    //ui->air_today->setText("优");

    for(int i=0;i<7;i++){
        weekList[i]->setText(dayList[i].week);
        dateList[i]->setText(dayList[i].date.mid(6));
        typeIconList[i]->setPixmap(myTypeMap[dayList[i].type]);
        typeList[i]->setText(dayList[i].type);
        if(dayList[i].airQuality<35){
            airList[i]->setText("优");
            airList[i]->setStyleSheet("background-color:rgb(60,200,0)");
        }
        else if(dayList[i].airQuality<75){
            airList[i]->setText("良");
            airList[i]->setStyleSheet("background-color:rgb(120,180,0)");
        }
        else if(dayList[i].airQuality<115){
            airList[i]->setText("轻度");
            airList[i]->setStyleSheet("background-color:rgb(160,140,0)");
        }
        else if(dayList[i].airQuality<150){
            airList[i]->setText("中度");
            airList[i]->setStyleSheet("background-color:rgb(200,100,0)");
        }
        else if(dayList[i].airQuality<250){
            airList[i]->setText("重度");
            airList[i]->setStyleSheet("background-color:rgb(240,60,0)");
        }
        else{
            airList[i]->setText("严重");
            airList[i]->setStyleSheet("background-color:rgb(255,20,0)");
        }
        windList[i]->setText(dayList[i].windDirection);
        powerList[i]->setText(dayList[i].windPower);
    }

    ui->weather_icon->setPixmap(myTypeMap[dayList[1].type]);

    ui->air_today->setText(airList[1]->text());

    weekList[0]->setText("昨天");
    weekList[1]->setText("今天");
    weekList[2]->setText("明天");

    ui->update_time->setText("更新时间："+ostatus.updateTime);

    ui->curve_label->update();
}

int MainWindow::getNum(const QString &str)
{
    QRegularExpression re("\\d+");
    QRegularExpressionMatch match = re.match(str);

    if (match.hasMatch()) {
        // 如果找到匹配项，尝试将捕获的字符串转换为int
        bool ok;
        int number = match.captured(0).toInt(&ok);

        // 如果转换成功，返回数字
        if (ok) {
            return number;
        }
    }

    return 0;

}



bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched==ui->curve_label && event->type() == QEvent::Paint){
        paintCurve();
    }

    return QWidget::eventFilter(watched,event);
}

void MainWindow::paintCurve()
{
    QPainter painter(ui->curve_label);

    painter.setRenderHint(QPainter::Antialiasing,true);//设置抗锯齿

    //计算绘制点位置
    int point_maxT[7][2];
    int point_minT[7][2];
    int maxT_7days = dayList[0].maximumTemperature;
    int minT_7days = dayList[0].minimumTemperature;
    for(int i=0;i<7;i++){
        point_maxT[i][0] = weekList[i]->pos().x() + weekList[i]->width()/2;
        point_minT[i][0] = weekList[i]->pos().x() + weekList[i]->width()/2;
        if(dayList[i].maximumTemperature>maxT_7days)
            maxT_7days=dayList[i].maximumTemperature;
        if(dayList[i].minimumTemperature<minT_7days)
            minT_7days=dayList[i].minimumTemperature;
    }
    int Tdif_7days = maxT_7days - minT_7days;
    for(int i=0;i<7;i++){
        point_maxT[i][1] = ui->curve_label->pos().y() + ui->curve_label->height()*0.8 - ui->curve_label->height()*0.6*((dayList[i].maximumTemperature *1.0 - minT_7days)/Tdif_7days);
        point_minT[i][1] = ui->curve_label->pos().y() + ui->curve_label->height()*0.8 - ui->curve_label->height()*0.6*((dayList[i].minimumTemperature *1.0 - minT_7days)/Tdif_7days);
    }

    //设置画笔并绘制
    QPen pen = painter.pen();
    pen.setWidth(1);
    pen.setColor(QColor(255,170,0));
    painter.setPen(pen);
    painter.setBrush(QColor(255,170,0));
    for(int i=0;i<7;i++){
        painter.drawEllipse(QPoint(point_maxT[i][0],point_maxT[i][1]),3,3);
        painter.drawText(point_maxT[i][0]-9,point_maxT[i][1]-9,QString::number(dayList[i].maximumTemperature)+"℃");
    }
    for(int i=0;i<6;i++){
        if(i==0){
            pen.setStyle(Qt::DotLine);
            painter.setPen(pen);
        }
        else{
            pen.setStyle(Qt::SolidLine);
            painter.setPen(pen);
        }
        painter.drawLine(point_maxT[i][0],point_maxT[i][1],point_maxT[i+1][0],point_maxT[i+1][1]);
    }

    pen.setColor(QColor(0,255,255));
    painter.setPen(pen);
    painter.setBrush(QColor(0,255,255));
    for(int i=0;i<7;i++){
        painter.drawEllipse(QPoint(point_minT[i][0],point_minT[i][1]),3,3);
        painter.drawText(point_minT[i][0]-9,point_minT[i][1]+18,QString::number(dayList[i].minimumTemperature)+"℃");
    }
    for(int i=0;i<6;i++){
        if(i==0){
            pen.setStyle(Qt::DotLine);
            painter.setPen(pen);
        }
        else{
            pen.setStyle(Qt::SolidLine);
            painter.setPen(pen);
        }
        painter.drawLine(point_minT[i][0],point_minT[i][1],point_minT[i+1][0],point_minT[i+1][1]);
    }



}


//搜索框回车
void MainWindow::on_search_lineEdit_returnPressed()
{
    QString city = ui->search_lineEdit->text();
    QString code = WeatherTool::getCityCode(city);
    if(code==""){
        city.remove(city.length() - 1, 1);
        code = WeatherTool::getCityCode(city);
    }
    if(code!=""){
        getWeatherInfo(code);
        ui->search_lineEdit->setText("");
    }
}
void MainWindow::on_search_Button_clicked()
{
    on_search_lineEdit_returnPressed();
}



void MainWindow::getWeatherInfo(QString cityCode)
{
    QUrl url("http://t.weather.itboy.net/api/weather/city/"+cityCode);
    myNetAccessManager->get(QNetworkRequest(url));
}

