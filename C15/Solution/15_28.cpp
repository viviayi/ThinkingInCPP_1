class X{
public:
    virtual void f(){}
};

class Y : public X{
public:
    virtual void f(){}
};

int main(){
    X x;
    x.f();
    Y y;
    y.f();
    return 0;
}

/*
// 汇编语言并没有构造函数
// 因为没有数据成员，无需进行初始化操作，所以没有创建默认构造函数，编译器也无需调用
X::f():
        push    rbp
        mov     rbp, rsp
        mov     QWORD PTR [rbp-8], rdi
        nop
        pop     rbp
        ret
Y::f():
        push    rbp
        mov     rbp, rsp
        mov     QWORD PTR [rbp-8], rdi
        nop
        pop     rbp
        ret
main:
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
        mov     eax, OFFSET FLAT:vtable for X+16
        mov     QWORD PTR [rbp-8], rax
        lea     rax, [rbp-8]
        mov     rdi, rax
        call    X::f()
        mov     eax, OFFSET FLAT:vtable for Y+16
        mov     QWORD PTR [rbp-16], rax
        lea     rax, [rbp-16]
        mov     rdi, rax
        call    Y::f()
        mov     eax, 0
        leave
        ret
vtable for Y:
        .quad   0
        .quad   typeinfo for Y
        .quad   Y::f()
vtable for X:
        .quad   0
        .quad   typeinfo for X
        .quad   X::f()
typeinfo for Y:
        .quad   vtable for __cxxabiv1::__si_class_type_info+16
        .quad   typeinfo name for Y
        .quad   typeinfo for X
typeinfo name for Y:
        .string "1Y"
typeinfo for X:
        .quad   vtable for __cxxabiv1::__class_type_info+16
        .quad   typeinfo name for X
typeinfo name for X:
        .string "1X"
*/