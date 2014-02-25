#include <QCoreApplication>
#include "gamecharacter.h"
#include "player.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    GameCharacter gc;
    int healthValue = gc.healthValue();

    qDebug() << "";

    Player player;
    healthValue = player.healthValue();

    return a.exec();
}
