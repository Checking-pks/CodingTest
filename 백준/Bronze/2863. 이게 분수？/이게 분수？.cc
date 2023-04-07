#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	double a, b, c, d, min = 0, result = -1;
	cin >> a >> b >> c >> d;

	if (min < a/c+b/d) {
		min = a/c+b/d;
		result = 0;
	}
	if (min < c/d+a/b) {
		min = c/d+a/b;
		result = 1;
	}
	if (min < d/b+c/a) {
		min = d/b+c/a;
		result = 2;
	}
	if (min < b/a+d/c) {
		min = b/a+d/c;
		result = 3;
	}

	cout << result;
}