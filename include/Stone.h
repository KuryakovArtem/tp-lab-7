#pragma once
#include "Object.h"
#include "Cell.h"
#include "Ocean.h"
#include "setting.h"

class Stone : public Object
{
public:
    Stone(Cell* cell);
    ~Stone() = default;
    bool live() override;
    char getSymbol() override;
};