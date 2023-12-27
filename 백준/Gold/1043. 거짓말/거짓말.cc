#include <iostream>
#include <vector>

using namespace std;

void input(int &n, int &m, int &k, vector<int> &kList, vector<vector<int>> &pList) {
	cin >> n >> m >> k;
	kList = vector<int>(k);
	pList = vector<vector<int>>(m);
	for (int i=0; i<k; i++)
		cin >> kList[i];
	for (int i=0, now; i<m; i++) {
		cin >> now;
		pList[i] = vector<int>(now);
		for (int j=0; j<now; j++)
			cin >> pList[i][j];
	}
}

int simulate(int &peopleNum, vector<int> &knowList, vector<vector<int>> &partyList) {
	if (knowList.empty())
		return partyList.size();

	vector<vector<bool>> field(peopleNum+1, vector<bool>(peopleNum+1, false));
	vector<bool> visit(peopleNum+1);
	for (int i=0; i<partyList.size(); i++) {
		for (int j=0; j<partyList[i].size()-1; j++) {
			for (int k=j+1; k<partyList[i].size(); k++) {
				int p1 = partyList[i][j], p2 = partyList[i][k];
				field[p1][p2] = true;
				field[p2][p1] = true;
			}
		}
	}

	while (knowList.size()) {
		int now = knowList.back();
		knowList.pop_back();
		visit[now] = true;

		for (int i=1; i<=peopleNum; i++) {
			if (visit[i]) continue;
			if (!field[now][i]) continue;
			knowList.push_back(i);
		}
	}

	int result = 0;
	for (int i=0; i<partyList.size(); i++) {
		bool isTrueStory = true;
		for (int j=0; isTrueStory && j<partyList[i].size(); j++) 
			isTrueStory = !visit[partyList[i][j]];
		result += isTrueStory;
	}

	return result;
}

int main() {
	int peopleNum, partyNum, knowNum;
	vector<int> knowList;
	vector<vector<int>> partyList;

	input(peopleNum, partyNum, knowNum, knowList, partyList);
	cout << simulate(peopleNum, knowList, partyList);
}