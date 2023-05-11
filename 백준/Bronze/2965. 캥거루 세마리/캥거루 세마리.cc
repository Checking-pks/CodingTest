#include <iostream>

using namespace std;

int main() {
	int l, m, r;
	cin >> l >> m >> r;
	cout << max(r-m, m-l)-1;
}