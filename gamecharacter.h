#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H

#include "functions_for_healthcalc.h"

namespace GameStuff {

class GameCharacter
{
public:
    GameCharacter();

    typedef int (*HealthCalcFunc)(const GameCharacter&);

    explicit GameCharacter(HealthCalcFunc hcf = defaultHealthCalc)
        : healthFunc(hcf)
    {}

    int healthValue() const {
        return healthFunc(*this);
    }

private:
    HealthCalcFunc healthFunc;
};

}

#endif // GAMECHARACTER_H
