#include <iostream>
using namespace std;

int main(){
    string buf;
    int value;
    while(true){
        cin >> buf;
        value = 0;
        if(buf == "one"){
            value = 1;
        }
        if(buf == "two"){
            value = 2;
        }
        if(buf == "done"){
            value = 0;
        }
        switch (value)
        {
        case 1:
            cout << "Enter number one!" << endl;
            break;
        case 2:
            cout << "Enter number two!" << endl;
            break;
        case 0:
            cout << "Done!" << endl;
            return 0;
        default:
            break;
        }
    }
    //return 0;
}