/*
 *  A.cpp
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 *
 */

#include "A.h"
#include <iostream>

using namespace std;

A::A()
{
    n = "unnamed A";
    testData2 = 10;
    cout << "Inside A::A() for object " << n << endl;
}

A::A(string name, int test) : n(name), testData1(test)
{
    testData2 = 10;
    cout << "Inside A::A(string) for object " << n << endl;
}


A::~A()
{
    cout << "Inside A::~A() for object " << n << endl;
}


void A::setN(const char* s)
{
  n = s;
}

string A::getN(void) const
{
  return n;
}


