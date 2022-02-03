#pragma once

#include<iostream>
#include"MyClass.h"

using namespace std;

class MySubClass : public MyClass {

public: 

MySubClass();
MySubClass& operator=(const MySubClass&);
void copy(const MySubClass& c);
void clear();
int getSubClassData();
void setSubClassData(const int&);

private: 

int subClassData;

};