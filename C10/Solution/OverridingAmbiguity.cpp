#include "NamespaceMath.h"
#include "NamespaceOverriding2.h"
void s(){
    //using namespace Math;
    //using namespace Calculation;
    
    // divide(1, 2);// 报错, 两个名字空间都有定义
    //Math::divide(1,2);
    using namespace Math;
    divide(1, 2);
}
int main(){} ///:~