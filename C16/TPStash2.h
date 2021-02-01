// Templatized PStash with nested iterator
#ifndef TPSTASH2_H
#define TPSTASH2_H
#include "../require.h"
#include <cstdlib>

template<class T, int incr = 20>
class PStash{
    int quantity;
    int next;
    T** storage;
    void inflate(int increase = incr);
public:
    PStash() : quantity(0), storage(0), next(0) {}
    ~PStash();
    int add(T* element);
    T* operator[](int index) const;
    T* remove(int index);
    int count() const{ return next; }
    // Nested iterator class 
    class iterator;
    friend class iterator;
    class iterator{
        PStash& ps;
        int index;
    public:
        iterator(PStash& pStash) : ps(pStash), index(0){}
        // To create the end sential:
        iterator(PStash& pStash, bool) : ps(pStash), index(ps.next) {}
        // Copy-constructor:
        iterator(const iterator& rv) : ps(rv.ps), index(rv.index){}
        iterator& operator=(const iterator& rv){
            ps = rv.ps;
            index = rv.index;
            return *this;
        }
        iterator& operator++(){
            require(++index <= ps.next, "PStash::iterator::opreator++ moves index out of bounds");
            return *this;
        }
        iterator& operator++(int){
            return operator++();
        }
        iterator& operator--(){
            require(--index >= 0, "PStash::iterator::opreator-- moves index out of bounds");
            return *this;
        }
        iterator& operator--(int){
            return operator--();
        }
        // Jump iterator forward or backward:
        iterator& operator+=(int amount){
            require(index + amount <  ps.next && index + amount >= 0,
                    "PStash::iterator::operator+= attempt to index out of bounds");
            index += amout;
            return *this;
        }
        iterator& operator-=(int amount){
            require(index - amount <  ps.next && index - amount >= 0,
                    "PStash::iterator::operator-= attempt to index out of bounds");
            index -= amout;
            return *this;
        }
        // Create a new iterator
    };
};

#endif // TPSTASH2_H ///:~