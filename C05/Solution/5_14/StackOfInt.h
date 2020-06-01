#ifndef STACKOFINT_H
#define STACKOFINT_H

class StackOfInt
{
private:
    class StackImp;
    StackImp* smile;
public:
    void initialize();
    void push(int);
    int pop();
    void print();
    void cleanup();
};

#endif //STACKOFINT_H ///:~