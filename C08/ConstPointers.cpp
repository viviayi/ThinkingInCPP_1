const int* u; // [1] u是一个指向const int的指针
int const* v; // [2] 和[1]意义相同

int d = 1;
int* const w = &d; // [3] w是一个指向int的const指针，指针地址不可改变，但地址内的数值可以改变

const int* const x = &d; // [4] x是一个指向const int的const 指针，地址和值都不可改变
int const* const x2 = &d; // [5] 意义同[4]

int main(){
    const int a=1;
    u = &a; v = &a;
    
    *w = 2;

    // *x = 2; // 报错
}