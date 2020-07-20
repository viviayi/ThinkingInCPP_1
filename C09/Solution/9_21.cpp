#include <iostream>
#include "../require.h"
using namespace std;

#define IFOPEN(fs, filename) ifstream fs(filename);

int main(){
    IFOPEN(in, "9_21.cpp");
    assure(in, "9_21.cpp");
}