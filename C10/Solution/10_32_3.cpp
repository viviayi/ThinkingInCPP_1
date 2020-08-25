/*
Keep doing this until you reach the last file, which will also
contain a global object definition. In that file, main( ) should call the
test( ) function and report the result. If the result is true, find out how
to change the linking order for your linker and change it until the result
is false.
*/
#include "10_32.h"
extern Mirror m2;
Mirror m3(&m2);