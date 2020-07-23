#include <iostream>
using namespace std;

int Array(const int* intArray = 0){
    static const int* ip;
    if(intArray){
        ip = intArray;
        return *ip;
    }
    if (*ip == -1){
        return 0;
    }
    return *ip++;
}

int i[] = {1,2,3,4,5,-1};

int main(){
    Array(i);
    int ii;
    while((ii = Array()) != 0){
        cout << ii << endl;
    }
}
