#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	long long result=1;
	for (int i=2; i<=n; i++) {
		int now = i;
		while (now%10 == 0) now /= 10;
		result *= now;
		while (result%10 == 0) result /= 10;
		result %= 100000000000000;
	}

	cout << result % 10;
}