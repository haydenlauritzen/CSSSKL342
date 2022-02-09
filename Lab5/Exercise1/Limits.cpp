#include<iostream>
#include<limits>
#include<limits.h>
#include<cmath>

using namespace std;

int main() {

    int a = -1;
    unsigned int b = 3;
    long c = 7*(pow(10, 6));
    double d = 1/3;
    float e = 12345.6789;

    cout << "INT a: " << a << endl;
    cout << "INT_MAX: " << INT_MAX << endl;
    cout << "INT_MIN: " << INT_MIN << endl;
    cout << endl;

    cout << "UNSIGNED INT b: " << b << endl;
    cout << "INT_MAX: " << UINT_MAX << endl;
    cout << "INT_MIN: " << numeric_limits<unsigned int>::min() << endl;
    cout << endl;

    cout << "LONG c: " << c << endl;
    cout << "LONG_MAX: " << LONG_MAX << endl;
    cout << "LONG_MIN: " << LONG_MIN << endl;
    cout << endl;

    cout << "DOUBLE d: " << d << endl;
    cout << "DOUBLE_MAX: " << __DBL_MAX__ << endl;
    cout << "DOUBLE_MIN: " << __DBL_MIN__ << endl;
    cout << endl;

    cout << "FLOAT e: " << e << endl;
    cout << "FLOAT_MAX" << __FLT_MAX__ << endl;
    cout << "FLOAT_MIN" << __FLT_MIN__ << endl;
    cout << endl;

}

