#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int testcase;
	cin >> testcase;

	while (testcase--) {
		long long result=0;
		int a, b;
		cin >> a >> b;

		for (int i=1; b<=a; i+=2) {
			result += i;
			a -= b;
		}

		cout << result << "\n";
	}
}