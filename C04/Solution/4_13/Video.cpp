#include <iostream>
#include "Video.h"
using namespace std;

void Video::initialize(){
    name = "";
    cost = 0;
}

void Video::print(){
    cout << "name: " << name << endl;
    cout << "cost: " << cost << endl;
}