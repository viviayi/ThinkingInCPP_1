// Inheritance & upcasting
#include <iostream>
using namespace std;
enum note { middleC, Csharp, Eflat }; // Etc.

class Instrument{
public:
    virtual void play(note) const{
        cout << "Instrument::play" << endl;
    }
    virtual void prepare() const{
        cout << "Instrument::prepare" << endl;
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
    void prepare() const{
        cout << "Wind::prepare" << endl;
    }
};

void tune(Instrument& i){
    // ...
    i.play(middleC);
    i.prepare();
}

int main(){
    Wind flute;
    tune(flute); // Upcasting
} ///:~