#include <iostream>
using namespace std;

enum note{ middleC, Csharp, Cflat }; // Etc.

class Instrument{
public:
    virtual void play(note) const{
        cout << "Instrument::play(note)\n";
    }
    void prepare() {}
};

// Wind objects are Instruments
// because they have the same interface:
class Wind : public Instrument{
public:
    void play(note) const{
        cout << "Wind::play(note)\n";
    }
};

void tune(Instrument& i){
    // ...
    i.play(middleC);
    i.prepare();
}

int main(){
    Wind flute;
    tune(flute); // upcasting
} ///:~

// Output:
// 加virtual：Wind::play(note)
// 不加：Instrument::play(note)  // 定义的是wind变量，调用的却是base类的函数