// Static members & loacl classes
#include <iostream>
using namespace std;

// Nested class CAN have static data members:
class Outer{
    class Inner{
        static int i; // OK
    };
};

int Outer::Inner::i = 47;

// Local class cannot have static data members:
void f(){
    class Local{
    public:
        //! static int i; // Error
    } x;
}

int main() {
    Outer x; 
    f();
} ///:~