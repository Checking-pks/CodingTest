#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXIMUM = 2'000'000'001;

int main() {
	int N, result = MAXIMUM;
	cin >> N;

	vector<pair<int, int>> nList(N);
	for (int i=0; i<N; i++)
		cin >> nList[i].first >> nList[i].second;

	sort(nList.begin(), nList.end());

	for (int i=1; i<N; i++) {
		int p1 = nList[i-1].first;
		int b1 = nList[i-1].second;
		int p2 = nList[i].first;
		int b2 = nList[i].second;

		int dist = p2-p1-1;
		int spread1 = b1/2, spread2 = b2/2;

		if (dist >= spread1 + spread2) continue;
		int heatingTime;
		if (dist <= 2*min(spread1, spread2)) {
			heatingTime = dist/2;
		} else {
			heatingTime = min(spread1, spread2);
			dist -= 2*min(spread1, spread2);
			heatingTime += dist;
		}
		
		result = min(result, heatingTime);
	}

	if (result == MAXIMUM)
		cout << "forever";
	else
		cout << result;
}