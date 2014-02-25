#ifndef PLAYER_H
#define PLAYER_H

#include "gamecharacter.h"

class Player : public GameCharacter
{
public:
    Player();

private:
    virtual int doHealthValue() const;
};

#endif // PLAYER_H
