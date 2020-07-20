#include <iostream>
#include "../require.h"
using namespace std;

#define DEBUG(x) cout << #x " = " << x << endl

int main(int argc, char* argv[]){
    requireArgs(argc, 1);
    string s = argv[1];
    int sz = s.length();
    for(int i = 0; i < sz; i++){
        cout << i << endl;
        s.pop_back();
        DEBUG(s);
    }
}