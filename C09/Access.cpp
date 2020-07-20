// Inline access functions

class Access{
    int i; // 数据成员私有，访问需要通过函数read进行，更加安全
public:
    int read() const { return i; } // read函数设为内联，效率更高
    void set(int ii) { i = ii; }
};

int main(){
   Access A;
   A.set(100);
   int x = A.read(); 
} ///:~