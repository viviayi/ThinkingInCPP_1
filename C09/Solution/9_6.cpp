#include <iostream>

inline void f() { //main.cpp编译会出错，需要去掉inline才可
	std::cout << "i'm inline funciton f1() from separate header file (9_6.cpp) " << std::endl;
}
