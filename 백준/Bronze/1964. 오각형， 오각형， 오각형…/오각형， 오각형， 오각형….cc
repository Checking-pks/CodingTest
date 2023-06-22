#include <iostream>

using namespace std;

int main() {
	long long num, result = 5;
	cin >> num;

	for (int i=2; i<=num; i++) {
		result += i * 3 + 1;
		result %= 45678;
	}

	cout << result;
}