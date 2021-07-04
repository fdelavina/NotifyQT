#include "claseprueba.h"

Notify::Notify()
{
    setConnects();
}

Notify::~Notify()
{
    qDebug() << "Se llama al desctructor de notify ";
    m_timer->stop();
    delete m_timer;
}

void Notify::setConnects()
{
    qDebug() << "Se hacen las conexiones ";
    m_timer = new QTimer(this);
    m_timer->setInterval(1000);
    connect(m_timer, SIGNAL(timeout()), this, SLOT(lectura()));
    m_timer->start();






}

void Notify::setFunction(std::function<void (int)> _m_function)
{
    m_function = _m_function;
}

void Notify::lectura()
{
    qDebug() << "Se entra en lectura " << "\n" ;
    int randNum = rand()%(100-0 + 1) + 100;
    qDebug() << "Se hace la lectura con un numero random "<<randNum << "\n" ;

    if (m_function !=NULL)
    {
        m_function(randNum);
    }


}

