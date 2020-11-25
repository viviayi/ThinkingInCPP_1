// Overload global new/delete
#include <cstdio>
#include <cstdlib>
using namespace std;

void* operator new(size_t sz){
    printf("operator new: %d Bytes\n", sz);
    void* m = malloc(sz);
    if(!m) puts("out of memory");
    return m;
}

void operator delete(void* m){
    puts("operator delete");
    free(m);
}

class S{
    int i[100];
public:
    S(){ puts("S::S()"); }
    ~S() { puts("S::~S()"); }
};

int main(){
    puts("creating & destroying an int");
    int* p = new int(47);
    delete p; // 所有的delete也都没有进入重载delete？ 
    puts("creating & destroying an s");
    S* s = new S;
    delete s;
    puts("creating & destroying S[3]");
    S* sa = new S[3]; // 这里没有进入重载new，因为数组？
    delete []sa;
} ///:~