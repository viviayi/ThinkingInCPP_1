#include <iostream>
using namespace std;

class Integer{
    int i;
public:
    Integer(int ii = 0);
    void print();
};

Integer::Integer(int ii) : i(ii){}
void Integer::print(){
    cout << i << endl;
}

int main(){
    Integer i[100]; // 自动初始化为零
    for(int j = 0; j < 100; j++){
        i[j].print();
    }
} ///:~
