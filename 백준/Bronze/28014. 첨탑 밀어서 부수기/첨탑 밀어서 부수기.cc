#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, result=0;
	cin >> n;

	for (int i=0, now, last=0; i<n; i++) {
		cin >> now;

		if (now >= last) result++;
		last = now;
	}

	cout << result;
}