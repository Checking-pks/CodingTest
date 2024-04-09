#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	long long left = 1, right = 1e+12, mid;
	vector<long long> nList(N);
	for (int i=0; i<N; i++) {
		cin >> nList[i];
		right = min(right, nList[i] * M);
	}
	
	while (left <= right) {
		int now = 0;
		mid = (left + right) / 2;

		for (int i=0; i<N; i++) 
			now += mid / nList[i];

		if (now < M)
			left = mid + 1;
		else
			right = mid - 1;
	}

	cout << left;
}