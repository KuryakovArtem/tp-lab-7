#include "Prey.h"
#include "Cell.h"
#include "Object.h"

Prey::Prey(Cell* cell):Object(cell)
{
	lifetime = LIMITPREY;
	type = ObjType::PREY;
	reproduceTime = REPRODUCETIME;
}

bool Prey::live()
{
	if (!lifetime--)
		return false;
	move();
	if (reproduceTime == 0)
	{
		reproduce();
		reproduceTime = REPRODUCETIME;
	}
	reproduceTime--;
	return true;
}

char Prey::getSymbol()
{
	return PREY_SYMBOL;
}

void Prey::move()
{
	Cell* newCell = cell->getFreeCellAround();
	if (newCell)
	{
		cell->setObject(nullptr);
		cell = newCell;
		newCell->setObject(this);
	}
}

void Prey::reproduce()
{
	Cell* newCell = cell->getFreeCellAround();
	if (newCell)
	{
		auto* child = new Prey(newCell);
		newCell->setObject(child);
		newCell->getOcean()->addStuff(child);
	}
}