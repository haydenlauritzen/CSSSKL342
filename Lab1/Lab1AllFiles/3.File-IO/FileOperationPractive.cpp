#include<iostream>
#include<fstream>
using namespace std;

const static int MAX_SIZE = 100;

void parseFile(string file) {
    ifstream inFile;
    inFile.open(file);
    if(inFile.is_open()) {
        int val;
        int count = 0;
        while ((inFile >> val) && (count < MAX_SIZE)) {
            cout << val << " " << endl;
        }
        cout << "Done." << endl;
        inFile.close();
    } 
    else {
        cerr << "Error opening file.";
        exit(-1);
    }
}

int main(int argc, char* argv[]) {
    parseFile("textfile1.txt");
    parseFile("textfile2.txt");
    parseFile("textfile3.txt");
    return 0;
}