#include <iostream>
using namespace std;

int main() {
  double i,j;
  cout << "Enter a double: ";
  cin >> i;
  cout << "Enter another double: ";
  cin >> j;
  cout << "i > j is " << (i > j) << endl;
  cout << "i < j is " << (i < j) << endl;
  cout << "i >= j is " << (i >= j) << endl;
  cout << "i <= j is " << (i <= j) << endl;
  cout << "i == j is " << (i == j) << endl;
  cout << "i != j is " << (i not_eq j) << endl;
  cout << "i && j is " << (i and j) << endl;
  cout << "i || j is " << (i or j) << endl;
  cout << " (i < 10) && (j < 10) is "
       << ((i < 10) and (j < 10))  << endl;
} ///:~