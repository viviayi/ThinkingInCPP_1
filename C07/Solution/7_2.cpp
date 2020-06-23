#include <iostream>
using namespace std;

class Message{
    string s;
public:
    Message(string ss="");
    void print();
    void print(string ss);
};

Message::Message(string ss){
    s = ss;
}

void Message::print(){
    cout << s << endl;
}

void Message::print(string ss){
    cout << ss << s << endl;
}

int main(){
    Message m1, m2("m2");
    m2.print();
    m1.print("m1");
}