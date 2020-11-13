#include <iostream>
using namespace std;

class Bird{
    string name;
    static int i;
public:
    Bird(int ii = 0){
        i = ii;
        name = "Bird #" + to_string(i);
    }
    Bird(const Bird& b){
        name = b.name;
        i = b.i;
        cout << "Copy constructor called." << endl;
    }
    friend ostream& operator<<(ostream&, const Bird&);
    Bird& operator=(const Bird& b){
        cout << "Operator= called." << endl;
        if(&b != this){
            name = b.name;
            i = b.i;
        }
        return *this;
    }
};

int Bird::i = 0;

ostream& operator<<(ostream& os, const Bird& b){
    os << b.name << endl;
    return os;
}

int main(){
    Bird b1(1);
    Bird b2(2);
    Bird b3;
    b3 = b2;
    Bird b4 = b1;
    cout << b1 << b2 << b3 << b4;
}