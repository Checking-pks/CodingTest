#include <iostream>

using namespace std;

int main() {
	int N, K, now=0, result=0;
	cin >> N >> K;
	for (int i=0, a, b; i<N; i++) {
		cin >> a >> b;
		now += a - b;
		if (now > K)
			result = max(result, now - K);
	}

	cout << result;
}
