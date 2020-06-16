#include <iostream>
using namespace std;

class Test{
public:
    Test();
    ~Test();
};

Test::Test(){
    cout << "Constructor called." << endl;
}

Test::~Test(){
    cout << "Deconstructor called." << endl;
}

int main(){
    for(int i=1; i < 10; i++){
        Test t;
        cout << i << endl;
        if(i == 5)
            goto THERE;
    }
    THERE:
    cout << "goto called" << endl;
}