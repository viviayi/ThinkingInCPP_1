#include "10_34.h"
extern Mirror& m1();

Mirror& m2(){
    static Mirror m2(m1());
    return m2;
}