#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, result=0, last;
	cin >> n >> last;
	cout << 0;

	for (int i=1, now; i<n; i++) {
		cin >> now;
		result = max(result, now - last);
		last = min(last, now);
		cout << " " << result;
	}
}