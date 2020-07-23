/**
Modify the Monitor class from Exercise 4 so that you can decrement( ) the incident count.
Make a class Monitor2 that takes as a constructor argument a pointer to a Monitor1,
and which stores that pointer and calls incident( ) and print( ).
In the destructor for Monitor2, call decrement( ) and print( ).
Now make a static object of Monitor2 inside a function.
Inside main( ), experiment with calling the function and not calling the function to see
what happens with the destructor of Monitor2.
**/
#include <iostream>
using namespace std;

class Monitor{
    static int count;
public:
    void print() const{
        cout << count << endl;
    }
    void incident(){
        count++;
    }
    void decrement(){
        count--;
    }
};

int Monitor::count = 0;

class Monitor2{
    Monitor* mPtr;
public:
    Monitor2(Monitor* mnt = new Monitor):mPtr(mnt){
        cout << "Constructor of class Monitor2" << endl;
        mPtr->incident();
        mPtr->print();
    }
    ~Monitor2(){
        cout << "Destructor of class Monitor2" << endl;
        mPtr->decrement();
        mPtr->print();
    }
};

void fun(){
    static Monitor m;
    m.incident();
    m.print();
    static Monitor2 m2;
}

Monitor2 m3;

int main(){
    fun();
}
