#include <iostream>
#include <string>

using namespace std;


void ternaryOper(bool torf) {
	string porc = torf ? "CALL" : "PUT";
	cout << "You have a " << porc << " option." << endl;
}

int main() {

	string porc = "CALL";
	cout << "Enter the option type: " << endl;
	cin >> porc;

	string t;
	cout << "Is it a Call Option?" << endl;
	cin >> t;

	double strike;
	cout << "Enter the Strike value: " << endl;
	cin >> strike;

	double underlying;
	cout << "Enter the Underlying price: " << endl;
	cin >> underlying;



	if (porc != "PUT") {
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

	if (t == "Yes") {
		ternaryOper(true);
	}
	else {
		ternaryOper(false);
	}

	return 0;
}

