//Start with PointerToMemberOperator.cpp from Chapter 12 and show that polymorphism still 
// works with pointers-to-members, even if operator->* is overloaded.
#include <iostream>
using namespace std;

class Dog{
public:
    virtual int run(int i) const{
        cout << "run\n";
        return i;
    }
    virtual int eat(int i) const{
        cout << "eat\n";
        return i;
    }
    virtual int sleep(int i) const{
        cout << "ZZZ\n";
        return i;
    }
    typedef int (Dog::*PMF)(int) const; // 成员函数指针
    // operator->* must return an object
    // that has an operator()
    class FunctionObject{
        Dog* ptr;
        PMF pmem;
    public:
        // Save the object pointer and member pointer
        FunctionObject(Dog* wp, PMF pmf):ptr(wp), pmem(pmf){
            cout << "FunctionObject constructor\n";
        }
        // Make the call using the object pointer and member pointer
        int operator()(int i) const{
            cout << "FunctionObject::operator()\n";
            return (ptr->*pmem)(i); // make the call
        }
    };
    FunctionObject operator->*(PMF pmf){
        cout << "operator->*" << endl;
        return FunctionObject(this, pmf);
    }
};

class MyDog : public Dog{
public:
    int run(int i) const{
        cout << "My dog run\n";
        return i;
    }
    int eat(int i) const{
        cout << "My dog eat\n";
        return i;
    }
    int sleep(int i) const{
        cout << "My dog ZZZ\n";
        return i;
    }
};

int main(){
    MyDog m;
    Dog* wp = &m; // upcast
    Dog::PMF pmf = &Dog::run;
    cout << (*wp->*pmf)(1) << endl;
    pmf = &Dog::sleep;
    cout << (*wp->*pmf)(2) << endl;
    pmf = &Dog::eat;
    cout << (*wp->*pmf)(3) << endl;
} ///:~

/*
operator->*
FunctionObject constructor
FunctionObject::operator()
My dog run
1
operator->*
FunctionObject constructor
FunctionObject::operator()
My dog ZZZ
2
operator->*
FunctionObject constructor
FunctionObject::operator()
My dog eat
3
*/