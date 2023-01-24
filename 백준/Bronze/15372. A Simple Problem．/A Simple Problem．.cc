#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;

	for (int i=0; i<t; i++) {
		long long n;
		cin >> n;
		cout << n * n << "\n";
	}
}