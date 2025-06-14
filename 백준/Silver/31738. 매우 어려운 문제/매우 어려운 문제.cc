#include <iostream>

using namespace std;

int main() {
	long long N, M, result = 1;
	cin >> N >> M;

	for (int i=2; i<=min(N, M); i++) {
		result *= i;
		result %= M;
	}

	cout << result;
}