#include "claseprueba2.h"

claseprueba2::claseprueba2()
{
    using namespace std::placeholders;

    m_notify.setFunction( std::bind(&claseprueba2::funcionAbind,this,_1) );
}

void claseprueba2::funcionAbind(int n)
{
   // std::cout << "me has llamado con numero " << n << '\n';
    qDebug() << "me has llamado con numero "<< n << "\n" ;
}

