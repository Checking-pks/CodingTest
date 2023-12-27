#include <iostream>
#include <vector>

using namespace std;

vector<vector<pair<int, int>>> lines;
vector<bool> alreadyVisit;

pair<int, int> dfs(int nowSpot) {
	alreadyVisit[nowSpot] = true;

	int resultValue = 0, resultSpot = nowSpot;

	for (int i=0; i<lines[nowSpot].size(); i++) {
		int nextSpot = lines[nowSpot][i].first;
		int nextValue = lines[nowSpot][i].second;

		if (alreadyVisit[nextSpot]) continue;
		auto now = dfs(nextSpot);
		if (resultValue < nextValue + now.first) {
			resultValue = nextValue + now.first;
			resultSpot = now.second;
		}
		alreadyVisit[nextSpot] = false;
	}

	return {resultValue, resultSpot};
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int spot, result=0;
	cin >> spot;

	lines = vector<vector<pair<int, int>>>(spot+1);
	alreadyVisit = vector<bool>(spot+1);

	for (int i=0, nowSpot, nextSpot, value; i<spot; i++) {
		cin >> nowSpot >> nextSpot;
		while (nextSpot != -1) {
			cin >> value;
			lines[nowSpot].push_back({nextSpot, value});
			cin >> nextSpot;
		}
	}

	int spot1 = dfs(1).second;
	alreadyVisit = vector<bool>(spot+1);
	cout << dfs(spot1).first;
}