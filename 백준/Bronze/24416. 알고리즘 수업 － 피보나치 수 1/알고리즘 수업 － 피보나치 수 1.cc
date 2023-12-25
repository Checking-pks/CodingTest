#include <iostream>

using namespace std;

int fib(int n) {
	pair<int, int> f = {1, 1};
	for (int i=3; i<=n; i++) {
		f = {
			f.second,
			f.first + f.second
		};
	}

	return f.second;
}

int main() {
	int n;
	cin >> n;
	cout << fib(n) << " " << n-2;
}