#include <iostream>
using namespace std;

class SpaceShip{
    int weight;
public:
    void fly() {
        cout << "fly() call\n";
    }
};

class Shuttle : public SpaceShip{
public:
    void land(){
        cout << "land() call\n";
    }
};

int main(){
    Shuttle sh;
    SpaceShip& sp = sh;
    sh.land();

    // 向上类型转换后不再具有Shuttle类的类型，不能调用成员函数。
    // sp.land(); // error: 'class SpaceShip' has no member named 'land'
}