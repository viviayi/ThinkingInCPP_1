class Three{
    int i;
public:
    Three(int ii =0, int = 0) : i(ii){}
};

class Four{
    int x;
public:
    Four(int xx) : x(xx) {}
    operator Three() const { return Three(x); }
    operator int() const{ return x; } // 实现从用户定义类型向内置类型转换
};

void g(Three){}

void f(int){}

int main(){
    Four four(1);
    g(four);
    g(1); // Calls Three(1,0)
    f(four);
} ///:~