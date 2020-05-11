#include <iostream>
#include "3_1.h"
using namespace std;

void f1(){
    cout << "Called function f1(), return void." << endl;
}

char f2(char x, int y){
    cout << "Called function f2("<< x << ", " << y << "),return char." << endl;
}

int f3(int x, int y){
    cout << "Called function f3("<< x << ", " << y << "),return int." << endl;
}

float f4(float x, double y){
    cout << "Called function f4("<< x << ", " << y << "),return float." << endl;
}