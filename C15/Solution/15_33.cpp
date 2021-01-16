/**
Create a class with data members and virtual functions. Write a
function that looks at the memory in an object of your class and
prints out the various pieces of it. To do this you will need to
experiment and iteratively discover where the VPTR is located in the object.
**/
#include <iostream>
using namespace std;

class A{
    int i;
public:
    virtual void f(){
        cout << "A::f\n";
    }
};

