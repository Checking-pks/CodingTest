#include <iostream>

using namespace std;

int main() {
	int T, n, m;
	cin >> T;

	while (T--) {
		cin >> n >> m;
		cout << 1+(n-m)*m << "\n";
	}
}