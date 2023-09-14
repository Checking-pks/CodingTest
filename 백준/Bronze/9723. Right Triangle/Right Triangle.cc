#include <iostream>

using namespace std;

int main() 
{
	int testcase;
	cin >> testcase;

	for (int i=1; i<=testcase; i++) {
		long long a, b, c;
		cin >> a >> b >> c;

		if (a < b) swap(a, b);
		if (a < c) swap(a, c);
		
		cout << "Case #" << i << ": ";
		cout << ((a*a == b*b + c*c) ? "YES\n" : "NO\n");
	}
}