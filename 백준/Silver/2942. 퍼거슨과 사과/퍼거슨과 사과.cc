#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b==0) return a;
	return gcd(b, a%b);
}

int main() {
	int R, G;
	cin >> R >> G;
	int max = gcd(R, G);

	for (int i=1; i<=max; i++) {
		if (R%i || G%i) continue;
		cout << i << " " << R/i << " " << G/i << "\n";
	}
}