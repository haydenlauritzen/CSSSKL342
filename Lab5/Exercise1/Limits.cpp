#include<iostream>
#include<limits.h>

using namespace std;

int main() {

    int a = -1;
    unsigned int b = 3;
    long c = 1/3;
    double d = 5.0;
    float e = 12345.6789;

    cout << "INT a: " << a << endl;
    cout << "INT_MAX" << INT_MAX << endl;
    cout << "INT_MIN" << INT_MIN << endl;
    cout << endl;

    cout << "UNSIGNED INT b: " << b << endl;
    cout << "INT_MAX" << UINT_MAX << endl;
    cout << "INT_MIN" << numeric_limits<unsigned int>::min() << endl;
    cout << endl;

    cout << "LONG c: " << c << endl;
    cout << "LONG_MAX" << LONG_MAX << endl;
    cout << "LONG_MIN" << LONG_MIN << endl;
    cout << endl;

    cout << "DOUBLE d: " << d << endl;
    cout << "DOUBLE_MAX" << __DBL_MAX__ << endl;
    cout << "DOUBLE_MIN" << _MIN << endl;
    cout << endl;

}

