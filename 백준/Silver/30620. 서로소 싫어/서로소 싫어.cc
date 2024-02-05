#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
	if (b==0) return a;
	return gcd(b, a%b);
}

int main() {
	long long x, y;
	cin >> x >> y;

	if (x == y) {
		cout << 0;
		return 0;
	}

	if (gcd(x, abs(y-x)) != 1) {
		cout << "1\n";
		cout << y-x;
		return 0;
	}

	for (long long a=x, b; true; a+=x) {
		b = y - x - a;
		if (gcd(x+a, abs(b)) == 1) continue;
		cout << "2\n";
		cout << a << "\n" << b;
		break;
	}
}