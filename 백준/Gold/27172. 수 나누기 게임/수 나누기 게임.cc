#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int N, maxNum=0;
	cin >> N;

	unordered_map<int, int> numList;

	vector<int> result(N);
	for (int i=0, now; i<N; i++) {
		cin >> now;
		numList[now] = i;
		maxNum = max(maxNum, now);
	}

	for (auto now : numList) {
		for (int i=2; i*now.first<=maxNum; i++) {
			if (numList.find(i*now.first) == numList.end())
				continue;

			result[now.second]++;
			result[numList[i*now.first]]--;
		}
	}

	for (int i=0; i<N; i++)
		cout << result[i] << " ";
}