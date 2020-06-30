#include <iostream>
using namespace std;

class bird{
public:
    void fly(){cout << "fly" << endl;};
};

class rock{};

int main(){
    rock r;
    void* p = &r;
    bird* bp = (bird*)p;
    //bird* bp = p;
    bp->fly();
}