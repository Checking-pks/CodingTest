#include <iostream>

using namespace std;

int main() {
	long long num1, num2;
	cin >> num1 >> num2;

	long long result = num1 * num2;

	if (num1 < num2) swap(num1, num2);

	while (num1 % num2) {
		long long temp = num1 % num2;
		num1 = num2;
		num2 = temp;
	}

	cout << result / num2;
}