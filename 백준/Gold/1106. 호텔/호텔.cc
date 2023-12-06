#include <iostream>
#include <vector>

using namespace std;

int main() {
	int C, N;
	cin >> C >> N;

	vector<int> numList(C+1, 100001);
	vector<pair<int, int>> values(N);

	numList[0] = 0;
	
	for (int i=0; i<N; i++) 
		cin >> values[i].first >> values[i].second;

	for (int i=0, nowValue; i<=C; i++) {
		for (int j=0; j<N; j++) {
			nowValue = i + values[j].second;
			if (nowValue > C) nowValue = C;
			numList[nowValue] = min(numList[nowValue], numList[i] + values[j].first);
		}
	}

	cout << numList[C];
}