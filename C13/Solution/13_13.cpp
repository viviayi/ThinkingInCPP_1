// Constructor isn't called if new fails
#include <iostream>
#include <new> // bad_alloc definition
using namespace std;

class NoMemory{
public:
    NoMemory(){
        cout << "NoMemory::NoMemory()" << endl;
    }
    void* operator new(size_t sz) throw(bad_alloc){
        void* iPtr = new int[1000];
        if (!iPtr){
            cout << "NoMemory::operator new" << endl;
            throw bad_alloc();
        }
    return iPtr;
    }
};
int main(){
    NoMemory* nm = 0;
    try{
        while(1){
            nm = new NoMemory;
        }
    } catch(bad_alloc){
        cerr << "Out of memory exception" << endl;
    }
    cout << "nm = " << nm << endl;
    return 0;
} ///:~