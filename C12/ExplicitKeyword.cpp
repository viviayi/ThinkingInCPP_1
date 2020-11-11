// Using the "explicit" keyword
class One{
public:
    One(){}
};

class Two{
public:
    explicit Two(const One&){} // 构造函数显示化，不能被隐式调用
};

void f(Two){}

int main(){
    One one;
    //! f(one); // No auto conversion allowed
    f(Two(one)); // OK--user preforms conversion
} ///:~