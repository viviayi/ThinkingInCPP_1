#include "10_34.h"
extern Mirror& m3();

Mirror& m4(){
    static Mirror m4(m3());
    return m4;
}