#include <iostream>
using namespace std;

struct Link
{
    int data;
    Link* next;
    void list(int);
    void print();
};

void Link::list(int size){
    Link* newLink;
    newLink = new Link;
    newLink->data = size;
    newLink->next = 0;
    next = newLink;
    if (size != 0){
        next->list(size-1);
    }
}

void Link::print(){
    cout << data << endl;
    if(next != 0){
        next->print();
    }
}

int main(){
    Link l;
    l.data = 0;
    l.list(10);
    l.print();
}