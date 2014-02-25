#ifndef FUNCTIONS_FOR_HEALTHCALC_H
#define FUNCTIONS_FOR_HEALTHCALC_H

#include "gamecharacter.h"

namespace GameStuff {

// функция алгоритма по умолчанию для вычисления жизненной силы персонажа
int defaultHealthCalc(const GameCharacter& gc);

// функции вычисления жизненной силы с разным поведением
int loseHealthQuickly(const GameCharacter& gc);
int loseHealthSlowly(const GameCharacter& gc);

}

#endif // FUNCTIONS_FOR_HEALTHCALC_H
