#include <iostream>
#include <vector>
using namespace std;

class Counted{
    int id;
    static int count;
public:
    Counted():id(count++){
        cout << id << " it's being created" << endl;
    }

    void f(){
        cout << id;
    }

    ~Counted(){
        cout << id << " it's being destroyed" << endl;
    }
    friend ostream& operator<<(ostream& out, const Counted& c);
};

int Counted::count = 0;
ostream& operator<<(ostream& out, const Counted& c){
    out << c.id;
    return out;
}

int main(){
    vector<Counted*> countVector;
    for(int i = 0; i < 10; i++){
        countVector.push_back(new Counted);
    }
    for(int j = 0; j < countVector.size(); j++){
        countVector[j]->f();
    }
    cout << endl;
    Counted* temp;
    while (countVector.size())
    {
        temp = countVector.back();
        countVector.pop_back();
        delete temp;
        temp = 0;
    }
    return 0;
}