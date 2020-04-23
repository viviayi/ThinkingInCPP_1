// Create a float vector and input 25 float number
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> v;
    for(int i = 0; i < 25; i++){
        cout << "Input a float number: ";
        float number;
        cin >> number;
        v.push_back(number);
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}