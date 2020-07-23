#include <iostream>
using namespace std;
class A{
    int i;
public:
    A(){i = 0;}
    ~A(){
        cout << "Destruction called!" << endl;
        exit(0);
    }
};

A a;

int main(){
    return 0;
}