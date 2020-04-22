// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<string> v;
    ifstream in("FillVector.cpp");
    string line;
    while(getline(in, line)){
        v.push_back(line); // Add the line to the end
    }
    /*
    // Add line numbers
    for(int i = v.size()-1; i >= 0; i--){
        cout << i << ": " << v[i] <<endl;
    }
    */
    string s;
    for(int i = 0; i < v.size(); i++){
        s += v[i];
    }
    cout << s << endl;
} ///:~