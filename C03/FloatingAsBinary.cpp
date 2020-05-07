#include <cstdlib>
#include <iostream>
using namespace std;

void printBinary(const unsigned char val){
    for(int i = 7; i >= 0; i--){
        // 1 << i 产生00000001、00000010...
        // 和val按位与，可以判断每一位是0或1
        if(val & (1 << i)){
            cout << "1";
        }
        else{
            cout << "0";
        }
    }
}

int main(int argc, char* argv[]){
    if(argc != 2){
        cout << "Must provide a number" << endl;
        exit(1);
    }
    double d = atof(argv[1]);
    unsigned char* cp = 
      reinterpret_cast<unsigned char*>(&d);
    /*
    for(int i = sizeof(double); i > 0; i-=2){
        printBinary(cp[i-1]);
        cout << " ";
        printBinary(cp[i]);
        cout << " ";
    }
    */
    for(int i = sizeof(double); i > 0; i--){
        //printBinary(cp[i-1]);
        //cout << " ";
        printBinary(cp[i]);
        cout << " ";
    }
}