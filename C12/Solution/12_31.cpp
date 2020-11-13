class Orange{}; // Class declaration

class Apple{
public:
    Orange convert(){
        return Orange();
    }
};


void f(Orange){}

int main(){
    Apple a;
    f(a.convert()); // 应用多个用户定义的从 "Apple" 到 "Orange" 的转换
} ///:~