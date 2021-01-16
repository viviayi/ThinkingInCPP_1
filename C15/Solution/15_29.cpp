class X{
public:
    X(){
        f();
    }
    virtual void f(){}
};

class Y : public X{
public:
    Y(){
        f();
    }
    virtual void f(){}
};

int main(){
    Y y;
    y.f();
    X* xp;
    xp = &y;
    xp->f();
    return 0;
}

/*
X::X() [base object constructor]:
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
        mov     QWORD PTR [rbp-8], rdi
        // VPTR被赋值
        mov     edx, OFFSET FLAT:vtable for X+16
        mov     rax, QWORD PTR [rbp-8]
        mov     QWORD PTR [rax], rdx
        mov     rax, QWORD PTR [rbp-8]
        mov     rdi, rax
        // 调用本地版f()
        call    X::f()
        nop
        leave
        ret
X::f():
        push    rbp
        mov     rbp, rsp
        mov     QWORD PTR [rbp-8], rdi
        nop
        pop     rbp
        ret
Y::Y() [base object constructor]:
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
        mov     QWORD PTR [rbp-8], rdi
        mov     rax, QWORD PTR [rbp-8]
        mov     rdi, rax
        call    X::X() [base object constructor] // X构造函数会给VPTR初始化

        // VPTR再次被赋值，得到最终的状态
        mov     edx, OFFSET FLAT:vtable for Y+16
        mov     rax, QWORD PTR [rbp-8]
        mov     QWORD PTR [rax], rdx
        mov     rax, QWORD PTR [rbp-8]
        mov     rdi, rax
        // 调用本地版f()
        call    Y::f()
        nop
        leave
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
        lea     rax, [rbp-16]
        mov     rdi, rax
        call    Y::Y() [complete object constructor]
        lea     rax, [rbp-16]
        mov     rdi, rax
        call    Y::f()
        lea     rax, [rbp-16]
        mov     QWORD PTR [rbp-8], rax

        // 虚机制调用f()
        mov     rax, QWORD PTR [rbp-8]
        mov     rax, QWORD PTR [rax]
        mov     rdx, QWORD PTR [rax]
        mov     rax, QWORD PTR [rbp-8]
        mov     rdi, rax
        call    rdx
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