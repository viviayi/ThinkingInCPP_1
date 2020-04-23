// Create two float vector and then plus them
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> v1, v2, v3;
    for(int i = 0; i < 5; i++){
        cout << "Input a float number: ";
        float number;
        cin >> number;
        v1.push_back(number);
    }
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << "Input a float number: ";
        float number;
        cin >> number;
        v2.push_back(number);
    }
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < v1.size(); i++){
        v3.push_back(v1[i] + v2[i]);
    }
    for(int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << endl;
}