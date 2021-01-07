/**
Create a model of a greenhouse by inheriting various types of Plant
and building mechanisms into your greenhouse that take care of the plants.
**/
#include <iostream>
#include <vector>
using namespace std;

class Plant{
    string name;
    float height;
public:
    Plant(string s_name = ""){
        name = s_name;
        cout << "Plant " << name << "constructed!\n" ;
    }
    string getName() const{
        return name;
    }
    int getHeight(){
        return height;
    }
    virtual void taller(int i){
        height += i;
    };
    virtual ~Plant(){}
};

class LemonTree : public Plant{
public:
    LemonTree(string l_name) : Plant(l_name){
        cout << "LemonTree " << getName() << " constructed!\n";
    }
};

class Patato : public Plant{
public:
    Patato(string p_name) : Plant(p_name){
        cout << "Patato " << getName() << " constructed!\n";
    }
};

class GreenHouse{
    vector<Plant*> pv;
public:
    void sowing(Plant* p){
        cout << "GreenHouse::sowing()" << endl;
        pv.push_back(p);
    }
    
    void water(){
        cout << "GreenHouse::water()" << endl;
        for(size_t i = 0; i < pv.size(); i++){
            pv[i]->taller(1);
        }
    }

    void feed() {
        cout << "GreenHouse::feed()" << endl;
        for(size_t i = 0; i < pv.size(); i++){
            pv[i]->taller(2);
        }
    }

    void harvest(){
        cout << "GreenHouse::harvest()" << endl;
        Plant* temp;
        while(!pv.empty()){
            temp = pv.back();
            delete temp;
            pv.pop_back();
        }
    }

    void check(){
        for(size_t i = 0; i < pv.size(); i++){
            cout << pv[i]->getName() << "'s height is " << pv[i]->getHeight() << endl;
        }
    }

    ~GreenHouse(){
        if(!pv.empty()){
            cout << "GreenHouse is not empty!" << endl;
        }
        else{
            pv.clear();
        }
    }
};

int main(){
    GreenHouse g;
    g.sowing(new LemonTree("Bee"));
    g.sowing(new Patato("Petter"));
    g.water();
    g.feed();
    g.check();
    g.harvest();
    return 0;
}