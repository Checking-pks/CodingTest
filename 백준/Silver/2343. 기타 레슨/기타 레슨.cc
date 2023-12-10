#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, M, result=0;
	cin >> N >> M;
	
	vector<int> numList(N);
	int start=0, end=0;

	for (int i=0; i<N; i++) {
		cin >> numList[i];
		start = max(start, numList[i]);
		end += numList[i];
	}

	while (start <= end) {
		int count = 0, now = 0;
		int mid = (start + end) / 2;

		for (int i=0; i<N; i++) {
			if (now + numList[i] > mid) {
				now = 0;
				count++;
			}
			now += numList[i];
		}

		if (now != 0) count++;

		if (count > M)
			start = mid + 1;
		else
			end = mid - 1;
	}

	cout << start;
}