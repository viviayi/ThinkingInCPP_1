#ifndef MEM2_H
#define MEM2_H
typedef unsigned char byte;

class Mem
{
private:
    byte* mem;
    byte* pre_mem;
    int size;
public:
    Mem(int sz = 0);
    ~Mem();
    int msize();
    byte* pointer(int minSize = 0);
    void ensureMinSize(int minSize);
    bool moved();
};
#endif // MEM2_H