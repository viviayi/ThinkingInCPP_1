#include <iostream>
using namespace std;
double d1[] = {1.1, 2.2};
double* const d2 = d1;

int main(){
    cout << *d2 << " " << *(d2+1) << endl;
    *d2 = 3.3;
    cout << *d2 << " " << *(d2+1) << endl;
}