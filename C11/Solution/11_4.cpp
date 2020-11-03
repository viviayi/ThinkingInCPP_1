#include <iostream>
using namespace std;

int& f(int* ip){
    cout << *ip << endl;
    (*ip)++;
    int& i = *ip;
    return i;
}

int main(){
    int x = 1;
    int* y = &x;
    cout << f(y) << endl;
}