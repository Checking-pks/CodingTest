#include <iostream>
#include <vector>

using namespace std;

int main() {
	long long N, B, C, sum=0, result=0;
	cin >> N >> B >> C;

	vector<long long> numList(N+2);
	for (long long i=0; i<N; i++) {
		cin >> numList[i];
		sum += numList[i];
	}

	if (B <= C) {
		cout << sum * B;
		return 0;
	}

	for (long long i=0; i<N; i++) {
		if (numList[i+1] > numList[i+2]) {
			long long two = min(numList[i], numList[i+1] - numList[i+2]);
			numList[i]   -= two;
			numList[i+1] -= two;
			result += two * (B + C);
		} 

		long long three = min(numList[i], min(numList[i+1], numList[i+2]));
		numList[i]   -= three;
		numList[i+1] -= three;
		numList[i+2] -= three;
		result += three * (B + 2*C);

		result += numList[i] * B;
	}

	cout << result;
}