#include <iostream>
#include <string>

using namespace std;

int main() {
	string porc;
	cout << "Enter the option type: " << endl;
	cin >> porc;


	double strike;
	cout << "Enter the Strike value: " << endl;
	cin >> strike;

	double underlying;
	cout << "Enter the Underlying price: " << endl;
	cin >> underlying;


	if (porc == "CALL") {
		cout << "This is a call option." << endl;
		if (underlying > strike) {
			cout << "Option is in the money." << endl;
		}
		else {
			cout << "Option is out of the money." << endl;
		}
	}
	else if (porc == "PUT") {
		cout << "This is a put option." << endl;
		if (underlying <= strike) {
			cout << "Option is in the money." << endl;
		}
		else {
			cout << "Option is out of the money." << endl;
		}
	}
	else {
		cout << "The type " << porc << " is not a valid option contract." << endl;
	}

	return 0;
}