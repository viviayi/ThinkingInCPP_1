#include <iostream>
using namespace std;

class Dog{
public:
    int run(int i) const{
        cout << "run\n";
        return i;
    }
    int eat(int i) const{
        cout << "eat\n";
        return i;
    }
    int sleep(int i) const{
        cout << "ZZZ\n";
        return i;
    }

    void f1() const{
        cout << "void f1 called " << endl;
    }
    void f2() const{
        cout << "void f2 called " << endl;
    }

    typedef int (Dog::*PMF)(int) const; // 成员函数指针
    typedef void (Dog::*PMF2)() const;
    // operator->* must return an object
    // that has an operator()
    class FunctionObject{
        Dog* ptr;
        PMF pmem;
        PMF2 pmem2;
    public:
        // Save the object pointer and member pointer
        FunctionObject(Dog* wp, PMF pmf):ptr(wp), pmem(pmf){
            cout << "FunctionObject constructor\n";
        }
        FunctionObject(Dog* wp, PMF2 pmf2):ptr(wp), pmem2(pmf2){
            cout << "FunctionObject constructor\n";
        }
        // Make the call using the object pointer and member pointer
        int operator()(int i) const{
            cout << "FunctionObject::operator()\n";
            return (ptr->*pmem)(i); // make the call
        }
        void operator()() const{
            cout << "FunctionObject::operator()\n";
            (ptr->*pmem2)(); // make the call
        }
    };
    FunctionObject operator->*(PMF pmf){
        cout << "operator->*" << endl;
        return FunctionObject(this, pmf);
    }
    FunctionObject operator->*(PMF2 pmf2){
        cout << "operator->*" << endl;
        return FunctionObject(this, pmf2);
    }
};

int main(){
    Dog w;
    Dog::PMF pmf = &Dog::run;
    cout << (w->*pmf)(1) << endl;
    pmf = &Dog::sleep;
    cout << (w->*pmf)(2) << endl;
    pmf = &Dog::eat;
    cout << (w->*pmf)(3) << endl;
    Dog::PMF2 pmf2 = &Dog::f1;
    (w->*pmf2)();
    pmf2 = &Dog::f2;
    (w->*pmf2)();

} ///:~