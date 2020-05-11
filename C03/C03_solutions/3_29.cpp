/*
C/C++的浮点数据类型有float和double两种。
类型float大小为4字节，即32位，内存中的存储方式如下：
符号位（1 bit）指数（8 bit）尾数（23 bit）
类型double大小为8字节，即64位，内存布局如下：
符号位（1 bit）指数（11 bit）尾数（52 bit）
 
符号位决定浮点数的正负，0正1负。
指数和尾数均从浮点数的二进制科学计数形式中获取。
如，十进制浮点数2.5的二进制形式为10.1，转换为科学计数法形式为(1.01)*(10^1)，由此可知指数为1，尾数（即科学计数法的小数部分）为01。
根据浮点数的存储标准（IEEE制定），float类型指数的起始数为127（二进制0111 1111），double类型指数的起始数为1023(二进制011 1111 1111)，在此基础上加指数，得到的就是内存中指数的表示形式。尾数则直接填入，如果空间多余则以0补齐，如果空间不够则0舍1入。所以float和double类型分别表示的2.5如下（二进制）：
符号位      指数               尾数
0           1000 0000          010 0000 0000 0000 0000 0000
0           100 0000 0000      0100 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000
*/
#include <cstdlib>
#include <iostream>
using namespace std;

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
    double d = 2.5;
    unsigned char* cp = 
      reinterpret_cast<unsigned char*>(&d);
    
    for(int i = sizeof(double) - 1; i >= 0; i-=1){
        printBinary(cp[i]);
        cout << " ";
    }
}