#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<pair<int, int>> scoreList(8, {0, 0});
	vector<int> resultNum(5, 0);
	int resultTotal = 0;

	for (int i=0; i<8; i++) {
		cin >> scoreList[i].first;
		scoreList[i].second = i+1;
	}

	sort(scoreList.begin(), scoreList.end(), greater<>());

	for (int i=0; i<5; i++) {
		resultTotal += scoreList[i].first;
		resultNum[i] = scoreList[i].second;
	}

	sort(resultNum.begin(), resultNum.end());

	cout << resultTotal << "\n";
	for (int n:resultNum) cout << n << " ";
}