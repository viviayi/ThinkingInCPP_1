/**
Create a class with a placement new with a second argument of type string.
The class should contain a static vector<string> where the second new argument
is stored. The placement new should allocate storage as normal. In main( ),
make calls to your placement new with string arguments that describe the
calls (you may want to use the preprocessor’s __FILE__ and __LINE__ macros).
**/
#include <new>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class MyClass{
    static vector<string> s;
public:
    void* operator new(size_t, string ss){
        s.push_back(ss);
        return ::new string;
    }
    
    static void print(){
        for(int i = 0; i < s.size(); i++){
            cout << s[i] << endl;
        }
    }
};

vector<string> MyClass::s;

int main(){
    MyClass* mp = new(to_string(__LINE__)) MyClass;
    mp->print();
    delete mp;
    mp = 0;
    return 0;
}