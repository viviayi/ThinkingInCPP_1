#include "10_33.h"
#include <iostream>
using namespace std;

Mirror m5(&m4);

int main(){
    cout << m5.test() << endl;
}