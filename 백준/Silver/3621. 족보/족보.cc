#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, d, result = 0;
	cin >> n >> d;

	vector<int> nList(n + 1);
	for (int i=0, now; i<n; i++) {
		cin >> now;
		nList[now]++;
	}

	for (int i=0; i<=n; i++) {
		if (nList[i] <= d)
			continue;

		while (nList[i] > d) {
			nList[i] -= d - 1;
			result++;
		}
	}

	cout << result;
}