#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(1200,800);
 //   setFixedSize(1200,800);
    //点击新建按钮，弹出对话框
    connect(ui->actionnew,&QAction::triggered,[=](){
        //对话框分为模态对话框(不可以对其他窗口进行操作) ，非模态对话框(可以对其他窗口进行操作)
        //模态创建
//        QDialog dlg(this);
//        dlg.resize(600,400);
//        dlg.exec();
//        qDebug()<<"模态对话框弹出了";

        //非模态创建
//        QDialog * dlg2=new QDialog(this);
//        dlg2->resize(600,400);
//        dlg2->show();
//        dlg2->setAttribute(Qt::WA_DeleteOnClose);//55号属性 每点完一次删除一次 防止内存泄露
//        qDebug()<<"非模态对话框弹出";

        //消息对话框
        //错误对话框
      //  QMessageBox::critical(this,"critical","错误");
        //信息对话框
      // QMessageBox::information(this,"info","信息");
        //提问对话框
        //参数1 父亲  参数2 标题 参数3 提示内容 参数4 案件类型 参数5 默认关联回车案按键
//         if(QMessageBox::Save == QMessageBox::question(this,"ques","提问",QMessageBox::Save |QMessageBox::Cancel,QMessageBox::Cancel))
//         {
//                 qDebug()<<"保存";
//         }
//         else
//         {
//                 qDebug()<<"取消";
//         }
         //waring对话框

        //其他标准对话框
        //颜色对话框
//        QColor color=QColorDialog::getColor(QColor(255,0,0));
//        qDebug()<<"r= "<<color.red()<<"g="<<color.green()<<"b="<<color.blue();

        //文件对话框                  参数1 父亲  参数2 标题 参数3  默认打开路径 参数4 过滤文件格式
//        QString str=QFileDialog::getOpenFileName(this,"打开文件","C:\\Users\\子文\\Desktop","(*.txt)");
//        qDebug() << str;

        //字体对话框
        bool flag;
        QFontDialog::getFont(&flag,QFont("华文彩云",36));

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

