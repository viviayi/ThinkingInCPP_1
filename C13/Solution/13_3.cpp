#include "PStash.h"
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
    PStash countStash;
    countStash.add(new Counted);
    delete (Counted*)countStash.remove(0); // 若不进行delete，会打印PStash not clean up
}