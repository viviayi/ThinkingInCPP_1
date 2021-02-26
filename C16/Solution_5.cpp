// #include "../../require.h"
#include <iostream>
using namespace std;

template<class T>
T fibonacci(T n){
    const int sz = 100;
    // require(n < sz);
    static T f[sz]; // Initialized to zero
    f[0] = f[1] = T(1);
    // Scan for unfilled array elements:
    int i;
    for(i = 0; i < sz; i++)
        if(f[i] == 0) break;
    // i 移到了f中第一个不为0的位置，之前生成过的都不会再次生成
    while(i <= n){
        f[i] = f[i-1] + f[i-2];
        i++;
    }
    return f[int(n)];
}

int main(){
    cout << fibonacci(5) << endl;
    cout << fibonacci(6.0) << endl;
    return 0;
}
