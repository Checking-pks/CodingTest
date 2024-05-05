#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (!b) return a;
	return gcd(b, a % b);
}

int main() {
	int M, N;
	cin >> M >> N;

	if (!M && !N) {
		cout << 0;
		return 0;
	}
	
	M = abs(M);
	N = abs(N);

	if (gcd(M, N) == 1)
		cout << 1;
	else
		cout << 2;
}