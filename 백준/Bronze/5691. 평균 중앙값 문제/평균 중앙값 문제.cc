#include <iostream>

using namespace std;

int main() {
	int n1, n2;
	cin >> n1 >> n2;

	while (n1 != 0 && n2 != 0) {
		cout << n1 * 2 - n2 << "\n";
		cin >> n1 >> n2;
	}
}