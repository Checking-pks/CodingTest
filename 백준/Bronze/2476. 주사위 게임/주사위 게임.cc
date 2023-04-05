#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, result = 0;
	cin >> n;

	while (n--) {
		int a, b, c, prize;
		cin >> a >> b >> c;

		if (a == b && b == c)
			prize = 10000 + a * 1000;
		else if (a == b || a == c)
			prize = 1000 + a * 100;
		else if (b == c)
			prize = 1000 + b * 100;
		else
			prize = max({a, b, c}) * 100;

		if (result < prize)
			result = prize;
	}

	cout << result;
}