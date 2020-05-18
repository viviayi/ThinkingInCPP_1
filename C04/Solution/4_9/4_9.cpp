// C++ 编译器不报错，正常输出
#include "4_9.h"
#include <iostream>
using namespace  std;

void f(float i){
    cout << i << endl;
}

int main(){
    f(float(0));
    f(1);
}

