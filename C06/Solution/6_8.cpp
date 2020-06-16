#include <iostream>
using namespace std;

class Stack
{
private:
    struct Link
    {
        void* data;
        Link* next;
        Link(void* dat, Link* nxt);
        ~Link();
    }* head;
public:
    Stack(/* args */);
    ~Stack();
    void push(void* dat);
    void* peek();
    void* pop();
};

Stack::Link::Link(void* dat, Link* nxt){
    data = dat;
    next = nxt;
}

Stack::Link::~Link(){}

Stack::Stack(/* args */)
{
    head = 0;
}

void Stack::push(void* dat){
    head = new Link(dat, head);
}

void* Stack::peek(){
    return head->data;
}

void* Stack::pop(){
    if(head == 0){
        return 0;
    }
    void* result = head->data;
    Link* oldHead = head;
    head = head->next;
    delete oldHead;
    return result;
}

Stack::~Stack(){}


int main(){

    string a[]={"one", "two", "three", "four", "five"};
    int array_size = sizeof(a)/sizeof(*a);
    
    Stack lines;
    
    for(int i = 0; i < array_size; i++){
        lines.push(new string(a[i]));
    }
    
    string* s;
    while((s = (string*)lines.pop()) != 0){
        cout << *s << endl;
        delete s;
    }

    return 0; 
}