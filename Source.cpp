#include <iostream>
using namespace std;

int main() {
//	Typed by: Mitchell Blanco
//	Computes the average of a set of values entered by the user, e.g. with
//	10.0  5.0  6.0  9.0  0.0
//	The average is 7.5

	int count;
	float number, runningTotal;

	runningTotal = 0;
	count = 0;
	cout << "Type the numbers with space in-between, the last being 0" << endl;

	cin >> number;
	while (number != 0) {
		runningTotal = runningTotal + number;
		count = count + 1;
		cin >> number;
	}

	cout << "The average of the " << count << " numbers is " << runningTotal / count;
	return 0;
}