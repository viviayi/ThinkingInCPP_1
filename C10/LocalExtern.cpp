#include <iostream>

int main(){
    extern int i; // 局部变量声明为extern，实际上是另外的地方已经是全局的
    std::cout << i;
} ///:~
