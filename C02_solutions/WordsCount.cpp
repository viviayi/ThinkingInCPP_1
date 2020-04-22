// Open a file and count the words number
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream in("WordsCount.cpp");
    string word;
    int count;
    count = 0;
    while(in >> word){
        count++;
    }
    cout << "The number of words in this file is: " << count << endl;
}