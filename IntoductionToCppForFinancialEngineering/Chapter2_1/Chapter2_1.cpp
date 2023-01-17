#include <iostream>

using namespace std;

int main() {
	int i = 216;
	int j = 419;

	cout << "Test equality operator: i == j ? " << (i == j) << endl;
	cout << "Test NOT equality operator: i != j ? " << (i != j) << endl;
	cout << "Test inclusive inequality operator: i >= j ? " << (i >= j) << endl;
	cout << "Test strict inequality operator: i > j ? " << (i > j) << endl;
	cout << "Test strict inequality operator: i < j ? " << (i < j) << endl;

	return 0;
}