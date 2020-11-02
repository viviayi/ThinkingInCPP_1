// The copy-constructor
#include <fstream>
#include <string>
using namespace std;
ofstream out("HowMany2.out");

class HowMany2{
    string name; // Object identifier
    static int objectCount;
public:
    HowMany2(const string& id = "") : name(id){
        ++objectCount;
        print("HowMany2()");
    }
    ~HowMany2(){
        --objectCount;
        print("~HowMany2()");
    }
    // The copy-constructor:
    HowMany2(const HowMany2& h) : name(h.name){
        name += " copy";
        ++objectCount;
        print("HowMany2(const HowMany2&)");
    }
    void print(const string& msg = "") const{
        if(msg.size() != 0) out << msg << endl;
        out << '\t' << name << ": " << "objectCount = " << objectCount << endl;
    }
};

int HowMany2::objectCount = 0;

// Pass and return BY VALUE
HowMany2 f(HowMany2 x){
    x.print("x argument inside f()");
    out << "Returning from f()" << endl;
    return x; //进入函数f时，对h进行了拷贝h2，返回销毁之前，这个局部变量需要拷贝入返回值
    // 因此，h2再被拷贝，传入返回值，函数结束后h2被销毁，返回的是两次拷贝
}

int main(){
    HowMany2 h("h");
    out << "Entering f()" << endl;
    HowMany2 h2 = f(h);
    h2.print("h2 after call to f()");
    out << "Call f(), no return value" << endl;
    f(h); //无返回值的调用，编译器创建临时变量接受返回值，函数调用完即销毁析构
    out << "After call to f()" << endl;
} ///:~