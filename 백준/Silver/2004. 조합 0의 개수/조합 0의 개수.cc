#include <iostream>

using namespace std;

int main() {
	long long N, M;
	cin >> N >> M;

	if (N/2 < M) M = N - M;

	long long twoNum=0, fiveNum=0, NM = N - M;

	for (long long i=2; i<=N; i*=2) {
		twoNum += N / i;
		twoNum -= NM / i;
	}

	for (long long i=5; i<=N; i*=5) {
		fiveNum += N / i;
		fiveNum -= NM / i;
	}

	for (long long i=2; i<=M; i*=2) twoNum -= M / i;
	for (long long i=5; i<=M; i*=5) fiveNum -= M / i;

	long long result = min(twoNum, fiveNum);
	cout << (result > 0 ? result : 0);
}