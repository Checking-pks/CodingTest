#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, result=-1;
	cin >> N;

	vector<int> aList(N), bList(N), xList(N);

	for (int i=0; i<N; i++)	cin >> aList[i];
	for (int i=0; i<N; i++)	cin >> bList[i];
	for (int i=0, now; i<N; i++)	{
		cin >> xList[i];

		if (abs(bList[i] - aList[i]) % xList[i]) {
			result = -1;
			break;
		} else {
			now = abs(bList[i] - aList[i]) / xList[i];
		}

		if (result == -1) {
			result = now;
			continue;
		}

		if (abs(now - result) % 2) {
			result = -1;
			break;
		} else {
			result = max(result, now);
		}
	}

	cout << result;
}