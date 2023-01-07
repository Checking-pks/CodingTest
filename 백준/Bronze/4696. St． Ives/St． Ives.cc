#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(2);

	double num;
	cin >> num;

	while (num != 0) {
		double result = 1;
		result += num;
		result += num * num;
		result += num * num * num;
		result += num * num * num * num;

		cout << result << "\n";
		cin >> num;
	}
}