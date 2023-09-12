#include <iostream>

using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;

	k -= 3;
	m += k - 1;

	while (m<0) m+=n;

	if (m >= n) m %= n;

	cout << m + 1;
}