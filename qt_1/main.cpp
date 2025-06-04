#include <QCoreApplication>
#include "test.h"

void lifecycle(){
    Test t;
}

void notifications(){
    Test mom;
    Test child;
    mom.setObjectName("Mãe");
    child.setObjectName("Filho");
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    notifications();

    return a.exec();
}
