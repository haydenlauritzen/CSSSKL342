/*
 * Driver for simple int Square class.
 *
 * Author: Kelvin Sung
 * Date: Oct 2018
 */

#include <iostream>
#include "Square.h"

using namespace std;

template <typename T>
void MySwap(T &a, T &b) {
    T t = a;
    a = b;
    b = t;
}

template <typename T>
void MyBubbleSort(T *a, int size) {
    for (int i = 0; i<size; i++) {
        for (int j = 0; j<size-1-i; j++) {
            if (a[j] < a[j+1])
                MySwap(a[j], a[j+1]);
        }
    }
}

template <typename T>
void printArray(string msg, T *data, int size) {
    cout << msg << endl;
    for (int i = 0; i<size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}


int main(int argc, char** argv)
{
    Square<int> s1, s2;

    s1.setSize(5);
    s2.setSize(3);

    cout << "S1 is: " << s1 << endl;
    cout << "S2 is: " << s2 << endl;

    if (s1 < s2) 
        cout << "s1 is smaller" << endl;
    else 
        cout << "s2 is smaller" << endl;

    s1 = s2;
    cout << "after assignment" << endl;
    cout << "s1 is:" << s1 << endl;
    cout << "s2 is:" << s2 << endl;
    
    // do bubble sort
    int  num[10] = {10, 9, 8, 1, 0, 7, 20, 14, 2, 4};
    Square<int> sArray[10];  // call initialize by default constructors
    for (int i = 0; i<10; i++) {
        sArray[i].setSize(num[i]);
    }
    printArray("Array before sorting:", sArray, 10);
    MyBubbleSort(sArray, 10);
    printArray("Array after sorting:", sArray, 10);

    // dynamically allocating squares

    cout << endl; 
    
    Square<int>* squareArray = new Square<int>[10];

    for(int i = 0; i < 10; i++) {
        squareArray[i].setSize(50-i);
    }

    printArray("Array before sorting: ", squareArray, 10);   
    MyBubbleSort(squareArray, 10);
    printArray("Array after sorting: ", squareArray, 10);   
}
