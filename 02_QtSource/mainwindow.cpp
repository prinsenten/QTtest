#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    resize(1000,600);

    ui->setupUi(this);
  //  ui->actionnew->setIcon(QIcon("D:/preview.png"));

    //使用添加Qt资源 ": + 前缀名 + 文件名 "
    ui->actionnew->setIcon(QIcon(":/222.png"));
    ui->actionopen->setIcon(QIcon(":/preview.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

