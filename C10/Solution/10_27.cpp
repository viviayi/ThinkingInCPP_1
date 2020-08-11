/**
Create a class containing an int, a constructor that initializes the int
from its argument, and a print( ) function to display the int. Now create
a second class that contains a static object of the first one. Add a static
member function that calls the static object’s print( ) function.
Exercise your class in main( ).
**/
#include <iostream>
using namespace std;

class IntClass{
    int i;
public:
    IntClass(int ii) : i(ii){}
    void print(){ cout << i << endl; }
};

class StaticClass{
    static IntClass obj;
public:
    static void print(){
        obj.print();
    }
};

IntClass StaticClass::obj(6);

int main(){
    StaticClass obj;
    obj.print();
}