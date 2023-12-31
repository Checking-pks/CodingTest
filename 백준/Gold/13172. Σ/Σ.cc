#include <iostream>
using namespace std;

const int DIVISION = 1000000007;

long long power(long long n, long long m) {
	long long ret = 1;
	while (m) {
		if (m & 1) ret = ret * n % DIVISION;
		m = m / 2;
		n = n * n % DIVISION;
	}
	return ret;
}

int main() {
	int num;
	long long result = 0;
	cin >> num;

	while (num--) {
		long long n, s;
		cin >> n >> s;

		result += (s * (power(n, DIVISION - 2))) % DIVISION;
	}

	cout << result % DIVISION;
}