/**
Create a class that holds an array of ints. Set the size of the array using
static const int inside the class. Add a const int variable, and initialize
it in the constructor initializer list; make the constructor inline. Add a
static int member variable and initialize it to a specific value. Add a
static member function that prints the static data member. Add an inline
member function called print( ) to print out all the values in the array
and to call the static member function. Exercise this class in main( ).
**/

#include <iostream>
using namespace std;

class MyClass{
    static const int size = 10;
    int ia[size] = {0,1,2,3,4,5,6,7,8,9};
    const int i;
    static int is;
public:
    MyClass():i(20) {}
    static void printNumber();
    void print(){
        for(int j = 0; j < size; j++)
            cout << ia[j] << " ";
        cout << endl;
    };
};

int MyClass::is = 30;
void MyClass::printNumber(){
    cout << "is: " << is << endl;
    cout << "size: " << size << endl;
}

int main(){
    MyClass::printNumber();
    MyClass ms;
    ms.print();
}