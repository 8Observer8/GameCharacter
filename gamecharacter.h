#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H

class GameCharacter
{
public:
    GameCharacter();

    int healthValue() const; /* производные классы не переопределяют
                              * эту функцию, см. правило 36
                              */
private:
    virtual int doHealthValue() const; /* производные классы могут
                                        * переопределить эту функцию
                                        */
};

#endif // GAMECHARACTER_H
