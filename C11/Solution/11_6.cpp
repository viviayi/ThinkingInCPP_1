#include <iostream>
using namespace std;

void f(int**);

void f(int** i){
    cout << *i << endl;
    *i++;
    cout << *i << endl;
}

int main(){
    int i = 47;
    int j = 48;
    int* ip =&i;
    f(&ip);    
}