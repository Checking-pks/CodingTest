#include <iostream>

using namespace std;

int main() {
	int n;
	long long result=0;
	cin >> n;

	for (int i=0; i<n; i++) {
		for (int j=0, now; j<n; j++) {
			cin >> now;
			result += now;
		}
	}

	cout << result;
}