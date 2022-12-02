#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {
	int cityNum, maxMove;
	long long result = 0;
	vector<int> roadLength;
	list<pair<int, int>> oilPrice;

	// input
	cin >> cityNum;

	for (int i=0, nowLength; i<cityNum - 1; i++) {
		cin >> nowLength;
		roadLength.push_back(nowLength);
	}

	for (int i=0, nowPrice; i<cityNum; i++) {
		cin >> nowPrice;
		oilPrice.push_back({nowPrice, i});
	}

	// simulate
	maxMove = cityNum - 1;
	oilPrice.sort();

	for (pair<int, int> nowCheapPrice:oilPrice) {
		if (maxMove == 0) break;
		if (maxMove <= nowCheapPrice.second) continue;

		for (int i=nowCheapPrice.second; i<maxMove; i++) 
			result += 1ll * roadLength[i] * nowCheapPrice.first;

		maxMove = nowCheapPrice.second;
	}
	
	// output
	cout << result;
}