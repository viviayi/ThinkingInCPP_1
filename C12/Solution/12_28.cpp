#include <iostream>
using namespace std;

class Orange{};

class Apple{
public:
    explicit Apple(Orange){}
};

void f(Apple){}

int main(){
    Orange o;
    f(Apple(o));
}