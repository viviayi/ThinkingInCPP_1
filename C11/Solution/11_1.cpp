#include <iostream>

using namespace std;

class bird {};
class rock {};

int main() {

    bird* b;
    rock* r;
    void* v; 
    v = r;
    b = v; //error: invalid conversion from 'void*' to 'bird*'
    return 0;
}