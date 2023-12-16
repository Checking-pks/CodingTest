#include <iostream>

using namespace std;

const int DIVISION = 1000000007;

int fib(int n) {
	pair<int, int> f = {1, 1};

	for (int i=3; i<=n; i++) {
		f = {
			f.second,
			(f.first + f.second) % DIVISION
		};
	}
    
	return f.second;
}

int main() {
	int n;
	cin >> n;
	cout << fib(n) << " " << n-2;
}