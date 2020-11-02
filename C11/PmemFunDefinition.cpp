class Simple2{
public:
    int f(float) const{
        return 1;
    }
};

int (Simple2::*fp)(float) const; // 定义类Simple2的成员函数指针
int (Simple2::*fp2)(float) const = &Simple2::f; // 定义并初始化类Simple2的成员函数指针
int main(){
    fp = &Simple2::f;
} ///:~