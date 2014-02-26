#include <QCoreApplication>
#include "evilbadgay.h"
#include <QDebug>
#include "functions_for_healthcalc.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // однотипные персонажи с разным поведением относительно здоровья
    GameStuff::EvilBadGay ebg1(GameStuff::loseHealthQuickly);
    GameStuff::EvilBadGay ebg2(GameStuff::loseHealthSlowly);

    return a.exec();
}
