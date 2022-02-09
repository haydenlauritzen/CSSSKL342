/*
 *  Square.cpp
 *  Class-example
 *
 */

#include "Square.h"

void Square::setSize(int newSize)
{
   theSize = newSize;
}


int Square::getSize(void) const
{
   return theSize;
}

// We need an assignment overload so that we can initalize and assign all class variable
Square& Square::operator = (const Square& other)
{
	theSize = other.getSize();
	return *this;
}

bool Square::operator< (const Square& s) {
   return this->getSize() < s.getSize();
}