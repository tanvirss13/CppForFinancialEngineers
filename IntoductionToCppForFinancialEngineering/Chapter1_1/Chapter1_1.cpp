#include <iostream>
#include <string>

using namespace std;

int main() {
	string myString = "C++ rocks my world!";
	string emptyString;
	string newString;

	cout << "1st character of myString is " << myString.front() << endl;
	cout << "Last character of myString is " << myString.back() << endl;
	cout << "myString actually is " << myString.data() << endl;
	cout << "Length of myString is " << myString.size() << endl << endl;

	cout << "Length of emptyString is " << emptyString.size() << endl;
	cout << "Is empty actually empty? " << emptyString.empty() << endl << endl;

	newString.push_back('T');
	newString.push_back('a');
	newString.push_back('n');
	newString.push_back('v');
	newString.push_back('i');
	newString.push_back('r');

	cout << "1st character of newString is " << newString.front() << endl;
	cout << "Last character of newString is " << newString.back() << endl;
	cout << "newString actually is " << newString.data() << endl;
	cout << "Length of newString is " << newString.size() << endl << endl;

	cout << "newString contents can also be displayed this way: " << newString << endl << endl;
}