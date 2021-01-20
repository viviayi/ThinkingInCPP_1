#include "../require.h"

int fibonacci(int n){
    const int sz = 100;
    require(n < sz);
    static int f[sz]; // Initialized to zero
    f[0] = f[1] = 1;
    // Scan for unfilled array elements:
    int i;
    for(i = 0; i < sz; i++)
        if(f[i] == 0) break;
    // i 移到了f中第一个不为0的位置，之前生成过的都不会再次生成
    while(i <= n){
        f[i] = f[i-1] + f[i-2];
        i++;
    }
    return f[n];
}