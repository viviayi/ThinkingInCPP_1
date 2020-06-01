#include <string>
#include <iostream>
using namespace std;

struct Lib{
    string a, b, c;
    // string s[3];
};

class Libc{
    string a, b, c;
    string s[3];
public:
    void seta();
    void geta();
    void setb();
    void getb();
    void setc();
    void getc();
};

void Libc::seta(){
    a = "It's a";
    s[0] = "It's a";
}
void Libc::setb(){
    b = "It's b";
    s[1] = "It's b";
}
void Libc::setc(){
    c = "It's c";
    s[2] = "It's c";
}

void Libc::geta(){
    cout << a << endl;
    cout << s[0] << endl;
}

void Libc::getb(){
    cout << b << endl;
    cout << s[1] << endl;
}

void Libc::getc(){
    cout << c << endl;
    cout << s[2] << endl;
}

int main(){
    Lib x;
    x.a = "It's a";
    x.b = "It's b";
    x.c = "It's c";
    cout << x.a << '\n' << x.b << '\n' << x.c << endl;
    
    Libc xc;
    xc.seta();
    xc.geta();
    xc.setb();
    xc.getb();
    xc.setc();
    xc.getc();
}