// Handle implementation
#include "Handle.h"
#include "../../require.h"

//Define Handle's implementaion:
struct Handle::Cheshire{
    int i;
    // add new data
    int j;
    int k;
};

void Handle::intialize(){
    smile = new Cheshire;
    smile->i = 0;
    smile->j = 1;
}

void Handle::cleanup(){
    delete smile;
}

int Handle::read(){
    return smile->i + smile->j;
}

void Handle::change(int x){
    smile->i = x;
    smile->j = x;
} ///:~