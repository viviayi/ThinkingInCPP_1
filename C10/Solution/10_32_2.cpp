/*
The second file declares the object in the first file as extern, and defines a global
Mirror object using the second constructor, with a pointer to the first
object.
*/
#include "10_32.h"
extern Mirror m1;
Mirror m2(&m1);