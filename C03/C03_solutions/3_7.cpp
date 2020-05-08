#include <iostream>
using namespace std;

void f1(string* s1){
    *s1 += "changed by pointer!";
}

void f2(string& s2){
    s2 += "changed by reference!";
}

int main(){
    string s = "It's a test string. ";
    cout << s << endl;
    f1(&s);
    cout << s << endl;
    f2(s);
    cout << s << endl;
    return 0;
}