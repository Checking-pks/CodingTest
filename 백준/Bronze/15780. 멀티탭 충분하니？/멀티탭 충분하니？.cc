#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	for (int i=0, hole; i<k; i++) {
		cin >> hole;
		n -= hole/2 + (hole&1);
	}

	cout << (n>0 ? "NO" : "YES");
}