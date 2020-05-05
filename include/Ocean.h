#pragma once
#include "setting.h"
#include "Cell.h"
#include "Ocean.h"
#include "setting.h"
#include "Cell.h"
#include "Predator.h"
#include "Stone.h"
#include "Prey.h"
#include <list>

class Ocean
{
    friend Cell;
private:
    Cell** cells;
    std::list<Object*> stuff;
public:
    Ocean();
    ~Ocean();
    void print() const;
    void addObjects(ObjType type, unsigned int amount);
    void addStuff(Object* obj);
    void eraseObject(Object* obj);
    void start();
    Cell* findEmpty(Pair crd);
    Cell* findPrey(Pair crd);
};
