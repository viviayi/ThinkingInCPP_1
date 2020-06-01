// Friend allows special access

// Declaration(incomplete type specification)
struct X; // 必须在声明void Y::f(X*)之前，因为要用到。

struct  Y {
    void f(X*); // 必须在声明friend void Y::f(X*);之前，所以前面用的是不完全的声明，
                // 由于这里使用的是地址，而不是对象，所以不会出错
};

struct X  // Definition
{
private:
    int i;
public:
    void initialize();
    friend void g(X*, int); //Global friend, 声明的同时作为友元
    friend void Y::f(X*); //Struct member friend
    friend struct Z; //Entire struct is a friend
    friend void h();
};

void X::initialize(){
    i = 0;
}

void Y::f(X* x){
    x->i = 47;
}

void g(X* x, int i){
    x->i = i;
}

struct Z
{
private:
    int j;
public:
    void initialize();
    void g(X* x);
};

void Z::initialize(){
    j = 99;
}

void Z::g(X* x){
    x->i += j;
}

void h(){
    X x;
    x.i = 100;
}

int main(){
    X x;
    Z z;
    z.g(&x);
} ///:~


