#include <iostream>

using namespace std;

int main() {
	int n, result=0, last;
	cin >> n >> last;
	for (int i=1, now; i<n; i++) {
		cin >> now;
		result = max(result, now - last);
		last = min(last, now);
	}

	cout << result;
}