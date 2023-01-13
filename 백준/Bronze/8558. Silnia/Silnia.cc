#include <iostream>

using namespace std;

int main() {
	int num, result = 1;
	cin >> num;

	for (int i=2; i<=num; i++) {
		result *= i;
		result %= 10;
	}

	cout << result;
}