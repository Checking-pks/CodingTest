#include <iostream>

using namespace std;

int main() 
{
	int testcase;
	cin >> testcase;

	for (int i=1; i<=testcase; i++) {
		int a, b, c;
		cin >> a >> b >> c;

		int m = max(a, max(b, c));

		cout << "Case #" << i << ": ";


		if (m >= a+b+c-m)
			cout << "invalid!\n";
		else if (a == b && b == c)
			cout << "equilateral\n";
		else if (a == b || b == c || a == c)
			cout << "isosceles\n";
		else
			cout << "scalene\n";
	}
}