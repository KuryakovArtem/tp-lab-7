#include "Object.h"

Object::Object(Cell* c) : cell(c)
{

}

Cell* Object::getCell()
{
	return cell;
}

void Object::setLifetime(size_t ltime)
{
	lifetime = ltime;
}

ObjType Object::getType()
{
	return type;
}