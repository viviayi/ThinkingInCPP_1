// g++ Safecons.cpp -o Safecons //-fpermissive
// Using const for safety
#include <iostream>
using namespace std;

const int i = 100; // Typical constant
const int j = i + 10; // Value from const expr
long address = (long long)&j; // Forces storage 
//if using (long)&j, will output error: cast from 'const int*' to 'long int' loses precision
//need to add [-fpermissive]
char buf[j+10]; // Still a const expression

int main(){
    cout << "type a character & CR:";
    const char c = cin.get(); // Can't change
    const char c2 = c + 1;
    cout << c2;
} ///:~