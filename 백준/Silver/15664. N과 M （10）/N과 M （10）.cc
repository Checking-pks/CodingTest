#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> numList(N);
	for (int i=0; i<N; i++)
		cin >> numList[i];

	sort(numList.begin(), numList.end());

	vector<bool> pList(N);
	for (int i=0; i<M; i++)
		pList[i] = true;

	list<vector<int>> result;
	do {
		vector<int> now;
		for (int i=0; i<N; i++) {
			if (!pList[i]) continue;
			now.push_back(numList[i]);
		}

		result.push_back(now);
	} while(prev_permutation(pList.begin(), pList.end()));

	result.sort();
	result.unique();

	for (auto now:result) {
		for (int i=0; i<now.size(); i++)
			cout << now[i] << " ";
		cout << "\n";
	}
}