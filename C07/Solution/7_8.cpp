// A super-variable
#include <iostream>
using namespace std;

enum Vartype{
        character,
        integer,
        floating_point
    };

class SuperVar{
    #ifndef VARTYPE
    #define VARTYPE
        Vartype vartype;
    #endif // VARTYPE

    union{
        char c;
        int i;
        float f;
    };
public:
    SuperVar(char ch);
    SuperVar(int ii);
    SuperVar(float ff);
    void print(Vartype);
};

SuperVar::SuperVar(char ch){
    #ifdef VARTYPE
        vartype = character;
    #endif
    c = ch;
}

SuperVar::SuperVar(int ii){
    #ifdef VARTYPE
    vartype = integer;
    #endif
    i = ii;
}

SuperVar::SuperVar(float ff){
    #ifdef VARTYPE
    vartype = floating_point;
    #endif
    f = ff;
}

void SuperVar::print(Vartype vartype){
    switch (vartype)
    {
    case character:
        cout << "character: " << c << endl;
        break;
    case integer:
        cout << "integer: " << i << endl;
        break;
    case floating_point:
        cout << "floating_point: " << f << endl;
        break;
    default:
        cout << "wrong type" << endl;
    }
}

int main(){
    SuperVar A('c'), B(12), C(1.44F);
    A.print(character);
    B.print(integer);
    C.print(floating_point);
}