// Demonstrates the use of specifiers
#include <iostream>
using namespace std;

int main(){
    char c;
    unsigned char cu;
    int i;
    unsigned int iu;
    short int is;
    short iis; // Same as short int
    unsigned short int isu;
    unsigned short iisu;
    long int il;
    long iil; // Same as long int
    unsigned long int ilu;
    unsigned long iilu;
    float f;
    double d;
    long double ld;
    cout
        << "\n char = " << sizeof(c)
        << "\n unsigned char = " << sizeof(cu)
        << "\n int = " << sizeof(i) 
        << "\n unsigned int = " << sizeof(iu)
        << "\n short = " << sizeof(is)
        << "\n unsigned short = " << sizeof(isu)
        << "\n long = " << sizeof(il)
        << "\n unsigned long = " << sizeof(ilu)
        << "\n float = " << sizeof(f)
        << "\n double = " << sizeof(d)
        << "\n long double = " << sizeof(ld)
        << endl;
} ///:~

/*
早期的操作系统是16位系统， 
int用二字节表示，范围是-32768~32767； 
long用4字节表示，范围是-2147483648~2147483647。
后来发展到32位操作系统， 
int 用4字节表示，与long相同。
目前的操作系统已发展到64位操作系统，但因程序编译工艺的不同，两者表现出不同的差别： 
32位编译系统：int占四字节，与long相同。 
64位编译系统：int占四字节，long占8字节，long数据范围变为：-2^63~2^63-1
*/