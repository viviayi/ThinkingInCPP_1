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
    Counted c;
    Counted* cp = new Counted;
    delete cp;
    cp = 0;
    cp = new Counted[10];
    delete []cp;
    cp = 0;
}