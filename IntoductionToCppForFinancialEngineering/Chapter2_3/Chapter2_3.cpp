#include <iostream>

using namespace std;

int main() {
	int x = 10;
	int y = 20;

	cout << "Before if statement, x = " << x << "; y = " << y << endl;
	if (x == 10) {
		x = 35;
		int y = 100; // y has been re-declared and initialized

		cout << "Inside if statement, x = " << x << "; y " << y << endl;
	}

	cout << "After exiting if statement, x = " << x << "; y = " << y << endl;

	return 0;
}