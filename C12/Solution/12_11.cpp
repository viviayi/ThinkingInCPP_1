#include <iostream>
using namespace std;

class Number{
    double d;
public:
    explicit Number(double dd = 0) : d(dd) {}
    operator double() const{
        cout << "operator double() called" << endl;
        return d;
    }
    const Number operator+(const Number& right) const{
        return Number(d + right.d);
    }
    const Number operator-(const Number& right) const{
        return Number(d - right.d);
    }
    const Number operator*(const Number& right) const{
        return Number(d * right.d);
    }
    const Number operator/(const Number& right) const{
        if(right.d != 0)
        {
            return Number(d / right.d);
        }
        else
        {
            return Number(0);
        }
        
    }
    friend ostream& operator<<(ostream& os, Number n);
};

ostream& operator<<(ostream& os, Number n){
    cout << n.d;
    return os;
}

void f(double d){
    cout << "double: " << d << endl;
}


int main(){
    Number n1(10);
    Number n2(15);
    Number n3 = n1 - n2;
    Number n4 = n1 + n2;
    cout << "+:" << n1+n2 << endl;
    cout << "-:" << n1-n2 << endl;
    cout << "*:" << n1*n2 << endl;
    cout << "/:" << n1/n2 << endl;
    cout << "+-*/:" << (n1+n2-n3)*n2/n4 << endl;
    f(Number(1));
}