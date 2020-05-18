// g++ 4_12.cpp 正常生成exe,运行报错assertion failed
// g++ -D NDEBUG 4_12.cpp 运行不报错
#include <iostream>
#include <cassert>
using namespace std;

int main(){
    assert(0);
}