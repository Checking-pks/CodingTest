#include <iostream>
#include <vector>

using namespace std;

const int MIN = -1'000'000'001;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int N;
	cin >> N;
	
	vector<pair<int, int>> seq(1, {-1, MIN});
	vector<int> idxList(N), nList(N);
	for (int i=0, now, left, right; i<N; i++) {
		cin >> now;
		nList[i] = now;

		left = 0, right = seq.size();

		while (left < seq.size() && left <= right) {
			int mid = (left + right) / 2;
			
			if (seq[mid].second < now)
				left = mid + 1;
			else 
				right = mid - 1;
		}

		if (left < seq.size()) {
			idxList[i] = seq[left-1].first;
			seq[left] = {i, now};
		} else {
			idxList[i] = seq.back().first;
			seq.push_back({i, now});
		}
	}

	vector<int> resultList;
	for (int idx = seq.back().first; idx != -1;) {
		resultList.push_back(nList[idx]);
		idx = idxList[idx];
	}

	cout << resultList.size() << "\n";
	for (int i=resultList.size()-1; i>=0; i--)
		cout << resultList[i] << " ";
}