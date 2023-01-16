#include <iostream>

using namespace std;

double addAndSubtract(double x, double y, double z);
double twice(double x);
int tripleInteger(int k);

int main() {
	cout << "Hello World!" << endl;

	double ret = addAndSubtract(5.0, 4.0, 3.0);
	cout << "Result of addAndSubtract is " << ret << endl << endl;

	double v = 10.6;
	double twc = twice(v);
	cout << "Result of twice is " << twc << endl << endl;

	double i = 5.1;
	cout << "The number is " << i << endl;

	int k = 10;
	int rtn = tripleInteger(k);
	cout << "tripleInteger(" << k << ") = " << rtn << endl;
	cout << endl;

	return 0;
}


double addAndSubtract(double x, double y, double z) {
	double w = x + y - z;
	return w;
}

double twice(double x) {
	return 2.0 * x;
}

int tripleInteger(int k) {
	int m = 3 * k;
	return m;
}


