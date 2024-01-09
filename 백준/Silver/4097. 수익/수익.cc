#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;

	while (n) {
		long long result = -10001, sum, today;
		vector<int> numList(n);
		
		cin >> sum;
		for (int i=1; i<n; i++) {
			cin >> today;
			sum = max(today, sum+today);
			result = max(result, sum);
		}

		cout << result << "\n";
		cin >> n;
	}
}