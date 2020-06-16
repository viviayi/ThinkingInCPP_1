#include <iostream>
using namespace std;

class test
{
public:
    test(int);
    int i;
};

test::test(int ii){
    i = ii;
}

int main(){
    test t1(1);
    cout << t1.i << endl;
}