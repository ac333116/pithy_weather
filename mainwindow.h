#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QMouseEvent>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include "weatherdate.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QList>
#include <QLabel>
#include <QPainter>



QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private:
    QMenu *floatMenu;//定义悬浮菜单
    QAction *myExitAction;//定义退出Action
    QPoint myOffset;//记录光标相对于窗口的相对位置

    OneDay dayList[7];//记录一周内天气信息
    OtherStatus ostatus;//记录今日其他信息

    //一周内天气信息Label集中管理
    QList<QLabel*> weekList;
    QList<QLabel*> dateList;
    QList<QLabel*> typeIconList;
    QList<QLabel*> typeList;
    QList<QLabel*> airList;
    QList<QLabel*> windList;
    QList<QLabel*> powerList;

    QMap<QString,QString> myTypeMap;//链接天气类型和图片路径

    QNetworkAccessManager *myNetAccessManager;


private:
    void WindowsInitialize();//窗口初始化
    void merberInitialize();//成员初始化

private:
    void contextMenuEvent(QContextMenuEvent *event);//鼠标右键菜单事件
    void mousePressEvent(QMouseEvent *event);//鼠标按压事件
    void mouseMoveEvent(QMouseEvent* event);//鼠标按压+移动事件

    void onReplied(QNetworkReply *reply);//读取Json文件
    void parseJson(QByteArray& byteArray);//解析Json
    void loadUi();//信息加载
    int getNum(const QString &str);//提取字符串中数字

    bool eventFilter(QObject* watched,QEvent* event);//重写eventfilter方法
    void paintCurve();//绘制温度曲线


private slots:
    void on_search_lineEdit_returnPressed();//搜索框回车
    void on_search_Button_clicked();//点击搜索按钮

    void getWeatherInfo(QString cityCode);//网络请求



};
#endif // MAINWINDOW_H
