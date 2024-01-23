#include <iostream>
#include <set>

using namespace std;

int main() {
	int N, M, result = 1000000001;
	cin >> N >> M;

	set<int> numList;

	for (int i=1; i<=1001; i++) 
		numList.insert(i);

	for (int i=0, now; i<M; i++) {
		cin >> now;
		numList.erase(now);
	}

	for (int i:numList) {
		for (int j:numList) {
			for (int k:numList) {
				result = min(result, abs(N - i*j*k));
				if (N < i*j*k) break;
			}
			if (N < i*j) break;
		}
	}

	cout << result;
}