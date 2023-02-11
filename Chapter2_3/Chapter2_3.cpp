#include <iostream>
#include <string>

using namespace std;

int main() {
	int x = 10;
	int y = 20;
	bool winningLotteryTicket = false;
	string porc = "CALL";

	cout << "Before if statement, x = " << x << "; y = " << y << endl;
	if (x == 10) {
		x = 35;
		int y = 100; // y has been re-declared and initialized

		cout << "Inside if statement, x = " << x << "; y " << y << endl;
	}

	cout << "After exiting if statement, x = " << x << "; y = " << y << endl;


	if (winningLotteryTicket) {
		cout << "You can now retire in Aruba!" << endl;
	}
	else {
		cout << "Sorry Pal, back to work for you!" << endl;
	}

	if (porc == "PUT") {
		cout << "You have a put option." << endl;
	}
	else if (porc == "CALL") {
		cout << "You have a call option." << endl;
	}
	else {
		cout << "You have a problem." << endl;
	}


	cout << endl;

	return 0;
}