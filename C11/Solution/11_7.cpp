#include <iostream>
using namespace std;

void f(int*& ip){
    ip++;
}

int main(){
    int i = 1;
    int* ip = &i;
    cout << ip << endl;
    f(ip);
    cout << ip << endl;
}