/**
Create a program that defines two int arrays, one right after the other.
Index off the end of the first array into the second, and make an assignment.
Print out the second array to see the changes cause by this. Now try defining
a char variable between the first array definition and the second, and repeat
the experiment. You may want to create an array printing function to simplify your coding.
**/
#include <iostream>
using namespace std;

void print(int a[], int size){
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int SIZE = 10;
    int a[SIZE];
    char c = 'c';
    int b[SIZE];
    b[0] = a[10];
    print(a, SIZE);
    print(b, SIZE);
}
