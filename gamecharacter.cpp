#include "gamecharacter.h"
#include <QDebug>

GameCharacter::GameCharacter()
{
}

int GameCharacter::healthValue()  const
{
    // выполнить предварительные действия
    // ...
    qDebug() << "Do something before!";

    int retVal = doHealthValue(); // выполнить реальную работу
    qDebug() << "Real work done.";

    // выполнить завершающие действия
    // ...
    qDebug() << "Do something after!";

    return retVal;
}

int GameCharacter::doHealthValue() const
{
    /* алгоритм по умолчанию для вычисления
     * жизненной силы персонажа
     */
    return 0;
}
