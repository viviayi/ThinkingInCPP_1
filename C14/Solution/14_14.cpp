#include <iostream>
using namespace std;

class Traveler{
    string s;
public:
    Traveler(string ss){
        s = ss;
    }
    Traveler(const Traveler& t){
        s = t.s;
    }
    Traveler& operator=(const Traveler& t){
        s = t.s;
        return *this;
    }
};

class Pager{
    string s;
public:
    Pager(string ss){
        s = ss;
    }
    Pager(const Pager& p){
        s = p.s;
    }
    Pager& operator=(const Pager& p){
        s = p.s;
        return *this;
    }
};

class BusinessTraveler : public Traveler{
    Pager p;
public:
    BusinessTraveler() : Traveler(" "), p(" "){}
    BusinessTraveler(string s) : Traveler(s), p(s){}
    BusinessTraveler(const BusinessTraveler& b) : Traveler(b), p(b.p){}
    BusinessTraveler& operator=(const BusinessTraveler& b){
        Traveler::operator=(b);
        p = b.p;
        return *this;
    }
};

int main(){
    BusinessTraveler b1;
    BusinessTraveler b2("b2");
    b1 = b2;
    BusinessTraveler b3(b1);
    return 0;
}