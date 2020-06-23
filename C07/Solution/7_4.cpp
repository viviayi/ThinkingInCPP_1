#include <iostream>
using namespace std;

class Test{
public:
/*
    void print();
    void print(int i1);
    void print(int i1, int i2);
    void print(int i1, int i2, int i3);
*/
    void print(int i1 = 1, int i2 = 2, int i3 = 3, int i4 = 4);
};
/*
void Test::print(){}

void Test::print(int i1){
    cout << i1 << endl;
}

void Test::print(int i1, int i2){
    cout << i1 << endl;
    cout << i2 << endl;
}

void Test::print(int i1, int i2, int i3){
    cout << i1 << endl;
    cout << i2 << endl;
    cout << i3 << endl;
}
*/
void Test::print(int i1, int i2, int i3, int i4){
    cout << i1 << endl;
    cout << i2 << endl;
    cout << i3 << endl;
    cout << i4 << endl;
}

int main(){
    Test t;
    t.print();
    t.print(1);
    t.print(1, 2);
    t.print(1, 2, 3);
    t.print(1, 2, 3, 4);
}