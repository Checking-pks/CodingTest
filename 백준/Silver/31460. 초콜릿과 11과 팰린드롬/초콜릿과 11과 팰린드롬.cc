#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;

		if (N == 1) cout << "0\n";
		else if (N == 2) cout << "11\n";
		else if (N == 3) cout << "121\n";
		else cout << "11" + string(N-4, '0') + "11" << "\n";
	}
}