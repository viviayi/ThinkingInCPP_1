#include "Video.h"
#include "Stack.h"

using namespace std;

int main()
{
    Stack videoStack;
    videoStack.initialize();
    Video* v;
    for(int i = 0; i < 5; i++){
        videoStack.push(new Video());
    }
    while((v = (Video*)videoStack.pop()) != nullptr){
        v->print();
        delete v;
    }
    videoStack.cleanup();
}