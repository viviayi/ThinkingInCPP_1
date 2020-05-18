#include <iostream>
using namespace std;

char* func(char* in, int size){
    char* out = new char[size];
    for(int i = 0; i < size; i++)
    {
        out[i] = in[i];
    }
    return out;
}

void print(const char a[], int size){
    cout << "address: " << (void*)a << endl;
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    char a[10]={'a','b','c','d','e','f','g','h','i','j'};
    char* b = func(a, 10);
    print(a, 10);
    print(b, 10);
    delete[] b;
}