int d = 1;
const int e = 2;
int* u = &d; // Leagal —— d not const
int* v = &e; // Illegal —— e const
// error: invalid conversion from 'const int*' to 'int*'
int* w = (int*)&e; // Leagal but bad practice
int main(){}