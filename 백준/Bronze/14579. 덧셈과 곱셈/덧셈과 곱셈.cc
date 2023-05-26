#include <iostream>

using namespace std;

int main() {
	long long a, b, result = 1;
	cin >> a >> b;

	for (int i=a; i<=b; i++) {
		result *= i*(i+1)/2;
		result %= 14579;
	}

	cout << result;
}