/*
 *  Square.cpp
 *  Class-example
 *
 */
#ifndef SQUARE_
#define SQUARE_

#include <iostream>
#include "Square.h"

using namespace std;

template <typename T>
void Square<T>::setSize(T newSize)
{
	theSize = newSize;
}

template <typename T>
T Square<T>::getSize(void) const
{
	return theSize;
}

template <typename T>
Square<T> & Square<T>::operator=(const Square<T>& other)
{
	theSize = other.getSize();
	return *this;
}

template <typename T>
ostream& operator<<(ostream &os, const Square<T> &c)
{
	os << c.getSize();
	return os;
}

template <typename T>
bool Square<T>::operator<(const Square<T>& other)
{
	return theSize < other.getSize();
}

#endif