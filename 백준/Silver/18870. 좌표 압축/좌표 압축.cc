#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	list <pair<int, int>> numList;
	int times;
	cin >> times;

	for (int i=0; i<times; i++) {
		int num;
		cin >> num;

		numList.push_back({num, i});
	}

	numList.sort();

	vector<int> result(times);
	int nowRank = 0, precedingNum = numList.front().first;
	
	for (auto nowNum:numList) {
		if (precedingNum == nowNum.first)
			result[nowNum.second] = nowRank;
		else {
			precedingNum = nowNum.first;
			nowRank++;
			result[nowNum.second] = nowRank;
		}
	}

	for (int n:result) 
		cout << n << " ";
}