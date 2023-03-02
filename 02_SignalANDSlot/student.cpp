#include "student.h"
#include "QDebug"
Student::Student(QObject *parent) : QObject(parent)
{

}
void Student::treat()
{
    qDebug()<<"请吃饭";
}

void Student::treat(QString FoodName)
{
    //QString ->char * 先转成QByteArray (.toUtf8()) 再转char *
    qDebug()<<"请老师吃"<<FoodName.toUtf8().data();
}
