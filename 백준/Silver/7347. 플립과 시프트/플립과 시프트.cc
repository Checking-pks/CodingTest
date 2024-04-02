#include <iostream>

using namespace std;

bool isTrue() {
	int num, odd = 0, even = 0;
	cin >> num;

	for (int i = 0, now; i < num; i++) {
		cin >> now;

		if (i & 1)
			odd += now;
		else
			even += now;
	}

	if (num & 1)
		return true;

	if (abs(odd - even) <= 1)
		return true;
	else
		return false;
}

int main() {
	int T;
	cin >> T;

	while (T--)
		cout << (isTrue() ? "YES\n" : "NO\n");
}