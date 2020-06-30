#include <string>
#include <cstring>
#include <iostream>
using namespace std;

class MyString
{
private:
    string s;
public:
    MyString(string s1 = "");
    void print() const;
};

MyString::MyString(string s1)
{
    s = s1;
}

void MyString::print() const{
    cout << s << endl;
}


class StringStack{
    static const int size = 100;
    const MyString* stack[size];
    int index;
public:
    StringStack();
    void push(const MyString* s);
    const MyString* pop();
};

StringStack::StringStack() : index(0){
    memset(stack, 0, size * sizeof(string*));
}

void StringStack::push(const MyString* s){
    if(index < size){
        stack[index++] = s;
    }
}

const MyString* StringStack::pop(){
    if(index > 0){
        const MyString* rv = stack[--index];
        stack[index] = 0;
        return rv;
    }
    return 0;
}

MyString iceCream[] = {
    MyString("pralnes & cream"),
    MyString("fudge ripple"),
    MyString("jamocha almond fudge"),
    MyString("wild mountain blackberry"),
    MyString("raspberry sorbet"),
    MyString("lemon swirl"),
    MyString("rocky road"),
    MyString("deep chocolate fudge")
};

const int iCsz = sizeof(iceCream)/sizeof(*iceCream);

int main(){
    StringStack ss;
    for(int i = 0; i < iCsz; i++){
        ss.push(&iceCream[i]);
    }
    const MyString* cp;
    while((cp = ss.pop()) != 0){
        cp->print();
    }
} ///:~