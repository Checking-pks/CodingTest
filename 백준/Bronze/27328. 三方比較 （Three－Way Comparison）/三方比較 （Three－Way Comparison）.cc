#include <iostream>

using namespace std;

int main() {
	int n1, n2;
	cin >> n1 >> n2;

	if (n1 > n2) cout << 1;
	if (n1 == n2) cout << 0;
	if (n1 < n2) cout << -1;
}