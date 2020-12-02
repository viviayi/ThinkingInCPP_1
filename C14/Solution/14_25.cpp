// Composition vs. inheritance
#include "../../require.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class StringStack{
    vector<string*> v; // Embed instead of inherit
public:
    void push(string* str){
        v.push_back(str);
    }
    string* peek() const{
        return v.back();
    }
    void pop(){
        v.pop_back();
    }
    int size() const{
        return v.size();
    }
};

int main(){
    ifstream in("14_25.cpp");
    assure(in, "14_25.cpp");
    string line;
    StringStack textlines;
    while(getline(in, line))
        textlines.push(new string(line));
    string* s;

    int size = textlines.size();
    for(int i = 0; i < size; i++){
        cout << *(textlines.peek()) << endl;
        textlines.pop();
    }
} ///:~