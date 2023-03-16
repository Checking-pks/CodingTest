#include <iostream>

using namespace std;

int main() {
	int h1, b1;
	int h2, b2;
	int result;

	cin >> h1 >> b1 >> h2 >> b2;
	result = h1 * 3 + b1 - (h2*3+b2);

	if (result == 0)
		cout << "NO SCORE";
	else if (result > 0)
		cout << "1 " << result;
	else
		cout << "2 " << -result;
}