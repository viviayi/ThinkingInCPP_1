#include <iostream>
using namespace std;

typedef struct Structure1
{
    string sr1;
    string sr2;
    int i;
} Structure1;


int main(){
    Structure1 st1;
    st1.i = 0;
    st1.sr1 = "abc";
    st1.sr2 = "def";
    cout << st1.i << " " << st1.sr1 << " " << st1.sr2 << endl;
    Structure1* stPtr = &st1;
    stPtr->i = 1;
    stPtr->sr1 = "changed abc";
    stPtr->sr2 = "changed def";
    cout << stPtr->i << " " << stPtr->sr1 << " " << stPtr->sr2 << endl;
}