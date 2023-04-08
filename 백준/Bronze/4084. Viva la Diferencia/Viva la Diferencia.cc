#include <iostream>
#include <cmath>

using namespace std;

int unify(long a, long b, long c, long d) {
	if (a == b && b == c && c == d) return 0;
	
	long long newA, newB, newC, newD;
	newA = abs(a-b);
	newB = abs(b-c);
	newC = abs(c-d);
	newD = abs(d-a);

	if (!(newA == newB && newB == newC && newC == newD))
		return unify(newA, newB, newC, newD) + 1;
}

int main() {
	long long a, b, c, d;
	cin >> a >> b >> c >> d;

	while (a + b + c + d) {
		cout << unify(a, b, c, d) << "\n";
		cin >> a >> b >> c >> d;
	}
}