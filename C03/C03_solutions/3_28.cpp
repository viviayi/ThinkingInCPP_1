#include <iostream>
using namespace std;

void PrintArr(double d[], int size){
    for(int i = 0; i < size; i++){
        cout << d[i] << " ";
    }
    cout << endl;
}

int main(){
    int SIZE = 10;
    double a[SIZE] = {0.0};
    PrintArr(a, SIZE);
    unsigned char* p = reinterpret_cast<unsigned char*>(a);
    for(int j = 0; j < SIZE; j++){
        int pt_start = j * sizeof(double);
        for(int i = 0; i < sizeof(double); i++){
            p[pt_start+i] = 1;
        }
    }
    PrintArr(a, SIZE);
}