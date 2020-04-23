// Open a file and show one line a time, until press Enter
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream in("ShowFileLine.cpp");
    string line;
    while(getline(in, line)){
        cout << line;
        cin.get();
    }
}