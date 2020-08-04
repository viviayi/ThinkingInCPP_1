#include "10_16_2.h"

namespace My = MyNamespace;

void fun(){
    using namespace My;
    func1();
    func4();
}

int main(){
    fun();
}