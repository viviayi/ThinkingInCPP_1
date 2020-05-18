// g++ -DDEBUG 4_11.cpp -o 4_11.exe
#include <iostream>
using namespace std;

int main(){
    #ifdef DEBUG
        cout << "Debug" << endl;
    #else
        cout << "No debug" << endl;
    #endif
}