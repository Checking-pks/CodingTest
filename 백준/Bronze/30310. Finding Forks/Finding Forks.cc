#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	pair<int, int> result = {1000000001, 1000000001};
	
	for (int i=0, now; i<n; i++) {
		cin >> now;

		if (result.first > now) {
			result.second = result.first;
			result.first = now;
			continue;
		}

		if (result.second > now) {
			result.second = now;
		}
	}

	cout << result.first + result.second;
}