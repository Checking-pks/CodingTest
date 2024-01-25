#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long N, zero=0, one=0;
	cin >> N;

	for (int i=0, now; i<N; i++) {
		cin >> now;
		zero += (now == 0);
		one  += (now == 1);
	}

	long long result = zero * one;
	for (int i=1; i<=zero; i++)
		result += N - i;

	cout << result;
}