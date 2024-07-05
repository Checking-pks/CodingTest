#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, day=0, result = 0;
	cin >> N;

	vector<pair<int, int>> nList(N);
	for (int i=0; i<N; i++) 
		cin >> nList[i].first >> nList[i].second;

	sort(nList.begin(), nList.end());

	for (int i=0; i<N; i++) {
		int d = nList[i].first, t = nList[i].second;

		result += t;

		while (++day <= d) {
			result += (day % 7 == 0);
			result += ((day + 1) % 7 == 0);
		}
		
		day--;

		if (day * 2 < result) {
			cout << -1;
			return 0;
		}
	}

	cout << max(result - day, 0);
}