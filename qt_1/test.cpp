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

void Test::testing()
{
    QString noise = "ACORDA!";
    emit alarm(noise);
}

void Test::wake(QString noise)
{
    qInfo() << "From" << sender() << noise;
}
