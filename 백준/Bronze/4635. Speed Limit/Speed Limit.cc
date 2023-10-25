#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	while (num != -1) {
		int result = 0;

		for (int i=0, last=0; i<num; i++) {
			int value, t;
			cin >> value >> t;
			result += value * (t - last);
			last = t;
		}

		cout << result << " miles\n";
		cin >> num;
	}
}