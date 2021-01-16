/**
Modify OStackTest.cpp by creating your own class, then multiply-inheriting
it with Object to create something that can be placed into the Stack.
Test your class in main( ).
**/
#include "../OStack.h"
#include "../../require.h"
#include <fstream>
#include <iostream>
using namespace std;

class Float{
    float f;
public:
    Float(float ff = 0.0) : f(ff){}
    friend ostream& operator<<(ostream& out, const Float& ff);
};

ostream& operator<<(ostream& out, const Float& ff){
    out << ff.f;
    return out;
}

class MyFloat : public Float, public Object{
public:
    ~MyFloat(){
        cout << "deleting float: " << *this << endl;
    }
    MyFloat(Float f) : Float(f) {}
};

int main(int argc, char* argv[]){
    Stack floatStack;
    float f;
    // Read file and store lines in the stack:
    for(int i = 0; i < 100; i++)
        floatStack.push(new MyFloat(float(i)/3.0));
    // Pop some lines from the stack:
    MyFloat* s;
    for(int i = 0; i < 50; i++){
        if((s=(MyFloat*)floatStack.pop()) == 0) break;
        // cout << *s << endl;
        delete s;
    }
    cout << "Letting the destructor do the rest:" << endl;
} ///:~
