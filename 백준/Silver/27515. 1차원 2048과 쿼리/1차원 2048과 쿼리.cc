#include <iostream>

using namespace std;

typedef unsigned long long ull;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int Q;
	cin >> Q;

	ull N = 0, now, result;
	for (ull i=0; i<Q; i++) {
		cin >> now;
		N += now;

		result = 1;
		while (result <= N) {
			result <<= 1;
			if (!result) result = 1;
		}

		while (result > N) 
			result >>= 1;

		cout << result << "\n";
	}
}