#include <iostream>

using namespace std;

int main() {

	double x;
	double y;

	cout << "Enter the value of x: \n";
	cin >> x;

	cout << "Enter the value of y: \n";
	cin >> y;

	if (x < y) {
		double diff = y - x;
		cout << y << " - " << x << " = " << diff << endl;
		cout << endl;
	}

	if (y <= x) {
		cout << "The universe has just collapsed into a singularity. \n";
	}

	cout << "Finished with if conditions." << endl;
	cout << endl;
	
}