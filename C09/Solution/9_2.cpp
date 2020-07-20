#include <iostream>
using namespace std;

#define FLOOR(x, b) x>=b?1:0

int main(){
    int a = 1, b = 2;   
    cout << (FLOOR(a,b)) << endl;
    cout << (FLOOR(3,2)) << endl;
    cout << (FLOOR(3&0x0f,0x07)) << endl;
    cout << ((3&0x0f)>=0x07?1:0) << endl;
}