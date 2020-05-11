#include <iostream>
using namespace std;

int main(){
    const double d1[10] = {1};
    volatile double d2[10];
    //double* p1 = const_cast<double*>(d1);
    //double* p2 = const_cast<double*>(d2);
    for(int i = 0; i < 10; i++){
        double* p1 = const_cast<double*>(d1+i);
        p1[0] = i;
        double* p2 = const_cast<double*>(d2+i);
        p2[0] = i+1;
    }
    for(int i = 0; i < 10; i++){
        cout << d1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 10; i++){
        cout << d2[i] << " ";
    }
    cout << endl;
    return 0;
}