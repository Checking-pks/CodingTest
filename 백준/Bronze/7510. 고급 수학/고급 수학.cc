#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=1; i<=testcase; i++) {
		cout << "Scenario #" << i << ":\n";
		int a, b, c;
		cin >> a >> b >> c;

		int m = max(a, max(b, c));

		if (a*a+b*b+c*c == 2*m*m)
			cout << "yes\n\n";
		else
			cout << "no\n\n";
	}
}