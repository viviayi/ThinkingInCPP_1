// using "g++ -S 4_10.cpp" to generate 4_10.s
// _ZN1S4funcEi
#include <iostream>
using namespace std;

struct S
{
    void func(int);
};
void S::func(int i){
    cout << i << endl;    
}
