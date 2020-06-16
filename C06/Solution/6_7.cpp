#include <iostream>
using namespace std;

int main(){
    double a[10]={1,0,2.14};
    for(int i = 0; i < sizeof(a)/sizeof(*a); i++){
        cout << a[i] << endl;
    }
    double b[]={1, 0.35, 3.14};
    for(int i = 0; i < sizeof(b)/sizeof(*b); i++){
        cout << b[i] << endl;
    }
}