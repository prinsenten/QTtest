#include "mywidget.h"
#include "QPushButton"
#include "mypushbutton.h"
#include "QDebug"
myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{
    //创建按钮方法1
    QPushButton *btn=new QPushButton;
    //让btn依附在myWidget窗口
    btn->setParent(this);
    //显示文本
    btn->setText("第一个按钮");

    //创建按钮方法2
    QPushButton *btn2=new QPushButton("第二个按钮",this);
    //移动按钮
    btn2->move(100,100);
    //设置按钮大小
    btn2->resize(120,100);
    //重置窗口大小
    resize(600,400);
    //设置固定窗口
    setFixedSize(600,400);
    //设置窗口标题
    setWindowTitle("窗口");

    //我的按钮
    MyPushButton *mybtn=new MyPushButton;
    mybtn->setText("我的按钮");
    mybtn->move(200,0);
    mybtn->setParent(this);


    //点击 我的按钮 关闭窗口
    //参数1 信号发送者 参数2 发送的信号 参数三 信号接收者 参数四 处理的槽函数
    connect(mybtn,&QPushButton::clicked,this, &myWidget::close);



}

myWidget::~myWidget()
{
    qDebug()<<"MyWidget析构";
}

