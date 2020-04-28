// Demonstration of bit manipulation
#include <iostream>
using namespace std;

void printBinary(const unsigned char val);
//const修饰的函数参数是指针时,代表在函数体内不能修改该指针所指的内容，起到保护作用

#define PR(STR, EXPR) \
  cout << STR; printBinary(EXPR); cout << endl;

unsigned char rol(unsigned char val){
    int highbit;
    if(val & 0x80){ // 0x80 is the high bit only
        highbit = 1;
    }
    else{
        highbit = 0;
    }
    // Left shift (bottom bit becomes 0)
    val <<= 1;
    // Rotate the high bit onto the bottom:
    val |= highbit;
    return val;
}

unsigned char ror(unsigned char val){
    int lowbit;
    if(val & 1){ // check the low bit
        lowbit = 1;
    }
    else{
        lowbit = 0;
    }
    // Right shift by one position
    val >>= 1;
    // Rotate the low bit onto the top:
    val |= (lowbit << 7);
    return val;
}

void printBinary(const unsigned char val){
    for(int i = 7; i >= 0; i--){
        // 1 << i 产生00000001、00000010...
        // 和val按位与，可以判断每一位是0或1
        if(val & (1 << i)){
            cout << "1";
        }
        else{
            cout << "0";
        }
    }
}

int main(){
    unsigned int getval;
    unsigned char a,b;
    cout << "Enter a number between 0 and 255: ";
    cin >> getval;// cin 以另一种方式把第一个数字看做是一个字符
    a = getval; // 将getval转换为单独的字节
    PR("a in binary: ", a);
    cout << "Enter a number between 0 and 255: ";
    cin >> getval;
    b = getval;
    PR("b in binary: ", b);
    PR("a | b = ", a | b);
    PR("a & b = ", a & b);
    PR("a ^ b = ", a ^ b);
    PR("~a = ", ~a);
    PR("~a = ", ~b);
    PR("rotate left a: ", rol(a));
    PR("rotate right a: ", ror(a));

    unsigned char c = 0x5A;
    PR("c in binary: ", c);
    PR("rotate left c: ", rol(c));
    PR("rotate right c: ", ror(c));
    a |= c;
    PR("a |= c; a = ", a);
    b &= c;
    PR("b &= c; b = ", b);
    b ^= a;
    PR("b ^= a; b = ", b);
}

