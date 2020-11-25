#ifndef TREE_H
#define TREE_H
#include <iostream>

class Tree{
    int height;
public:
    Tree(int treeHeight) : height(treeHeight){}
    ~Tree(){ std::cout << "*"; }
    friend std::ostream& operator<<(std::ostream& os, const Tree* t){
        return os << "Tree height is: " << t->height << std::endl;
    } // 定义一个友元函数为内联函数不会改变友元状态，且仍是全局函数
};
#endif // TREE_H ///:~