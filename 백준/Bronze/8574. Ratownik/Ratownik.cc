#include <iostream>

using namespace std;

int main() 
{
	long long num, range, x, y, result=0;
	cin >> num >> range >> x >> y;

	while (num--) {
		long long nowX, nowY;
		cin >> nowX >> nowY;

		result += (
			(nowX-x) * (nowX-x) +
			(nowY-y) * (nowY-y)
			> range * range
		);
	}

	cout << result;
}