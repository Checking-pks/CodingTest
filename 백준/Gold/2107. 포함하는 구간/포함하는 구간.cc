#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int num, result=0;
	cin >> num;
	
	vector<pair<int, int>> numList(num, {0, 0});

	for (int i=0; i<num; i++) {
		cin >> numList[i].first >> numList[i].second;
	}

	sort(numList.begin(), numList.end());
	
	for (int i=0; i<num; i++) {
		int now = 0;
		
		for (int j=i+1; j<num && numList[j].first<numList[i].second; j++) {
			now += numList[i].second > numList[j].second;
		}

		result = max(result, now);
	}

	cout << result;
}