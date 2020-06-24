// The "mutable" keyword

class Z{
    int i;
    mutable int j; // const 函数中也可以被改变
public:
    Z();
    void f() const;
};

Z::Z() : i(0), j(0){}

void Z::f() const{
    //! i++;
    j++; // OK: mutable
}

int main(){
    const Z zz;
    zz.f();
} ///:~