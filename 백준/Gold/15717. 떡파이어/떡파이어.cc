#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<bool> calc;
	long long n, result = 1;
	cin >> n;

	n--;

	while (n > 0) {
		if (n & 1) {
			n--;
			calc.push_back(false);
		} else {
			n /= 2;
			calc.push_back(true);
		}
	}

	while (calc.size()) {
		if (calc.back()) result *= result;
		else result *= 2;

		calc.pop_back();
		result %= 1000000007;
	}

	cout << result;
}