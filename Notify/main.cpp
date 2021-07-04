#include <QCoreApplication>

#include "claseprueba2.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Date:" ;

    claseprueba2 m_claseprueba;

    return a.exec();
}
