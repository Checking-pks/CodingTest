#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (!b) return a;
	return gcd(b, a%b);
}

int count(int N) {
	int result=0;

	for (int i=1; i*i<=N; i++) 
		if (N%i == 0 && gcd(N/i, i) == 1) 
			result++;

	return result;
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;
		cout << count(N) << "\n";
	}
}