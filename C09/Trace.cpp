#include <iostream>
using namespace std;

#define TRACE(s) cerr << #s << endl; s // 或者把分号改成逗号

void f(int i){
    i++;
    cout << i << endl;
}

int main(){
    for(int i = 0; i < 100; i++)
        // TRACE(f(i)); // 直接写会报错，第二句s不在for的范围里
        { // 添加大括号即可
            TRACE(f(i)); 
        }
    
}