#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int n, result=0, last;
		cin >> n >> last;
		result = last;
		
		for (int i=1, now; i<n; i++) {
			cin >> now;
			last = max(now, now+last);
			result = max(result, last);
		}

		cout << result << "\n";
	}
}