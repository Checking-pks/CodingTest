#include <iostream>

using namespace std;

const int MAX = 2000000;

int main() {
	int n;
	cin >> n;

	for (int a=1, c; a<=MAX; a++) {
		if (n % a != 0) continue;
		c = n / a;
		
		for (int b=1, d; b<=MAX; b++) {
			if ((n+2) % b != 0) continue;
			d = -((n+2)/b);

			if (a*d+b*c == n+1) {
				cout << a << " " << b << " " << c << " " << d;
				return 0;
			}
		}
	}

	cout << -1;
}