#include <iostream>
using namespace std;

const int j = 10;
const int* const i = &j;

int main(){
    cout << *i << endl;
    //! i++;
    //! (*i)++;
}