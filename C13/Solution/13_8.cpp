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
    Counted* cp;
    cp = new Counted[10];
    // delete []cp;
    delete cp; // 只释放了数组首个对象
    cp = 0;
}