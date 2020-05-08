/**
Write a program that uses all the trigraphs to see if your compiler supports them.
Trigraphs:
??=      #
??/      \
??'      ^
??(      [
??)      ]
??!      |
??<      {
??>      }
??-      ~
Compilation command: g++ ex08.cpp -trigraphs -o ex08
**/
??=include <iostream>

using namespace std;

int main() {

    int a??( 10 ??) ;

    if ( 1 ??' 0 ??!??! ??-0) ??<
        cout << "Hello World!" ??/
             << &a <<endl;
    ??>

return 0;
}