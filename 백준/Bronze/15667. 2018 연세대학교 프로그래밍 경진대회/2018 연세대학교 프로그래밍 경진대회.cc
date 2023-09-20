#include <iostream>

using namespace std;

int main() {
	int k;
	cin >> k;

	for (int i=1; i<=100; i++) {
		if (k == 1 + i + i*i) {
			cout << i;
			break;
		}
	}
}