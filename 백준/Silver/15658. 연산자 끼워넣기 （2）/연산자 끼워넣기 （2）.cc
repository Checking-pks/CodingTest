#include <iostream>
#include <vector>

using namespace std;

void simulate(vector<int> &numList, vector<int> sign, int idx, int value, pair<int, int> &result) {
	if (idx == numList.size()) {
		result.first = max(result.first, value);
		result.second = min(result.second, value);
		return;
	}

	for (int i=0; i<4; i++) {
		if (!sign[i]) continue;
		sign[i]--;
		int newValue;
		if (i==0) newValue = value + numList[idx];
		if (i==1) newValue = value - numList[idx];
		if (i==2) newValue = value * numList[idx];
		if (i==3) newValue = value / numList[idx];
		
		simulate(numList, sign, idx+1, newValue, result);
		sign[i]++;
	}
}

int main() {
	int N;
	cin >> N;

	pair<int, int> result = {-1000000001, 1000000001};
	vector<int> numList(N), sign(4);
	for (int i=0; i<N; i++) cin >> numList[i];
	for (int i=0; i<4; i++) cin >> sign[i];

	simulate(numList, sign, 1, numList[0], result);
	cout << result.first << "\n" << result.second;
}