// Create a float vector and caculate its square
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> v;
    cout << "Input 5 float number: ";
    float number;
    for(int i = 0; i < 5; i++){
        cin >> number;
        v.push_back(number);
    }
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
        v[i] = v[i] * v[i];
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    
}