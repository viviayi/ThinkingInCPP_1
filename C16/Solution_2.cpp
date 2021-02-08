#include <iostream>
#include "../TStack2.h"
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
    Stack<Shape> ss;
    ss.push(new Shape());
    ss.push(new Circle());
    ss.push(new Square());
    ss.push(new Triangle());
    Stack<Shape>::iterator it = ss.begin();
    while(it != ss.end()){
        it->draw();
        it++;
    }
    return 0;
}
