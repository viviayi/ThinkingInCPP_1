#include <iostream>
using namespace std;

class Simple{
public:
    int i;
    Simple();
    Simple(int ii);
    ~Simple();
};

Simple::Simple(){
    cout << "Simple construction is called." << endl;
}

Simple::Simple(int ii){
    i = ii;
    cout << i << endl;
}

Simple::~Simple(){
    cout << i << endl;
}

int main(){
    cout << "Creating Simple object." << endl;
    Simple s;
    s.i = 10;
    cout << s.i << endl;
    cout << "done." << endl;
    cout << "Creating Simple object." << endl;
    Simple s1(8);
    cout << "done." << endl;
}