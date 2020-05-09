#include <iostream>
using namespace std;

enum Color{
    red,
    green = 3,
    blue
};

int main(){
    for(int i = 0; i < 5; i++){
        switch (i)
        {
        case red:
            cout << i << endl;
            break;
        case green:
            cout << i << endl;
            break;
        case blue:
            cout << i << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}