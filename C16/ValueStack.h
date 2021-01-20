// Holding objects by value in a stack
#ifndef VALUESTACK_H
#define VALUESTACK_H
#include "../require.h"

template<class T, int ssize = 10>
class Stack{
    // Default constructor performs object
    // initialization for each element in array:
    T stack[ssize];
    int top;
public:
    Stack() : top(0) {}
    // Copy-constructor copies object into array:
    // 不明白，这里不还是按引用push?
    void push(const T& x){
        require(top < ssize, "Too many push()es");
        stack[top++] = x;  // 难道是这个地方算按值存？既调用了赋值运算，又调用了拷贝构造函数。
    }
    T peek() const{
        return stack[top];
    }
    // Object still exists when you pop it;
    // it just isn't available anymore:
    T pop(){
        require(top > 0, "Too many pop()s");
        return stack[--top];
    }
};

#endif // VALUESTACK_H