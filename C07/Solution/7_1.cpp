#include <fstream>
#include <iostream>
using namespace std;

class Text{
    string s;
public:
    Text();
    Text(string filename);
    string contents();
};

Text::Text(){}

Text::Text(string filename){
    //ifstream in(filename.c_str());
    ifstream in(filename);
    string buf;
    while(getline(in, buf)){
        s += buf;
        s += '\n';
    }
}

string Text::contents(){
    return s;
}

int main(){
    Text t("7_1.cpp");
    string s = t.contents();
    cout << s << endl;
    return 0;
}