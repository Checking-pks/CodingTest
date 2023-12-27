#include <iostream>
#include <vector>

const int INF = 100000001;

using namespace std;

void input(int &n, int &m, vector<vector<int>> &f, int &s, int &e) {
	cin >> n >> m;
	f = vector<vector<int>>(n+1, vector<int>(n+1, INF));
	for (int i=0, b1, b2, v; i<m; i++) {
		cin >> b1 >> b2 >> v;
		f[b1][b2] = min(f[b1][b2], v);
	}
	cin >> s >> e;
}

int getSmallIdx(vector<pair<int, int>> &priceList, vector<bool> &visit) {
	int min = INF, idx = 0;
	for (int i=1; i<priceList.size(); i++) {
		if (!visit[i] && min > priceList[i].first) {
			min = priceList[i].first;
			idx = i;
		}
	}
	return idx;
}

vector<pair<int, int>> simulate(int &cityNum, vector<vector<int>> &field, int &cityStart, int &cityEnd) {
	vector<pair<int, int>> priceList(cityNum+1);
	vector<bool> visit(cityNum+1);
	
	for (int i=1; i<=cityNum; i++) 
		priceList[i] = {field[cityStart][i], cityStart};
	priceList[cityStart].first = 0;
	visit[cityStart] = true;

	for (int i=0; i<cityNum; i++) {
		int now = getSmallIdx(priceList, visit);
		visit[now] = true;
		for (int j=1; j<=cityNum; j++) {
			if (visit[j]) continue;
			if (priceList[j].first > priceList[now].first + field[now][j]) {
				priceList[j] = {priceList[now].first + field[now][j], now};
			}
		}
	}

	return priceList;
}

void output(int cityEnd, vector<pair<int, int>> result) {
	cout << result[cityEnd].first << "\n";
	vector<int> route = {cityEnd};

	for (int nowPos=cityEnd; nowPos != result[nowPos].second;) {
		nowPos = result[nowPos].second;
		route.push_back(nowPos);
	}

	cout << route.size() << "\n";
	for (int i=route.size()-1; i>=0; i--)
		cout << route[i] << " ";
}

int main() {
	int cityNum, busNum;
	vector<vector<int>> field;
	int cityStart, cityEnd;

	input(cityNum, busNum, field, cityStart, cityEnd);
	auto result = simulate(cityNum, field, cityStart, cityEnd);
	output(cityEnd, result);
}