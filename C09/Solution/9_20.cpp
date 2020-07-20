#include <iostream>
#include "../require.h"
using namespace std;

int main(int argc, char* argv[]){
    requireArgs(argc, 2);
    require((atoi(argv[1])>=5 && atoi(argv[1])<=10) ,"first arguments must between 5 and 10d");
    cout << argv[1] << " " << argv[2] << endl;
    ifstream in(argv[2]);
    assure(in, argv[2]);
    return 0;
}