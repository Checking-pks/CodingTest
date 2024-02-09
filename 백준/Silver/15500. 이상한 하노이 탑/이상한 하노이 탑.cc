#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int N;
	cin >> N;

	vector<pair<int, int>> result;
	vector<bool> numList(N);
	vector<stack<int>> towerList(2);
	for (int i=0, now; i<N; i++) {
		cin >> now;
		towerList[0].push(now-1);
	}

	while (numList.size()) {
		int nowIdx = numList.size()-1;
		int nowTower = numList[nowIdx];
		while (towerList[nowTower].top() != nowIdx) {
			int now = towerList[nowTower].top();
			towerList[!nowTower].push(now);
			towerList[nowTower].pop();
			numList[now] = !numList[now];
			result.push_back({nowTower+1, !nowTower+1});
		}

		numList.pop_back();
		towerList[nowTower].pop();
		result.push_back({nowTower+1, 3});
	}

	cout << result.size() << "\n";
	for (int i=0; i<result.size(); i++) {
		cout << result[i].first << " " << result[i].second << "\n";
	}
}