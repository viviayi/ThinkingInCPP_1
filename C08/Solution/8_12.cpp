#include <iostream>
using namespace std;

int main(){
    char c1[] = "hello";
    char* cp = c1;
    cout << *cp << endl;
    *cp = 'a'; // OK
    cout << *cp << endl;
}