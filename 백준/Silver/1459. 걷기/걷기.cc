#include <iostream>

using namespace std;

int main()
{
	long long X, Y, W, S, result = 0;
	cin >> X >> Y >> W >> S;

	long long dif = abs(X - Y);
	
	if (dif / 2) result += (dif / 2) * min(2 * W, 2 * S);
	if (dif & 1) result += W;

	result += min(X, Y) * min(2 * W, S);

	cout << result;
}