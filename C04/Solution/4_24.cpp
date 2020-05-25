#include <iostream>
using namespace std;

struct Link
{
    int data;
    Link* next;
};

void list(Link* link,int size){
    Link* newLink;
    for(int i = 0; i < size; i++){
        newLink = new Link;
        newLink->data = i;
        newLink->next = 0;
        link->next = newLink;
        link = newLink;
    }
}

void print(Link* list){
    while(list->next){
        cout << list->data << endl;
        list = list->next;
    }
}

int main(){
    Link l;
    l.data = 0;
    list(&l, 10);
    print(&l);
}