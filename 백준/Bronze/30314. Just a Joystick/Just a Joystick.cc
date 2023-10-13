#include <iostream>

using namespace std;

int main() {
	int n, result=0;
	cin >> n;
	string before, after;
	cin >> before >> after;

	for (int i=0; i<n; i++) {
		int t1 = before[i] - after[i];
		int t2 = after[i] - before[i];

		if (t1 < 0) t1 += 26;
		if (t2 < 0) t2 += 26;

		result += min(t1, t2);
	}

	cout << result;
}