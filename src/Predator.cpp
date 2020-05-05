#include "Predator.h"
#include "Cell.h"
#include "Object.h"
#include "setting.h"

Predator::Predator(Cell* cell) :Object(cell)
{
	lifetime = LIMITPREDATOR;
	type = ObjType::PREDATOR;
	reproduceTime = REPRODUCETIME;
};

bool Predator::live()
{
	if (!lifetime--)
		return false;
	fed = eatTo();
	reproduceTime--;
	if (fed && reproduceTime == 0)
	{
		reproduce();
		reproduceTime = REPRODUCETIME;
	}
	if (reproduceTime == 0)
		reproduceTime = REPRODUCETIME;
	return true;
}

char Predator::getSymbol()
{
	return PREDATOR_SYMBOL;
}

void Predator::move()
{
	Cell* newCell = cell->getFreeCellAround();
	if (newCell)
	{
		cell->setObject(nullptr);
		cell = newCell;
		newCell->setObject(this);
	}
}

bool Predator::eatTo()
{
	Cell* chooseTarget = cell->getFreeCellAround();
	if (chooseTarget)
	{
		chooseTarget->getObject()->setLifetime(0);
		return true;
	}
	return false;
}

void Predator::reproduce()
{
	Cell* newCell = cell->getFreeCellAround();
	if (newCell)
	{
		auto* child = new Predator(newCell);
		newCell->setObject(child);
		newCell->getOcean()->addStuff(child);
	}
}