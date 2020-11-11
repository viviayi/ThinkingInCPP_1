class Orange{};
class Pear{};

class Apple{
public:
    operator Orange() const;
    operator Pear() const;
};

// Overloaded eat();
void eat(Orange);
void eat(Pear);

int main(){
    Apple c;
    //! eat(c);
    // 有多个 重载函数 "eat" 实例与参数列表匹配
    // Error: Applt -> Orange or Apple -> Pear ???
} ///:~