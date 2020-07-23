#include <iostream>
using namespace std;

class Monitor{
    static int count;
public:
    void print() const{
        cout << count << endl;
    }
    void incident(){
        count++;
    }
};

int Monitor::count = 0;

void fun(){
    static Monitor m;
    m.incident();
    m.print();
}

int main(){
    for(int i = 0; i < 5; i++)
        fun();
}