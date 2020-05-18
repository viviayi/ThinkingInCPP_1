#include <iostream>
using namespace std;

union U1
{
    float f;
    double d;
    long int i;
    char c;
};

enum E1{
    apple = 3,
    banana = 2
};

int main(){
    U1 u;
    u.c = 'a';
    E1 e = apple;
    cout << "enum E1 variable value is: " << e << endl;
}
