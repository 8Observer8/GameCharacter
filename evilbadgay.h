#ifndef EVILBADGAY_H
#define EVILBADGAY_H

#include "gamecharacter.h"
#include "functions_for_healthcalc.h"

namespace GameStuff {

class EvilBadGay : public GameCharacter
{
public:
public:
    explicit EvilBadGay(HealthCalcFunc hcf = defaultHealthCalc)
        : GameCharacter(hcf)
    {
    }
};

}

#endif // EVILBADGAY_H
