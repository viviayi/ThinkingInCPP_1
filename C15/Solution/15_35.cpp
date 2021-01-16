// Modify StaticHierarchyNavigation.cpp so that instead of using C++ RTTI you create your own RTTI 
// via a virtual function in the base class called whatAmI( ) and an enum type { Circles, Squares };.
#include <iostream>
#include <typeinfo>
using namespace std;

enum type { Circles, Squares };

class Shape{
public:
    virtual type whatAmI() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    type whatAmI(){
        return Circles;
    }
};
class Square : public Shape {
public:
    type whatAmI(){
        return Squares;
    }
};
class Other {};

int main(){
    Circle c;
    Shape* s = &c; 
    if(s->whatAmI() == Circles)
        cout << "It is Circle";
    if(s->whatAmI() == Squares)
        cout << "It is Square";
} ///:~
