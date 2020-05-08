#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Input a number: ";
    cin >> x;
    cout << "All prime number: ";
    bool isPrime;
    for(int i = 1; i <= x; i++){
        isPrime = true;
        for(int j = 2; j < i; j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}