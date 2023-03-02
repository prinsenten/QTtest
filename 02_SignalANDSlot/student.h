#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

    //槽函数 返回值void 必须声明 也需要实现，可以有参数，可以重载
    void treat();

    void treat(QString FoodName);

signals:


};

#endif // STUDENT_H
