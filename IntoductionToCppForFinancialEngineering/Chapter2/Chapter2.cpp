#include <iostream>

using namespace std;

bool u = true;
bool v = false;

int main() {
	cout << "u is true; !u is " << !u << endl;
	cout << "u || v means u OR v; it evaluates to " << (u || v) << endl;
	cout << "u && v means u AND v; it evaluates to " << (u && v) << endl;

	return 0;
}


