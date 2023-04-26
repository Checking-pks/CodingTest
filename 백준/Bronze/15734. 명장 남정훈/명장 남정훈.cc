#include <iostream>

using namespace std;

int main() {
	int l, r, a;
	cin >> l >> r >> a;

	for (int i=0; i<a; i++)
		if (l < r) l++;
		else r++;

	cout << min(l, r) * 2;
}