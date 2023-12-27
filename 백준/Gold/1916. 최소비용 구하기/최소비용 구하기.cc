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

int getSmallIdx(vector<int> &priceList, vector<bool> &visit) {
	int min = INF, idx = 0;
	for (int i=1; i<priceList.size(); i++) {
		if (!visit[i] && min > priceList[i]) {
			min = priceList[i];
			idx = i;
		}
	}
	return idx;
}

int simulate(int &cityNum, vector<vector<int>> &field, int &cityStart, int &cityEnd) {
	vector<int> priceList = field[cityStart];
	vector<bool> visit(cityNum+1);
	priceList[cityStart] = 0;
	visit[cityStart] = true;
	
	for (int i=0; i<cityNum; i++) {
		int now = getSmallIdx(priceList, visit);
		visit[now] = true;
		for (int j=1; j<=cityNum; j++) {
			if (visit[j]) continue;
	
			priceList[j] = min(priceList[j],
				priceList[now] + field[now][j]);
		}
	}

	return priceList[cityEnd];
}

int main() {
	int cityNum, busNum;
	vector<vector<int>> field;
	int cityStart, cityEnd;
	
	input(cityNum, busNum, field, cityStart, cityEnd);
	cout << simulate(cityNum, field, cityStart, cityEnd);
}