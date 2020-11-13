#include <iostream>
using namespace std;

class Simple{
    char c;
public:
    Simple(char cc = 0) : c(cc){}
    friend ostream& operator<<(ostream& os, const Simple& c);
    friend istream& operator>>(istream& os, Simple& c);
};

ostream& operator<<(ostream& os, const Simple& s)
{
    // cout << "overload operator<< called\n";
    os << s.c << endl;
    return os;
}
istream& operator>>(istream& is, Simple& s)
{
    // cout << "overload operator>> called\n";
    is >> s.c;
    return is;
}

int main(){
    Simple a('a');
    Simple b;
    cout << "Input a char: " << endl;
    cin >> b;
    cout << a << b << endl;
}