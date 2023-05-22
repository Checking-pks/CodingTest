#include <iostream>

using namespace std;

int main() {
	int time, inCar;
	cin >> time >> inCar;

	int result = inCar;
	
	while (time--) {
		int in, out;
		cin >> in >> out;
		inCar += in - out;

		if (result < inCar)
			result = inCar;

		if (inCar < 0) {
			result = 0;
			break;
		}
	}

	cout << result;
}