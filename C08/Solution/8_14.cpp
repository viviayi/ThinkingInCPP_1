#include <iostream>
using namespace std;

void f1(float f){
    const float &cf = f;
    cout << cf << endl;
    //! cf++;  //error
}

int main(){
    float f = 3.14;
    f1(f);
}