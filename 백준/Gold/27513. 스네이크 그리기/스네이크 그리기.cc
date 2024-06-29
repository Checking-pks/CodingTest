#include <iostream>

using namespace std;

bool isSwap = false;
int a = 1, b = 1;

void output() {
	if (isSwap)
		cout << b << " " << a << "\n";
	else
		cout << a << " " << b << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n, m;
	cin >> n >> m;

	cout << n * m - (n * m) % 2 << "\n";

	if (n > m) {
		swap(n, m);
		isSwap = true;
	}

	do output();
	while (++b <= m);
	b--;

	if (n % 2 == 0) {
		while (a < n) {
			if (++a % 2 == 0) {
				do output();
				while (--b >= 2);
				b++;
			} else {
				do output();
				while (++b <= m);
				b--;
			}
		}

		b--;
		do output();
		while (--a > 1);
	} else {
		while (a < n - 2) {
			if (++a % 2 == 0) {
				do output();
				while (--b >= 2);
				b++;
			} else {
				do output();
				while (++b <= m);
				b--;
			}
		}

		while (b > 1) {
			if (a > n - 1) {
				a = n;
				output();
				a = n - 1;
				output();
			} else {
				a = n - 1;
				output();
				a = n;
				output();
			}
			b--;
		}

		do output();
		while (--a > 1);
	}
}