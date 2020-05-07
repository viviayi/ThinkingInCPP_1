struct Structure1{
    char c;
    int i;
    float f;
    double d;
};

// 使用typedef，在使用struct定义变量时更简洁
typedef struct{
    char c;
    int i;
    float f;
    double d;
} Structure2;

int main(){
    struct Structure1 s1; 
    // Structure1 s1; // C++可以不用typedef，也不用附加struct关键字
    Structure2 s2; // 定义变量时不需要再附加struct关键字
    Structure2* sp = &s2; // struct 指针，使用->访问对象
    s1.c = 'a';
    s1.i = 1;
    s1.f = 3.14;
    s1.d = 0.00093;
    //s2.c = 'a';
    //s2.i = 1;
    //s2.f = 3.14;
    //s2.d = 0.00093; 
    sp->c = 'a';
    sp->i = 1;
    sp->f = 3.14;
    sp->d = 0.00093;
} ///:~