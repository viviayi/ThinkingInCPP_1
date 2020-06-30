// Random quote selection
#include <iostream>
#include <cstdlib> // Random number generator
#include <ctime> // To seed random generator
using namespace std;

class Quoter{
    mutable int lastquote; // const 函数中也可以被改变的量
public:
    Quoter();
    int lastQuote() const;
    const char* quote() const;
};

Quoter::Quoter(){
    lastquote = -1;
    srand(time(0)); // Seed random number generator
}

int Quoter::lastQuote() const{  // 不修改数据成员的函数，声明为const
    return lastquote;
}

const char* Quoter::quote() const{
    static const char* quotes[] = {
        "Are we having fun yet?",
        "Doctors always know best",
        "Is it ... Atomic?",
        "Fear is obscene",
        "There is no scientific evidence "
        "to support the idea "
        "that life is serious",
        "Things that make us happy, make us wise",
    };
    const int qsize = sizeof(quotes)/sizeof(*quotes);
    int qnum = rand() % qsize;
    while(lastquote >= 0 && qnum == lastquote){
        qnum = rand() % qsize; // 和上一次重复则重新随机
    }
    return quotes[lastquote = qnum];
}

int main(){
    Quoter q;
    const Quoter cq;
    cq.lastQuote();
    //! cq.quote();
    for(int i = 0; i < 20; i++)
        cout << q.quote() << endl;
} ///:~