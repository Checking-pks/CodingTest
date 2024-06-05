#include <iostream>

using namespace std;

int main() {
	int N, aSum = 0, bSum = 0;
	cin >> N;

	for (int i = 0, a; i < N; i++) {
		cin >> a;
		aSum += a;
	}

	for (int i = 0, b; i < N; i++) {
		cin >> b;
		bSum += b;
	}

	cout << bSum << " " << aSum;
}