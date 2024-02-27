#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int N;
	cin >> N;

	vector<pair<int, int>> nList(N), seq(1, {-1, 0});
	vector<int> idxList(N);
	
	for (int i=0; i<N; i++)
		cin >> nList[i].first >> nList[i].second;

	sort(nList.begin(), nList.end());
	
	for (int i=0, left, right; i<N; i++) {
		left = 0, right = seq.size();

		while (left <= right) {
			int mid = (left + right) / 2;

			if (seq[mid].second < nList[i].second)
				left = mid + 1;
			else
				right = mid - 1;
		}

		if (left < seq.size()) {
			idxList[i] = seq[left-1].first;
			seq[left] = {i, nList[i].second};
		} else {
			idxList[i] = seq.back().first;
			seq.push_back({i, nList[i].second});
		}
	}

	vector<int> resultList;
	for (int idx = seq.back().first; idx != -1;) {
		resultList.push_back(nList[idx].first);
		idx = idxList[idx];
	}

	sort(resultList.begin(), resultList.end());
	
	cout << N - resultList.size();
	for (int i=0, j=0; i<N; i++) {
		if (nList[i].first == resultList[j]) {
			j++;
			continue;
		}
		cout << "\n" << nList[i].first;
	}
}