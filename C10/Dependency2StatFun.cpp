#include "Dependency2StatFun.h"
#include "Dependency1StatFun.h"
Dependency2& d2(){
    static Dependency2 dep2(d1());
    return dep2;
} ///:~