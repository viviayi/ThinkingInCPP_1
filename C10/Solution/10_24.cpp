/**
Extract the namespace declarations in BobsSuperDuperLibrary.cpp and UnnamedNamespaces.cpp
and put them in separate header files, giving the unnamed namespace a name in the process.
In a third header file create a new namespace that combines the elements of the other two
namespaces with using declarations. In main( ), introduce your new namespace with a using
directive and access all the elements of your namespace.
**/
#include "10_24_3.h"

int main(){
    using namespace MySpace;
    Robot r;
    Widget w;
}