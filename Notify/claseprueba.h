#ifndef CLASEPRUEBA_H
#define CLASEPRUEBA_H

#include <iostream>
#include <QDebug>
#include <functional>

#include <QTimer>

class Notify : QObject
{
    Q_OBJECT
public:
    Notify();
    ~Notify();



    std::function<void(int)> m_function;

    void setConnects();

    QTimer *m_timer;

    void setFunction(std::function<void(int)> _m_function);
public slots:
    void lectura();

};

#endif // CLASEPRUEBA_H
