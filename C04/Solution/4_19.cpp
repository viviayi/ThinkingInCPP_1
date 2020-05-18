#include <iostream>
using namespace std;

struct External{
    struct Internal{
        int x;
        void print(){
            cout << "Internal x: " << x << endl;
        }
    } data;
    int x;
    void print(){
        cout << "External x: " << x << endl;
    }
};

int main(){
    External e;
    e.x = 1;
    e.data.x = 2;

    e.print();
    e.data.print();
}