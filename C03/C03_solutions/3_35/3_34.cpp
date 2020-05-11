#include <iostream>
using namespace std;

#define DF(N) string N() { return #N; }

DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);

string (*func_table[])() = {a, b, c, d, e, f, g};

int main() {
	#ifdef DEBUG
		cout << "Debug version" << endl;
	#endif
	while (1) {
		cout << "press a key from 'a' to 'g' "
		"or q to quit" << endl;
		char c, cr;
		cin.get(c); cin.get(cr);
		if (c == 'q')
			break;
		if (c < 'a' || c > 'g')
			continue;
		string func_name;
        func_name = (*func_table[c - 'a'])();
        cout << "function " << func_name << " called..." << endl; 
	}
} ///:~