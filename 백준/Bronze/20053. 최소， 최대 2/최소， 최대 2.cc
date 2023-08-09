#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int testcase;
	cin >> testcase;

	while (testcase--) {
		pair<int, int> result = {1000000, -1000000};
		int num;
		cin >> num;

		for (int i=0, now; i<num; i++) {
			cin >> now;
			
			result.first = min(result.first, now);
			result.second = max(result.second, now);
		}

		cout << result.first << " " << result.second << "\n";
	}
}