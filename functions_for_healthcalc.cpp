
#include <QDebug>

#include "functions_for_healthcalc.h"

namespace GameStuff {

// функции вычисления жизненной силы с разным поведением
int loseHealthQuickly(const GameCharacter& gc) {
    qDebug() << "calc by loseHealthQuickly()";
}

int loseHealthSlowly(const GameCharacter& gc) {
    qDebug() << "calc by loseHealthSlowly()";
}

// функция алгоритма по умолчанию для вычисления жизненной силы персонажа
int defaultHealthCalc(const GameCharacter& gc) {
    qDebug() << "calc by defaultHealthCalc()";
}

}
