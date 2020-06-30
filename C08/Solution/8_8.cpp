#include <iostream>
using namespace std;

const long l1[] = {111, 222};
const long* l2 = l1;

int main(){
    cout << *l2 << endl;
    l2++;
    cout << *l2 << endl;    
}