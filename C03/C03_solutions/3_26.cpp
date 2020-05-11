#include <iostream>
using namespace std;

void func1(void* arr, int size, int value){
    int* p = static_cast<int*>(arr); // 转回int类型指针
    for(int i = 0; i < size; i++){
        *(p+i) = value;
    }
}

int main(){
    int a[10];
    void* p = static_cast<void*>(a);
    func1(p, 5, 1);
    for(int i = 0; i < 10; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}