#include <iostream>
using namespace std;

int fibonacci(bool flag = false){
    static int first_num = 0; // 函数内部静态变量，只初始化一次
    static int second_num = 1;
    static int current_num;
    if(flag){
        first_num = 0;
        second_num = 1;
    }
    current_num = first_num + second_num;
    first_num = second_num;
    second_num = current_num;
    return current_num;
}

int main() {
    for (int i = 0; i < 15; i++) {
        cout << fibonacci() << endl;
        if ( i == 8)
            cout << fibonacci(true) << endl;
    }
    return 0;
}