#include <iostream>

using namespace std;

int main() {
	int num, time;
	cin >> num >> time;

	for (int i=1; i<=num; i++) {
		if (num % i == 0)
			time--;

		if (time == 0) {
			cout << i;
			break;
		}
	}

	if (time) cout << 0;
}