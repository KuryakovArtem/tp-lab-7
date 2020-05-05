#pragma once
#include "Object.h"
#include "Cell.h"
#include "Ocean.h"
#include "setting.h"

class Predator : public Object
{
private:
    bool fed = false;
public:
    Predator(Cell* cell);
    bool live() override;
    char getSymbol() override;
    void move() override;
    void reproduce() override;
    bool eatTo();
};