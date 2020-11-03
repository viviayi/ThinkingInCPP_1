/**
Take the code fragments in the beginning of the section titled
"References in C++" and put them into a main( ). Add statements
to print output so that you can prove to yourself that references
are like pointers that are automatically dereferenced.
**/

#include <iostream>
using namespace std;


int main(){
    //Ordinary free-standing reference:
    int y;
    int& r = y;
    // When a reference is created, it must be initialized to a live object.
    // However, you can also say:
    const int& q = 12;
    // References are tied to someone else's storage:
    int x = 0;
    int& a = x;

    cout << "x = " << x << ", a = " << a << endl;
    a++;
    cout << "x = " << x << ", a = " << a << endl;
} ///:~