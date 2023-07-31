#include <iostream>

using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	cout << (min(n, m) -1) * 2 + (max(n, m) != n);
}