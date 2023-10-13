#include <iostream>

using namespace std;

int main() {
	int num, result=0, oddMin=1001, isOdd=0;
	cin >> num;

	for (int i=0, now; i<num; i++) {
		cin >> now;
		
		result += now;

		if (now & 1) {
			isOdd = !isOdd;
			oddMin = min(oddMin, now);
		}
	}

	cout << (result - isOdd * oddMin) / 2;
}