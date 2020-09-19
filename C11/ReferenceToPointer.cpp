#include <iostream>
using namespace std;

void increment(int*& i){ i++; }

int main(){
    int a = 1;
    int* i = &a;
    cout << "i = " << i << endl;
    increment(i);
    cout << "i = " << i << endl;
    cout << "a = " << a << endl;
} ///:~