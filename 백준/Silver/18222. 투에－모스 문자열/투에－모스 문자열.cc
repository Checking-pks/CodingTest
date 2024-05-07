#include <iostream>

using namespace std;

long long K, MAX = 1;

bool recursive() {
	if (MAX == 0)
		return 1;
	
	MAX >>= 1;

	if (MAX < K) {
		K -= MAX;
		return !recursive();
	}
	
	return recursive();
}

int main() {
	cin >> K;

	while (MAX < K)
		MAX <<= 1;

	cout << recursive();
}