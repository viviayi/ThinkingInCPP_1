#include <iostream>
#include <memory.h>
using namespace std;

class X{
    char a[10];
public:
    X(char aa = ' '){
        memset(a,aa,sizeof(a)/sizeof(*a));
    }
    void print(){
        for(int i = 0; i < sizeof(a)/sizeof(*a); i++)
            cout << a[i] << " ";
        cout << endl;
    }
};

int main(){
    X x('a');
    x.print();
}