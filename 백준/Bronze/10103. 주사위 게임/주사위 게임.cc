#include <iostream>

using namespace std;

int main() {
	int chang = 100, sang = 100;
	int n;
	cin >> n;

	while (n--) {
		int n1, n2;
		cin >> n1 >> n2;

		if (n1 < n2) chang -= n2;
		if (n1 > n2) sang -= n1;
	}

	cout << chang << "\n" << sang;
}