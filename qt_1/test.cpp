#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "Constrocted";
}

Test::~Test()
{
    qInfo() << this << "Deconstrocted";
}
