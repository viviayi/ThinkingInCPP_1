// Mathematical operators and pre define
#include <iostream>
using namespace std;

// A macro to display a string and a value
#define PRINT(STR, VAR) \
  cout << STR "=" << VAR << endl;

int main(){
    int i, j, k;
    cout << "enter an integer: ";
    cin >> j;
    cout << "enter anothre integer: ";
    cin >> k;
    PRINT("j", j); PRINT("k", k);
    i = j + k; PRINT("j + k", i);
    i = j - k; PRINT("j - k", i);
    i = j * k; PRINT("j * k", i);
    i = j / k; PRINT("j / k", i);
    i = j % k; PRINT("j % k", i);
} ///:~