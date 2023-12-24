#include <iostream>
#include <set>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	priority_queue<pair<int, int>> jewelryList;
	multiset<int> bagList;
	long long result = 0;
	
	for (int i=0, weight, price; i<n; i++) {
		cin >> weight >> price;
		jewelryList.push({price, weight});
	}

	for (int i=0, now; i<k; i++) {
		cin >> now;
		bagList.insert(now);
	}

	for (int i=0; i<n; i++) {
		pair<int, int> nowJewelry = jewelryList.top();
		jewelryList.pop();

		auto iter = bagList.lower_bound(nowJewelry.second);
		if (iter == bagList.end()) continue;

		bagList.erase(iter);
		result += nowJewelry.first;
	}

	cout << result;
}