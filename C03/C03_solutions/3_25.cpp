#include <iostream>
using namespace std;

void printBinary(const unsigned char val) {
    for(int i = 7; i >= 0; i--){
        if(val & (1 << i))
            cout << "1";
        else
            cout << "0";
    }
    cout << endl;
}

int main(){
    float f1 = 2.00;
    unsigned char* uc1 = (unsigned char*)&f1;
    for(int i = sizeof(float)-1; i >= 0; i--){
        printBinary(uc1[i]);
    }
    float f2 = 2.01;
    unsigned char* uc2 = (unsigned char*)&f2;
    for(int i = sizeof(float)-1; i >= 0; i--){
        printBinary(uc2[i]);
    }
    return 0;
}
