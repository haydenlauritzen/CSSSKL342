#include<iostream>
#include<map>

using namespace std;

int main () {

    map<string, int> m;

    m.insert(pair<string, int>("a", 1));
    m.insert(pair<string, int>("b", 2));
    m.insert(pair<string, int>("c", 3));
    m.insert(pair<string, int>("d", 4));
    m.insert(pair<string, int>("e", 5));

    for(auto pair : m) {
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "inserting value of key: \"e\" returns: " << (m["e"] = 6) << endl;
    cout << "inserting value of key: \"f\" returns: " << (m["f"] = 6) << endl;

    m["g"] = 7;
    m.insert(pair("g", 7));

    m.insert(pair("e", 5));
    m["e"] = 5;

    cout << "map is now: " << endl;
    for(auto pair : m) {
        cout << pair.first << ": " << pair.second << endl;
    }

}