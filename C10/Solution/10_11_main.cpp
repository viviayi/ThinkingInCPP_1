#include "10_11.h"
using namespace std;

int main(){
    extern myClass mc;
    mc.print();
    mc.setData(5);
    mc.print();
}