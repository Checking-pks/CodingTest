#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (!(a&1) && !(b&1) && !(c&1)) {
		cout << a * b * c;
	} else {
		int r=1;
		if (a&1) r*=a;
		if (b&1) r*=b;
		if (c&1) r*=c;
		cout << r;
	}
}