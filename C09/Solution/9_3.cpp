#include "../require.h"
#include <fstream>
using namespace std;

//#define BAND(x) (((x)>5 && (x)<10) ? (x) : 0)
int x; // 另外取标识符替换y，使++a只运算一次
#define BAND(y) ((x)=y, ((x)>5 && (x)<10) ? (x) : 0)

int main(){
    ofstream out("macro.out");
    assure(out, "macro.out");
    for(int i = 4; i < 11; i++){
        int a = i;
        out << "a = " << a << endl << '\t';
        out << "BAND(++a)=" << BAND(++a) << endl;
        out << "\t a = " << a << endl;
    }
} ///:~