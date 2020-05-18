#include "Video.h"
using namespace std;

int main(){
    Video v;
    v.initialize();
    v.name = "Flipped";
    v.cost = 8;
    v.print();
    
    return 0;
}