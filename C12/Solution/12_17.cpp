#include <iostream>
using namespace std;

class Bird{
    string name;
    static int i;
    int cal = 0;
public:
    Bird(int ii = 0){
        cal = ii;
        i = ii;
        name = "Bird #" + to_string(i);
    }
    Bird(const Bird& b){
        name = b.name;
        i = b.i;
        cal = b.cal;
        // cout << "Copy constructor called." << endl;
    }
    friend ostream& operator<<(ostream&, const Bird&);
    Bird& operator=(const Bird& b){
        // cout << "Operator= called." << endl;
        if(&b != this){
            name = b.name;
            i = b.i;
            cal = b.cal;
        }
        return *this;
    }
    friend Bird operator+(const Bird left, const Bird right);
};

int Bird::i = 0;

ostream& operator<<(ostream& os, const Bird& b){
    os << b.name << endl;
    return os;
}

Bird operator+(const Bird left, const Bird right){
    return Bird(left.cal + right.cal);
}

class BirdHouse{
    Bird b;
    Bird* bp;
    Bird& br; // 引用初始化用:
public:
    BirdHouse(Bird& b1, Bird& b2, Bird& b3): b(b1), bp(&b2), br(b3){}
    BirdHouse(const BirdHouse& bh) : b(bh.b), bp(bh.bp), br(bh.br){}
    friend ostream& operator<<(ostream&, BirdHouse&);
    BirdHouse& operator=(const BirdHouse& bh){
        if(&bh != this){
            b = bh.b;
            bp = bh.bp;
            br = bh.br;
        }
        return *this;
    }
    ~BirdHouse(){
        delete bp;
    }
};

ostream& operator<<(ostream& os, BirdHouse& bh){
    os << bh.b << *bh.bp << bh.br;
    return os;
}

int main(){
    Bird b1(1), b2(2), b3(3);
    b2 = b1 + b2;
    BirdHouse bh1(b1, b2, b3);
    cout << bh1 << endl;
    BirdHouse bh2 = bh1;
    BirdHouse bh3(b1, b1, b1);
    bh2 = bh3;
    cout << bh2 << endl;    
    cout << bh3 << endl;
}