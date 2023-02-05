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
	int min_1 = 0;
	int max_1 = 10;
	int min_2;
	int max_2 = 20;
	int localMax = 5;
	int innerMax = 5;
	int outerMax = 10;


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
		++min;
	}
	cout << endl;

	do {
		cout << min_1 << ", ";
		++min_1;
	} while (min_1 < max_1);
	cout << endl;

	for (int min_2 = 15; min_2 < max_2; ++min_2) {
		cout << min_2 << ", ";
	}

	cout << endl;

	for (int i = 0; i < max; ++i) {
		cout << i << ", ";
		if (i > localMax) {
			cout << "Passed i = " << localMax << "; I'm tired, so let's go home." << endl;
			break;
		}
	}

	cout << endl;

	for (int k = 0; k < max; k++) {
		cout << k << ", ";
		if (k > max / 2) {
			cout << "Reached k = " << localMax / 2 << "; keep on going." << endl;

			continue;
		}
	}

	while (i < outerMax) {
		for (j = 0; j < innerMax; ++j) {
			cout << i * j << ", ";
		}
		++i;
	}

	
	return 0;
}
