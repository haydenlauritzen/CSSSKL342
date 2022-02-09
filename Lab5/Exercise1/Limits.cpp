#include<iostream>
#include<limits>
#include<limits.h>
#include<cmath>

using namespace std;

template <typename T>
void findLimits(const T& val) {
    cout << "MAX: " << numeric_limits<T>::max() << endl;
    cout << "MIN: " << numeric_limits<T>::min() << endl;
    cout << endl;
}

int main() {

    int i = -1;
    unsigned int ui = 3;
    long l = 7*(pow(10, 6));
    long long ll = 7*(pow(10, 16));
    double d = 1.0/3.0;
    float f = 12345.6789;


    cout << "INT a: " << i << endl;
    findLimits(i);
    cout << endl;

    cout << "UNSIGNED INT ui: " << ui << endl;
    findLimits(ui);
    cout << endl;

    cout << "LONG l: " << l << endl;
    findLimits(l);
    cout << endl;

    cout << "LONG LONG ll: " << ll << endl;
    findLimits(ll);
    cout << endl;

    cout << "DOUBLE d: " << d << endl;
    findLimits(d);
    cout << endl;

    cout << "FLOAT f: " << f << endl;
    findLimits(f);
    cout << endl;

}

