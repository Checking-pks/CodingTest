#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

int main() {
	unordered_map<int, int> alreadyVisit;
	list<pair<int, int>> bucket;
	
	int start, target, minTime = -1, pathNum = 0;
	cin >> start >> target;

	bucket.push_back({start, 0});

	if (start > target) {
		minTime = start - target;
		pathNum = 1;
	}

	while(bucket.size() && !pathNum) {
		pair<int, int> nowNum = bucket.front();
		bucket.pop_front();

		if (nowNum.first < 0) continue;
		if (nowNum.first > 100000) continue;
		if (alreadyVisit.find(nowNum.first) != alreadyVisit.end() && alreadyVisit[nowNum.first] < nowNum.second) continue;
		alreadyVisit[nowNum.first] = nowNum.second;
		
		if (nowNum.first == target) {
			minTime = nowNum.second;
			pathNum++;
		}

		bucket.push_back({nowNum.first + 1, nowNum.second + 1});
		bucket.push_back({nowNum.first - 1, nowNum.second + 1});
		bucket.push_back({nowNum.first * 2, nowNum.second + 1});
	}

	for (pair<int, int> b : bucket) {
		if (b.second > minTime) break;
		if (b.first == target) pathNum++;
	}

	cout << minTime << "\n" << pathNum;
}