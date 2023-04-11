#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int n, i=7, min=100, sum=0;
		while (i--) {
			cin >> n;
			if (!(n&1)) {
				sum += n;
				if (min > n) 
					min = n;
			}
		}
		cout << sum << " " << min << "\n";
	}
}