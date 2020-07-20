/**
Modify the FIELD( ) macro so that it also contains an index number.
Create a class whose members are composed of calls to the FIELD( ) macro.
Add a member function that allows you to look up a field using its index
number. Write a main( ) to test the class.
**/
#include <iostream>
using namespace std;

#define FIELD(a) char* a##_string; int a##_size; int a##_index

class A{
    FIELD(one);
    FIELD(two);
    FIELD(three);
    A(){
        one_index = 1;
        one_string = "one";
        one_size = sizeof(one_string)/sizeof(*one_string);

        two_index = 2;
        two_string = "two";
        two_size = sizeof(two_string)/sizeof(*two_string);

        three_index = 2;
        three_string = "three";
        three_size = sizeof(three_string)/sizeof(*three_string);
    }
public:
    void lookUp(int index);
};

void A::lookUp(int index){

}