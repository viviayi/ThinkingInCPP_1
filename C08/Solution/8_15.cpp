// Constant retrun by value
// Result cannot be used as an lvalue
class X
{
private:
    int i;
public:
    X(int ii = 0);
    void modify();
};

X::X(int ii)
{
    i = ii;
}

void X::modify(){
    i++;
}

X f5(){
    return X();
}

const X f6(){
    return X();
}

void f7(X& x){ // Pass by non-const reference
    x.modify();
}

int main(){
    f5() = X(1); // non-const retrun value, 返回的对象可以作为左值
    f5().modify();
    
    //error: cannot bind non-const lvalue reference of type 'X&' to an rvalue of type 'X'
    //! f7(f5()); // Causes warning  // 编译器需要创建临时变量保存f5()，但是f7又使用了变量地址，且不是const，则允许改变，临时对象后面会丢失，因此出错
    
    // Causes compile-time errors:
    // error: passing 'const X' as 'this' argument discards qualifiers
    //! f6() = X(1); // 返回的对象是const不能作为左值

    // error: passing 'const X' as 'this' argument discards qualifiers
    //! f6().modify();

    //error: cannot bind non-const lvalue reference of type 'X&' to an rvalue of type 'const X'
    //! f7(f6());
} ///:~