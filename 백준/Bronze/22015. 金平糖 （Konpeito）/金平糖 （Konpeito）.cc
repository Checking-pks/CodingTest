#include <iostream>
#include <vector>

using namespace std;

int main() {
	int a, b, c, max = 0;
	cin >> a >> b >> c;

	if (max < a) max = a;
	if (max < b) max = b;
	if (max < c) max = c;

	cout << max * 3 - (a + b + c);
}