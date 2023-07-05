#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

vector<int> numList;
list<vector<int>> result;

void combination(int m, int pos, vector<int> resultList) {
	if (!m) return;

	for (int i=pos; i<numList.size(); i++) {
		vector<int> nowResult = resultList;
		nowResult.push_back(numList[i]);
		
		if (m == 1) 
			result.push_back(nowResult);
		else 
			combination(m-1, i, nowResult);
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	
	numList = vector<int>(n, 0);

	for (int i=0; i<n; i++)
		cin >> numList[i];

	sort(numList.begin(), numList.end());
	numList.erase(unique(numList.begin(), numList.end()), numList.end());

	combination(m, 0, vector<int>());

	result.sort();
	result.unique();

	for (vector <int> n:result) {
		for (int i=0; i<n.size(); i++) {
			cout << n[i] << " ";
		}

		cout << "\n";
	}
}