#include <iostream>
#include <vector>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int n, k, result=0;
		cin >> n >> k;

		for (int now; n; n--) {
			cin >> now;
			result += now / k;
		}

		cout << result << "\n";
	}
}