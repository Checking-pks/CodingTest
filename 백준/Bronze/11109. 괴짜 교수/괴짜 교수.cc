#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int d, n, s, p;
		cin >> d >> n >> s >> p;

		int series, parallel;
		series = n * s;
		parallel = d + n * p;

		if (series > parallel) cout << "parallelize\n";
		else if (series < parallel) cout << "do not parallelize\n";
		else cout << "does not matter\n";
	}
}