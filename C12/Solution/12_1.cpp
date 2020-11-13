#include <iostream>
using namespace std;

class MyClass{
    int i;
public:
    MyClass(int ii = 0) : i(ii) {}
    // const MyClass operator++(int){ 
    //     MyClass out(i);
    //     i++; 
    //     return out;
    // }
    MyClass& operator++(){ 
        i++; 
        return *this;
    }

};

int main(){
    MyClass m;
    // m++; //error: no 'operator++(int)' declared for postfix '++' [-fpermissive]
    ++m; //error: no match for 'operator++' (operand type is 'MyClass')
         //note:   candidate expects 1 argument, 0 provided
}