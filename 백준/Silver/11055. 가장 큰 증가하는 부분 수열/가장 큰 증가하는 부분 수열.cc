#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, result=0;
	cin >> N;

	vector<pair<int, int>> nList;
	for (int i=0, now; i<N; i++) {
		cin >> now;

		int sumMax = 0;
		for (int j=0; j<nList.size(); j++) {
			if (nList[j].first >= now) continue;
			sumMax = max(sumMax, nList[j].second);
		}

		nList.push_back({now, sumMax + now});
		result = max(result, nList.back().second);
	}

	cout << result;
}