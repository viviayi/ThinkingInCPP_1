#include <iostream>
using namespace std;

class Simple{
    int i;
public:
    Simple(int ii = 0) : i(ii) {}
    const Simple operator++(int x){
        Simple out(i);
        i++;
        cout << "dummy constant: " << x << endl;
        return out;
    }
    const Simple operator--(int x){
        Simple out(i);
        i--;
        cout << "dummy constant: " << x << endl;
        return out;
    }
};

int main(){
    Simple s;
    s++;
    s--;
}
