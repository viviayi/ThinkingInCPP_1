/**
Create a class containing both a const and a non-const static array of int.
Write static methods to print out the arrays. Exercise your class in main( ).
**/
#include <iostream>
using namespace std;

class MyClass{
    static int arr[];
    static const int c_arr[];
public:
    static void print();
    static void print_c();
};

int MyClass::arr[] = {1,2,3,4};
const int MyClass::c_arr[] = {2,3,4,5};

void MyClass::print(){
    for(int i = 0; i < sizeof(arr)/sizeof(*arr); i++)
        cout << arr[i] << ' ';
    cout << endl;
}

void MyClass::print_c(){
    for(int i = 0; i < sizeof(c_arr)/sizeof(*c_arr); i++)
        cout << c_arr[i] << ' ';
    cout << endl;
}

int main(){
    MyClass my;
    my.print();
    my.print_c();
}