/**
Inherit a class StringVector from vector<void*> and redefine the push_back( )
and operator[] member functions to accept and produce string*.
What happens if you try to push_back( ) a void*?
**/

#include <vector>
#include <iostream>
using namespace std;

class StringVector : public vector<void*>{
    vector<string*> vs;
public:
    StringVector() : vector() {}
    void push_back(string* s){
        vs.push_back(s);
    }
    string* operator[](size_t index){
        return vs[index];
    }
};

int main(){
    StringVector v;
    string s = "test";
    v.push_back(&s);
    string *sp = v[0];
    cout << *sp << endl;
    void* vp = (void*)&s;
    // v.push_back(vp); 
    // error: invalid conversion from 'void*' to 'std::__cxx11::string*'
    // {aka 'std::__cxx11::basic_string<char>*'} [-fpermissive]
}