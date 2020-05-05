#pragma once
#include "Object.h"
#include "Cell.h"
#include "Ocean.h"
#include "setting.h"

class Cell;
class Ocean;
class Prey : public Object
{
public:
    Prey(Cell* cell);
    bool live() override;
    char getSymbol() override;
    void move() override;
    void reproduce() override;
};