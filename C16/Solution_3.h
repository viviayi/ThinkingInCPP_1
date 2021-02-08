#ifndef TPSTASH_H
#define TPSTASH_H
#include <cstring>
#include <iostream>

template<class T, int incr = 10>
class PStash{
    int quantity; // Number of storage spaces
    int next; // Next empty space
    T** storage;
    void inflate(int increase = incr);
    int callscount = 1;
public:
    PStash() : quantity(0), next(0), storage(0), callscount(1) {}
    ~PStash();
    int add(T* element);
    T* operator[](int index) const; // Fetch
    // Remove the reference from this PStash:
    T* remove(int index);
    // Number of elements in Stash:
    int count() const { return next; }
};

template<class T, int incr>
int PStash<T, incr>::add(T* element){
    if(next >= quantity)
        inflate(incr);
    storage[next++] = element;
    return(next - 1); // Index number
}

// Ownership of remaining pointers:
template<class T, int incr>
PStash<T, incr>::~PStash(){
    for(int i = 0; i < next; i++){
        delete storage[i]; // Null pointers OK
        storage[i] = 0; // Just to be safe
    }
    delete []storage;
}

template<class T, int incr>
T* PStash<T, incr>::operator[](int index) const{
    require(index >= 0, "PStash::operator[] index negative");
    if(index >= next)
        return 0; // To indicate the end
    require(storage[index] != 0, "PStash::operator[] returned null pointer");
    // Produce pointer to desired element:
    return storage[index];
}

template<class T, int incr>
T* PStash<T, incr>::remove(int index){
    // operator[] performs validity checks:
    T* v = operator[](index);
    if(v != 0) storage[index] = 0;
    return v;
}

template<class T, int incr>
void PStash<T, incr>::inflate(int increase){
    int inc_val = callscount * increase;
    const int psz = sizeof(T*);
    T** st = new T*[quantity + callscount];
    memset(st, 0, (quantity + callscount) * psz);
    memcpy(st, storage, quantity * psz);
    quantity += callscount;
    delete []storage;// Old storage
    storage = st; // Point to new memory
    std::cout << "callscount: " << callscount++ << std::endl;
}

#endif // TPSTASH_H
