#include "widget.h"
#include "QPushButton"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //创建一个老师对象
    this->tea=new Teacher(this);


    //创建一个学生对象
    this->stu=new Student(this);

    //链接
   // connect(tea,&Teacher::hungry,stu,&Student::treat);

    //带参链接 信号位和槽位都是地址 我们用指针来指向它
    void(Teacher:: *teacherSignal)(QString)=&Teacher::hungry;
    void(Student:: *studentSlot)(QString)=&Student::treat;
    connect(tea,teacherSignal,stu,studentSlot);
    //调用下课
  //  classIsOver();


    //点击下课按钮再下课
    QPushButton * btn=new QPushButton("下课",this);
    //重置窗口大小
    this->resize(600,400);
    //点击按钮，触发下课
 //   connect(btn,&QPushButton::clicked,this,&Widget::classIsOver);


    //无参信号和槽链接
    void (Teacher:: *teacherSignal2)(void)=&Teacher::hungry;
    void (Student:: *studentSlot2)(void)=&Student::treat;
    connect(tea,teacherSignal2,stu,studentSlot2);

    //信号和信号链接
    connect(btn,&QPushButton::clicked,tea,teacherSignal2);

    //断开信号
    //disconnect(tea,teacherSignal2,stu,studentSlot2);

   // connect(btn,&QPushButton::clicked,this,&Widget::close);

    //=为值传递
//    [=](){
//        btn->setText("aaaa");
//    }();

    //利用lambda表达式 实现点击按钮 关闭窗口
    QPushButton* btn2=new QPushButton;
    btn2->setText("关闭");
    btn2->move(100,0);
    btn2->setParent(this);
    connect(btn2,&QPushButton::clicked,this,[=](){
        this->close();
        emit tea->hungry("黄焖鸡");
    });


}

void Widget::classIsOver()
{
    //下课了，调用老师信号
    //emit触发自定义信号
//    emit tea->hungry();
    emit tea->hungry("黄焖鸡");

}
Widget::~Widget()
{
}

