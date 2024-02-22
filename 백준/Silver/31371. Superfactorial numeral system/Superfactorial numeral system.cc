#include <iostream>

using namespace std;

int main() {
	long long p, q;
	cin >> p >> q;

	for (long long i=1; p > 0; i++) {
		p *= i;
		int now = p / q;
		p -= now * q;
		cout << now << " ";
	}
}