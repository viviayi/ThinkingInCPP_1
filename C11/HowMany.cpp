// A class that counts its objects
#include <fstream>
#include <string>
using namespace std;
ofstream out("HowMany.out");

class HowMany{
    static int objectCount;
public:
    HowMany(){
        objectCount++;
    }
    static void print(const string& msg = ""){
        if(msg.size() != 0) out << msg << ": ";
        out << "objectCount = " << objectCount << endl;
    }
    ~HowMany(){
        objectCount--;
        print("~HowMany()");
    }
};

int HowMany::objectCount = 0;

// Pass and return BY VALUE:
HowMany f(HowMany x){
    x.print("x argument inside f()");
    return x;
}

int main(){
    HowMany h;
    HowMany::print("after construction of h");
    HowMany h2 = f(h); //使用位拷贝存在一些问题，h2对象并没有调用构造函数，使得计数器没有正常增加
    HowMany::print("after call to f()");
} ///:~