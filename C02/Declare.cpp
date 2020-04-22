// Declaration and defination examples
extern int i; // Declaration without defination
extern float f(float); // Function declaration, extern can be moved
float b; // Declaration and defination
float f(float a) { // Defination
    return a + 1.0;
}

int i; // Defination
int h(int x) { // Declaration and defination
    return x + 1;
}

int main() {
    b = 1.0;
    i = 2;
    f(b);
    h(i);
} ///:~
