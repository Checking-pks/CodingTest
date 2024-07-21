#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.first != b.first)
		return a.first < b.first;
	return a.second > b.second;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int M, result = 0, m = 0;
	cin >> M;

	vector<pair<int, int>> lineList;
	for (int l, r; true;) {
		cin >> l >> r;

		if (l > r) swap(l, r);

		if (l == 0 && r == 0) break;
		if (l == r) continue;
		if (r <= 0) continue;
		if (l < 0) l = 0;

		lineList.push_back({l, r});
	}

	sort(lineList.begin(), lineList.end(), cmp);
	lineList.push_back({50'001, 50'001});

	for (int i=0, now = 0; i<lineList.size(); i++) {
		if (lineList[i].first <= m) {
			now = max(now, lineList[i].second);
			continue;
		}

		m = now;
		result++;

		if (m >= M) break;

		if (m < lineList[i].first) {
			if (m < M)
				result = 0;
			break;
		}

		i--;
	}

	if (m >= M)
		cout << result;
	else
		cout << 0;
}