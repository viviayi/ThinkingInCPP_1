/**
Create a class containing a string, with a constructor that initializes
the string from its argument, and a print( ) function to display the string.
Create another class that contains both const and non-const static arrays of
objects of the first class, and static methods to print out these arrays.
Exercise this second class in main( ).
**/
#include <iostream>
using namespace std;

class MyClass{
    string str;
public:
    MyClass(string s) : str(s){}
    void print() const{ cout << str << endl; }
};

class SecondClass{
    static MyClass one[];
    const static MyClass two[];
public:
    static void print();
};

MyClass SecondClass::one[] = {MyClass("one"),MyClass("two"),MyClass("three")};
const MyClass SecondClass::two[] = {MyClass("four"),MyClass("five"),MyClass("six")};

void SecondClass::print(){
    for(int i = 0; i < sizeof(one)/sizeof(*one); i++)
        one[i].print();
    cout << endl;
    for(int i = 0; i < sizeof(two)/sizeof(*two); i++)
        two[i].print();
    cout << endl;
}

int main(){
    SecondClass s;
    s.print();
}