#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QTreeWidget>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


//    //设置单选按钮 男为默认
//    ui->rBtnMan->setChecked(true);

//    //选中女 打印信息
//    connect(ui->rBtnWoman,&QRadioButton::clicked,[=](){
//        qDebug()<<"选择女";
//    });


    //设置水平头
    ui->treeWidget->setHeaderLabels(QStringList()<<"英雄"<<"英雄介绍");

    QTreeWidgetItem *litem=new QTreeWidgetItem(QStringList()<<"力量");
    QTreeWidgetItem *mintem=new QTreeWidgetItem(QStringList()<<"敏捷");
    QTreeWidgetItem *zhitem=new QTreeWidgetItem(QStringList()<<"智慧");
    //加载顶点节点
    ui->treeWidget->addTopLevelItem(litem);
    ui->treeWidget->addTopLevelItem(mintem);
    ui->treeWidget->addTopLevelItem(zhitem);


    //追加子节点
    QStringList heroL1;
    heroL1<<"小火龙"<<"可以使用喷火和撞击";
    QTreeWidgetItem *l1=new QTreeWidgetItem(heroL1);
    litem->addChild(l1);



}

Widget::~Widget()
{
    delete ui;
}

