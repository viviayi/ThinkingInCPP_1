/**
Create a class called Asteroid. Use inheritance to specialize the PStash
class in Chapter 13 (PStash.h & PStash.cpp) so that it accepts and returns
Asteroid pointers. Also modify PStashTest.cpp to test your classes.
Change the class so PStash is a member object.
**/
#ifndef A_STASH_H
#define A_STASH_H

#include <vector>
#include <iostream>

class Asteroid {
    int data;
public:
    Asteroid() : data(0) {}
    Asteroid(int a) : data(a) {}
    friend std::ostream& operator<<(std::ostream& os, const Asteroid& ia);
};

std::ostream& operator<<(std::ostream& os, const Asteroid& ia){
    os << ia.data << " ";
    return os;
}


class AStash : public std::vector<void*> {
public:
    AStash() : vector() {}
    void add(Asteroid* element) { vector::push_back(element); }
    Asteroid* operator[](int i) const { return (Asteroid*) ( vector::operator[](i) ); }
    void remove() { vector::pop_back(); }
    int count() const{ return vector::size(); }
};

/*
class AStash {
    PStash as;
public:
    AStash() : as() {}
    int add(Asteroid* element) { return as.add( (void*)(element) ); }
    Asteroid* operator[](int i) const { return (Asteroid*)( as.operator[](i) ); }
    Asteroid* remove(int i) { return (Asteroid*)( as.remove(i) ); }
    int count() const{ return as.count(); }
};
*/

#endif
