#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=1; i<=testcase; i++) {
		int result = 0;
		for (int j=0, now; j<5; j++) {
			cin >> now;
			result = max(result, now);
		}

		cout << "Case #" << i << ": " << result << "\n";
	}
}