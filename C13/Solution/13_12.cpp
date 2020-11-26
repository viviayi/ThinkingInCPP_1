// Local overloaded new & delete
#include <cstddef> // Size_t
#include <fstream>
#include <iostream>
#include <new>
#include <ctime>
using namespace std;


class Framis{
    enum{ sz = 10 };
    char c[sz]; // To take up space, not used 
    static unsigned char pool[];
    static bool alloc_map[];  // 分配表，指示每个内存空间是否占用
public:
    enum { psize = 100 }; // Frami allowed  设定Framis堆容量
    Framis(){
        // out << "Framis()\n"; 
    }
    ~Framis(){
        // out << "~Framis() ... ";
    }
    void* operator new(size_t) throw(bad_alloc);
    void operator delete(void*);
};
unsigned char Framis::pool[psize * sizeof(Framis)]; // 开辟psize个Framis对象堆内存
bool Framis::alloc_map[psize] = {false}; // 字节数组标志每个内存单元是否被占用
// Size is ignored -- assume a Framis object
void* Framis::operator new(size_t) throw(bad_alloc){
    for(int i = 0; i < psize; i++){
        if(!alloc_map[i]){
            // out << "using block " << i << " ... ";
            alloc_map[i] = true; // Mark it used
            return pool + (i * sizeof(Framis)); // 正确分配内存，返回内存地址
        }
    }
    cout << "out of memory" << endl;  // 内存耗尽时抛出异常
    throw bad_alloc();
}

void Framis::operator delete(void* m){
    if(!m) return; // check for null pointer
    // Assume it was created in the pool
    // Calculate which block number it is:
    unsigned long long block = (unsigned long long)m - (unsigned long long)pool;
    block /= sizeof(Framis);  // 计算对象所在的内存单元
    // out << "freeing block " << block << endl;
    // Mark it free:
    alloc_map[block] = false;  // 内存释放的实质其实就是标志为可用，数据能够被覆盖
}

int main(){
    Framis* f[Framis::psize];
    clock_t t0 = clock();
    for(int i = 0; i < Framis::psize; i++)
        f[i] = new Framis;
    clock_t t1 = clock();
    cout << "local new for framis takes time: " << (double)(t1-t0) / CLOCKS_PER_SEC << endl;
    t0 = clock();
    for(int j = 0; j < Framis::psize; j++)
        delete f[j]; // Delete f[10] OK
    t1 = clock();
    cout << "local delete for framis takes time: " << (double)(t1-t0) / CLOCKS_PER_SEC << endl;

    t0 = clock();
    for(int i = 0; i < Framis::psize; i++)
        f[i] = ::new Framis;
    t1 = clock();
    cout << "global new for framis takes time: " << (double)(t1-t0) / CLOCKS_PER_SEC << endl;
    t0 = clock();
    for(int j = 0; j < Framis::psize; j++)
        ::delete f[j]; // Delete f[10] OK
    t1 = clock();
    cout << "global delete for framis takes time: " << (double)(t1-t0) / CLOCKS_PER_SEC << endl;
} ///:~