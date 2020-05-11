#include <iostream>
using namespace std;

float func1(char); // 函数
float (*func2(int))(char);  // 返回值为函数指针的函数 
float (*fp)(char); // 函数指针

int main(){
    func1('a');
    fp = &func1;
    func2(1);
}

float func1(char c){
    cout << "Called function one!" << endl;
    return (float)c;
}
float (*func2(int i))(char c){
    cout << "Called functione two!" << endl;
    return fp;
}