#include <iostream>
using namespace std;

int main() {
	long long N, result = 0;
	cin >> N;

	for (long long i = 1; i < N; i <<= 1)
		if (!(N & i))
			result += i;

	if (result)
		cout << 2 << "\n" << result << "\n" << N;
	else
		cout << 1 << "\n" << N;
}