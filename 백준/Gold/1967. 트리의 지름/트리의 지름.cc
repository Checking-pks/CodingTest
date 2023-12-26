#include <iostream>
#include <vector>

using namespace std;

vector<vector<pair<int, int>>> lines;
vector<bool> alreadyVisit;

int dfs(int nowSpot) {
	alreadyVisit[nowSpot] = true;
	
	int now = 0;
	
	for (int i=0; i<lines[nowSpot].size(); i++) {
		int nextSpot = lines[nowSpot][i].first;
		int nextValue = lines[nowSpot][i].second;
		
		if (alreadyVisit[nextSpot]) continue;
		
		now = max(now, nextValue + dfs(nextSpot));
		alreadyVisit[nextSpot] = false;
	}
	
	return now;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int spot, result=0;
	cin >> spot;

	lines = vector<vector<pair<int, int>>>(spot+1);
	alreadyVisit = vector<bool>(spot+1);

	for (int i=0, start, end, value; i<spot-1; i++) {
		cin >> start >> end >> value;
		lines[start].push_back({end, value});
		lines[end].push_back({start, value});
	}

	for (int i=1; i<=spot; i++) {
		if (lines[i].size() > 1) continue;
		result = max(result, dfs(i));
	}

	cout << result;
}