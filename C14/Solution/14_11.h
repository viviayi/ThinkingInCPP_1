/**
Create a class called Asteroid. Use inheritance to specialize the PStash
class in Chapter 13 (PStash.h & PStash.cpp) so that it accepts and returns
Asteroid pointers. Also modify PStashTest.cpp to test your classes.
Change the class so PStash is a member object.
**/
#ifndef A_STASH_H
#define A_STASH_H

#include "PStash.h"

class Asteroid {
public:
    Asteroid() : data(0) {}
    Asteroid(int a) : data(a) {}
private:
    int data;
};


class AStash : public PStash {
public:
    AStash() : PStash() {}
    int add(Asteroid* element) { return PStash::add( (void*)(element) ); }
    Asteroid* operator[](int i) const { return (Asteroid*) ( PStash::operator[](i) ); }
    Asteroid* remove(int i) { return (Asteroid*) ( PStash::remove(i) ); }
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
