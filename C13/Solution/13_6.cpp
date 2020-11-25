#include <iostream>
#include "PStash.h"
using namespace std;

class Counted{
    int id;
    static int count;
public:
    Counted():id(count++){
        cout << id << " it's being created" << endl;
    }

    void f(){
        cout << id;
    }

    ~Counted(){
        cout << id << " it's being destroyed" << endl;
    }
    friend ostream& operator<<(ostream& out, const Counted& c);
};

int Counted::count = 0;
ostream& operator<<(ostream& out, const Counted& c){
    out << c.id;
    return out;
}

int main(){
    PStash countStash;
    for(int i = 0; i < 10; i++){
        countStash.add(new Counted);
    }
    for(int j = 0; j < countStash.count(); j++){
        ((Counted*)countStash[j])->f();
    }
    cout << endl;
    for(int j = 0; j < countStash.count(); j++)
    {
        delete (Counted*)countStash.remove(j);
    }
    return 0;
}