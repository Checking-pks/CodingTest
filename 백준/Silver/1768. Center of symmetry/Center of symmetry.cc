#include <iostream>

using namespace std;

typedef long long ll;

bool solve()
{
	ll n, xSum = 0, ySum = 0;
	cin >> n;

	for (ll i = 0, x, y; i < n; i++)
	{
		cin >> x >> y;
		xSum += x;
		ySum += y;
	}

	return (xSum % n == 0 && ySum % n == 0);
}

int main()
{
	ll c;
	cin >> c;

	while (c--)
		cout << (solve() ? "yes\n" : "no\n");
}