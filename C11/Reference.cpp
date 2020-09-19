// Simple C++ references

int* f(int* x){
    (*x)++;
    return x; // safe, x is outside this scope
}

int& g(int& x){
    x++; // Same effect as in f()
    return x;
}

int& h(){
    int q;
    //! return q; // Error
    static int x;
    return x;
}

int main(){
    int a = 0;
    f(&a); // Ugly (but explicit) 缺乏使用引用的方便性和清晰性，但很清楚这是传递一个地址
    g(a); // Clean (but hidden) 地址通过引用被传递，但表面上看不出来
} ///:~