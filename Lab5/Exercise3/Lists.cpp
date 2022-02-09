#include<iostream>
#include<list>

using namespace std;

int main() {

    list<int> l;

    for(int i = 1; i < 10; i+=2) {
        l.push_back(i);
    }   
    for(int i = 2; i <= 10; i+=2) {
        l.push_front(i);
    }   

    cout << "list has: ";
    for(auto i : l) {
        cout << i << " ";
    }
    cout << endl;

    cout << "first element: " << l.front() << endl;
    cout << "last element: " << l.back() << endl;

    l.remove(3);

    l.sort();

    cout << "list has: ";
    for(auto i : l) {
        cout << i << " ";
    }
    cout << endl;

    list<int> temp = l;
    for(auto i : temp) {
        if((i % 2) == 1) { 
            l.remove(i);
        }
    }

    cout << "list has: ";
    for(auto i : l) {
        cout << i << " ";
    }

    return 0;
}
