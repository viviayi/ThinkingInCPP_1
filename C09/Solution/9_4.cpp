#include <iostream>
#include "ctime"
using namespace std;

inline int f1(int i){
    return i++;
}

int f2(int i){
    return i++;
}

int main(){
    clock_t t;
    float time1, time2;
    t = clock();
    for(int i = 0; i < 100000000; i++){
        f1(i);
    }
    time1 = static_cast<float>((clock() - t));

    t = clock();
    for(int i = 0; i < 100000000; i++){
        f2(i);
    }
    time2 = static_cast<float>((clock() - t));
    cout << "intline f1() timing: " << time1 << endl; //190
    cout << "f2() timing: " << time2 << endl; //192
}