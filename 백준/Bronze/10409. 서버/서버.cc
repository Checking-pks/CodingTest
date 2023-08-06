#include <iostream>

using namespace std;

int main() {
	int n, T, result = 0;
	cin >> n >> T;

	for (int i=0, num; i<n; i++) {
		cin >> num;
		T -= num;
		result += (T >= 0);
	}

	cout << result;
}