// Count one special word in a file
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream in("SpecWordCount.cpp");
    string word;
    string spec_word = "int";
    int count = 0;
    while(in >> word){
        if(word == spec_word){
            count++;
        }
    }
    cout << "The file has " << count << " " << spec_word << endl;
}