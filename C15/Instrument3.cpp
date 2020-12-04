// Inheritance & upcasting
#include <iostream>
using namespace std;
enum note { middleC, Csharp, Eflat }; // Etc.

class Instrument{
public:
    virtual void play(note) const{
        cout << "Instrument::play" << endl;
    }
};

// Wind objects are Instuments
// because they have the same interface:
class Wind : public Instrument{
public:
    // Redefine interface function:
    void play(note) const{
        cout << "Wind::play" << endl;
    }
};

void tune(Instrument& i){
    // ...
    i.play(middleC);
}

int main(){
    Wind flute;
    tune(flute); // Upcasting
} ///:~