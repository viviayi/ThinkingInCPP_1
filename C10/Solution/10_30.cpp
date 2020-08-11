/**
Create a struct that contains an int and a default constructor that
initializes the int to zero. Make this struct local to a function.
Inside that function, create an array of objects of your struct and
demonstrate that each int in the array has automatically been initialized
to zero.
**/
#include <iostream>
using namespace std;
void func(){
    struct IntStruct
    {
        int i;
        IntStruct():i(0){}
    };
    IntStruct is[6];
    for(int i = 0; i < 6; i++){
        cout << is[i].i << " ";
    }
}

int main(){
    func();
}