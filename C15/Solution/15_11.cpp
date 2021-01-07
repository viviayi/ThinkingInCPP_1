/**
Create an air-traffic control system with base-class Aircraft and
various derived types. Create a Tower class with a vector<Aircraft*>
that sends the appropriate messages to the various aircraft under its control.
**/

#include <iostream>
#include <vector>
using namespace std;

class Aircraft{
    string flight;
    int speed;
public:
    Aircraft(string s = "") : flight(s), speed(0){
        cout << "Aircraft " << flight << " constructed.\n";
    }
    string getFlight() const { return flight; }
    int getSpeed() const{ return speed; }
    virtual void take_off() = 0;
    virtual void speedup(int i = 1){
        speed += i;
    };
    virtual void landing() = 0;
    virtual ~Aircraft() = 0;
};

Aircraft::~Aircraft() { 
    cout << "Aircraft " << flight << " deconstructed.\n";
}

class Boeing : public Aircraft{
public:
    Boeing(string s = "") : Aircraft(s){
        cout << "Boeing " << getFlight() << " constructed.\n";
    }
    void take_off(){
        cout << "Boeing is taking off.\n";
    }
    void speedup(int i = 1){
        Aircraft::speedup(i);
        cout << "Boeing is speeding up to: " << getSpeed() << ".\n";
    }
    void landing(){
        cout << "Boeing is landing.\n";
    }
};

class Jian10 : public Aircraft{
public:
    Jian10(string s = "") : Aircraft(s){
        cout << "Jian10 " << getFlight() << " constructed.\n";
    }
    void take_off(){
        cout << "Jian10 is taking off.\n";
    }
    void speedup(int i = 1){
        Aircraft::speedup(i);
        cout << "Jian10 is speeding up to: " << getSpeed() << ".\n";
    }
    void landing(){
        cout << "Jian10 is landing.\n";
    }
};

class Tower{
    vector<Aircraft*> av;
public:
    void add_plane(Aircraft* ap){
        av.push_back(ap);
    }
    Aircraft* operator[](size_t index){
        return av[index];
    }
    int size() const{
        return av.size();
    }
    ~Tower(){
        while(av.size()){
            Aircraft* temp = av.back();
            av.pop_back();
            delete temp;
        }
    }
};

int main(){
    Tower t;
    t.add_plane(new Boeing("B1001"));
    t.add_plane(new Jian10("J01"));
    for (int i = 0; i < t.size(); i++){
        t[i]->take_off();
        t[i]->speedup(2);
        t[i]->landing();
    }
}