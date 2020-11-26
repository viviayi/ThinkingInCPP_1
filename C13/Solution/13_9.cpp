/*
Create an object of class Counted (from Exercise 1) using new, cast the
resulting pointer to a void*, and delete that. Explain the results.
*/
#include <iostream>
using namespace std;

class Counted{
    int id;
    static int count;
public:
    Counted():id(count++){
        cout << id << " it's being created" << endl;
    }
    ~Counted(){
        cout << id << " it's being destroyed" << endl;
    }
};

int Counted::count = 0;

int main(){
    Counted* cp = new Counted;
    void* cpv = (void*)cp;
    delete cpv; //warning: deleting 'void*' is undefined
    cpv = 0;
    cp = 0;
}