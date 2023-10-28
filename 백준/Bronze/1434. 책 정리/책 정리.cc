#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int result=0;

	for (int i=0, now; i<n; i++) {
		cin >> now;
		result += now;
	}

	for (int i=0, now; i<m; i++) {
		cin >> now;
		result -= now;
	}

	cout << result;
}