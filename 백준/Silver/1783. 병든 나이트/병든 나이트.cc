#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	if (n > 2 && m > 6)
		cout << m - 2;
	else if (n == 2 && m > 2)
		cout << ((m + 1) / 2 < 4 ? ((m + 1) / 2) : 4);
	else if (n > 2 && m > 1)
		cout << (m < 4 ? m : 4);
	else 
		cout << 1;
}