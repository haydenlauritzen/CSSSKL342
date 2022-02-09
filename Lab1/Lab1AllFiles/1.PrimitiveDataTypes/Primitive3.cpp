#include<iostream>
#include<cmath>

using std::cout;
using std::endl;

double myRoundingFunction(double val) {
    double dec = val - trunc(val);
    if(dec == 0) return val;
    if(val > 0) {
        if(dec >= 0.5) {
            return ceil(val);
        }
        else if(dec < 0.5) {
            return floor(val);
        }
    }
    else if(val < 0) {
        if(dec > -0.5) {
            return ceil(val) == 0 ? 0.0 : ceil(val);
        }
        else if(dec <= -0.5) {
            return floor(val);
        }
    }
    return val;
}

int main() {

    cout << "0.4 rounds to: " << myRoundingFunction(0.4) << endl; 
    cout << "0.6 rounds to: " << myRoundingFunction(0.6) << endl; 
    cout << "-0.4 rounds to: " << myRoundingFunction(-0.4) << endl; 
    cout << "-0.6 rounds to: " << myRoundingFunction(-0.6) << endl; 
    cout << "0.5 rounds to: " << myRoundingFunction(0.5) << endl; 
    cout << "-0.5 rounds to: " << myRoundingFunction(-0.5) << endl; 
    cout << "1.0 rounds to: " << myRoundingFunction(1.0) << endl;
    cout << "-1.0 rounds to: " << myRoundingFunction(-1.0) << endl; 
    cout << "0.0 rounds to: " << myRoundingFunction(0.0) << endl;  

}