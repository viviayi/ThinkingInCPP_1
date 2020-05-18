#ifndef VIDEO_H
#define VIDEO_H

#include <string>

struct Video{
    std::string name;
    double cost;

    void initialize();
    void print();
};

#endif