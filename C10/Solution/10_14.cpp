// The volatile keyword

class Comm{
    static unsigned char byte;
    static unsigned char flag;
    enum{ bufsize = 100 };
    static unsigned char buf[bufsize];
    static int index;
public:
    Comm();
    static void isr();
    char read(int index) const;
};

Comm::Comm() {}

unsigned char Comm::flag = 0;
unsigned char Comm::byte = 0;
unsigned char Comm::buf[bufsize] = {0};
int Comm::index = 0;

// Only a demo, won't actually work
// as an interrupt service routine:
void Comm::isr(){
    flag = 0;
    buf[index++] = byte;
    // Warp to begining of buffer:
    if(index >= bufsize) index = 0;
}

char Comm::read(int index) const{
    if(index < 0 || index >= bufsize){
        return 0;
    }
    return buf[index];
}

int main(){
    volatile Comm Port;
    Port.isr(); 
    //! Port.read(0); // Error, read() not volatile
} ///:~