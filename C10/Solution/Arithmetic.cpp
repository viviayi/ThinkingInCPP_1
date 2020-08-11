#include "NamespaceInt.h"
void arithmetic(){
    using namespace Int;
    Integer x;
    x.setSign(positive);
}
int main(){
    //! Integer x_main; // 在函数arithmetic中使用using namespace Int，在main中无效
} ///:~