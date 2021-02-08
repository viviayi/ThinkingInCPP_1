
#include <iostream>
#include <string>
using namespace std;

class Object{
public:
    virtual ~Object() { cout << "Object::~Object\n"; }
};

class Shape{
public:
    virtual void draw() = 0;
    virtual void erase() = 0;
    virtual ~Shape() { cout << "Shape::~Shape\n"; }
};

class Circle : public Shape{
public:
    Circle(){}
    ~Circle() { cout << "Circle::~Circle\n"; }
    void draw() { cout << "Circle::draw\n"; }
    void erase() { cout << "Circle::erase\n"; }
};

class Square : public Shape{
public:
    Square() {}
    ~Square() { cout << "Square::~Square\n"; }
    void draw() { cout << "Square::draw\n"; }
    void erase() { cout << "Square::erase\n"; }
};

class Triangle : public Shape{
public:
    Triangle(){}
    ~Triangle(){ cout << "Triangle::~Triangle\n"; }
    void draw() { cout << "Triangle::draw\n"; }
    void erase() { cout << "Triangle::erase\n"; }
};

class OShape : public Shape, Object{
public:
    ~OShape() { cout << "OShape::~OShape\n"; }
};

class OCircle : public OShape, Circle{
public:
    OCircle(){}
    ~OCircle() { cout << "OCircle::~OCircle\n"; }
    void draw() { cout << "OCircle::draw\n"; }
    void erase() { cout << "OCircle::erase\n"; }
};

class OSquare : public OShape, Square{
public:
    OSquare(){}
    ~OSquare() { cout << "OSquare::~OSquare\n"; }
    void draw() { cout << "OSquare::draw\n"; }
    void erase() { cout << "OSquare::erase\n"; }
};

class OTriangle : public OShape, Triangle{
public:
    OTriangle(){}
    ~OTriangle() { cout << "OTriangle::~OTriangle\n"; }
    void draw() { cout << "OTriangle::draw\n"; }
    void erase() { cout << "OTriangle::erase\n"; }
};

int main(){
    OCircle oc;
    OSquare os;
    OTriangle ot;
    oc.draw();
    os.erase();
    ot.draw();
}
