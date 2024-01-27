#include <iostream>

using namespace std;

int main() {
	long long N, K;
	cin >> N >> K;

	long long sum = 0, M=0;
	for (int i=0, now; i<N; i++) {
		cin >> now;
		sum += now;
		M = max(M, now - i*K);
	}

	cout << N*(N-1)/2*K + N*M - sum;
}