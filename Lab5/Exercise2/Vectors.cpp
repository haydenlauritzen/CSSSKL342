#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main() { 

    vector<int> myV(5);

    cerr << "example random numbers: " << endl;
    for(int i = 0; i < 10; i++) {
        cout << rand()%10 << endl;
    }
    cout << "filling vector" << endl;
    for(int i = 0; i < myV.size(); i++) {
        myV.at(i) = (rand()%50)*2;
    }
    for(auto val : myV) {
        cout << val << endl;
    }
    cout << "adding odd numbers" << endl;
    for(int i = 0; i < 5; i++) {
        myV.push_back(((rand()%50)*2)+1);
    }
    sort(myV.begin(), myV.end());
    cout << "sorted array: " << endl;
    for(auto val : myV) {
        cout << val << endl;
    }
    
    vector<int> myV2(myV.size());

    for(int i = 0; i < myV.size(); i++) {        
        myV2.at(i) = myV.at(i)*2;
    }

    cout << "vector<vector<int>>" << endl;
    vector<vector<int>> myVV;
    myVV.push_back(myV);
    myVV.push_back(myV2);

    for(auto v : myVV) {
        cout << "vector has: " << endl;
        for(auto i : v) {
            cout << i << endl; 
        }
    }

    return 0;
}