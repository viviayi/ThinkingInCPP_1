#include <iostream>
using namespace std;

void print(void* obj){
    cout << obj << endl;
}

int main(){
    int* i = new int;
    long* l = new long;
    char* c = new char[100];
    float* f = new float[100];
    print(static_cast<void*>(i));
    print(static_cast<void*>(l));
    print(static_cast<void*>(c));
    print(static_cast<void*>(f));
    delete i;
    delete l;
    delete[] c;
    delete[] f;
}