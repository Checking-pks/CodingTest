#include <iostream>

using namespace std;

long long fib(int num, int div) {
	pair<long long, long long> result = {1, 1};
	
	while (num-- > 0)
	{
		pair<long long, long long> newResult = {
			result.second % div,
			(result.first + result.second) % div
		};

		result = newResult;
	}

	return result.second % div;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int times;
	cin >> times;

	for (int i=1, num, div; i<=times; i++) {
		cin >> num >> div;
		cout << "Case #" << i << ": " << fib(num-2, div) << "\n";
	}
}