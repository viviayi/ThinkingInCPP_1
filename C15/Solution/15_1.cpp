#include <iostream>
using namespace std;

class Shape{
public:
    virtual void draw() {
        cout << "Shape::draw()\n";
    }
    virtual ~Shape() {
        cout << "Shape::~Shape()\n";
    }
};

class Circle : public Shape{
public:
    void draw() {
        cout << "Circle::draw()\n";
    }
    ~Circle() {
        cout << "Circle::~Circle()\n";
    }
};

class Square : public Shape{
public:
    void draw() {
        cout << "Square::draw()\n";
    }
    ~Square() {
        cout << "Square::~Square()\n";
    }
};

class Triangle : public Shape{
public:
    void draw() {
        cout << "Triangle::draw()\n";
    }
    ~Triangle() {
        cout << "Triangle::~Triangle()\n";
    }
};

int main(){
    Shape s1;
    Circle c2;
    Square s3;
    Triangle t4;
    Shape* sp[] = {&s1, &c2, &s3, &t4}; // upcasting
    for(int i = 0; i < sizeof(sp)/sizeof(*sp);i++)
        sp[i]->draw();
    return 0;
}