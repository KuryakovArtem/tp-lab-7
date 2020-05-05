#pragma once
#include "setting.h"

#define STONE_SYMBOL '#'
#define CORAL_SYMBOL '*'
#define PREY_SYMBOL 'f'
#define PREDATOR_SYMBOL 'S'

enum class ObjType{	STONE,	CORAL,	PREY, PREDATOR};

class Ocean;
class Cell;

class Object {
protected:
	Cell* cell;
	size_t lifetime;
	ObjType type;
	size_t reproduceTime;
public:
	Object(Cell* c = nullptr);
	virtual ~Object() = default;
	virtual bool live() = 0;
	virtual char getSymbol() = 0;
	virtual void move() {};
	virtual void reproduce() {};
	Cell* getCell();
	ObjType getType();
	void setLifetime(size_t lifetime);
};