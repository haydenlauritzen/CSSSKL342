#include<iostream>
#include"MySubClass.h"

MySubClass::MySubClass() {

}

MySubClass& MySubClass::operator=(const MySubClass& c) {
    if (this != &c) {
        clear();
        copy(c);
    }
    return *this;
}

void MySubClass::copy(const MySubClass& other) {
    this->subClassData = other.subClassData;
}

void MySubClass::clear() {
    this->subClassData = 0;
}

int MySubClass::getSubClassData() {
    return this->subClassData;
}

void MySubClass::setSubClassData(const int& val) {
    this->subClassData = val;
}