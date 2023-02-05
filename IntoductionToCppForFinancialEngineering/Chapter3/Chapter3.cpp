#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int i = 100;
	int j = 200;
	int x = 0;
	int x_0 = 0;
	int min = 10;
	int max = 20;

	cout << "Prefix increment ++i; i is now " << ++i << endl;
	cout << i << endl;
	cout << "Prefix decrement --i; i is now " << --i << endl;
	cout << i << endl;

	cout << "Postfix increment j++; j is now " << j++ << endl;
	cout << j << endl;
	cout << "Postfix decrement j--; j is now " << j-- << endl;
	cout << j << endl;

	x = x + 42;
	cout << x << endl;

	x_0 += 42;
	cout << x_0 << endl;

	while (min < max) {
		cout << min << ", ";
		min++;
	}


	
	return 0;
}
