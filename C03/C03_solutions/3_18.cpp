#include <iostream>
using namespace std;

void print(int a[]){
    for(int i = 0; i < sizeof(a)/sizeof(int); i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int a[10];
}