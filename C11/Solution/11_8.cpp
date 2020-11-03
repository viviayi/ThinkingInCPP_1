#include <iostream>
using namespace std;

void f(char&);

void f(char& c){
    c = 'n';
}

int main(){
    char a = 'a';
    cout << a << endl;
    f(a);
    cout << a << endl;
}