/**
In two header files, create two namespaces, each containing a class
(with all inline definitions) with a name identical to that in the other namespace.
Create a cpp file that includes both header files. Create a function, and inside
the function use the using directive to introduce both namespaces. Try creating
an object of the class and see what happens. Make the using directives global
(outside of the function) to see if it makes any difference. Repair the problem
using scope resolution, and create objects of both classes.
**/
#include "10_22_1.h"
#include "10_22_2.h"

void func(){
    using namespace One;
    using namespace Two;
    //! MyClass one;//error: reference to 'MyClass' is ambiguous
    One::MyClass one;
    Two::MyClass two;
}

int main(){}