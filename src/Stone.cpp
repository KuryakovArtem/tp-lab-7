#include "Stone.h"
#include "Cell.h"
#include "Object.h"

Stone::Stone(Cell* cell) :Object(cell)
{
	lifetime = LIMITSTONE;
	type = ObjType::STONE;
};

char Stone::getSymbol()
{
	return STONE_SYMBOL;
}

bool Stone::live()
{
	if (!lifetime--)
		return false;
	return true;
}