#include <iostream>

using namespace std;


int main() {
	int a, b, c, d, ave;
	cin >> a >> b >> c >> d >> ave;
	int sum = a + b + c + d;

	if (ave*4 - sum > 0) cout << ave * 4 - sum;
	else cout << 0;
}