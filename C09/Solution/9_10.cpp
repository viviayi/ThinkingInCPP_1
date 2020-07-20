#include <iostream>
using namespace std;

enum Hue{
    red,
    blue,
    yellow
};

class Color{
    Hue clr;
public:
    inline Color(Hue v = red);
    inline Hue getColor() const;
    inline void setColor(Hue v);
};

inline Color::Color(Hue v){
    setColor(v);
}

inline Hue Color::getColor() const{
    return clr;
}

inline void Color::setColor(Hue v) {
    clr = v;
}

int main(){
    Color clr1;
    cout << clr1.getColor() << endl;
    clr1.setColor(blue);
    cout << clr1.getColor() << endl;
}