#include <iostream>

using namespace std;

typedef long long ll;

ll simulate(ll x, bool isNeg)
{
	for (ll i = 2; i * i <= x; i++)
	{
		for (ll j = i * i, now = 2; j <= x; j *= i, now++)
		{
			if (j == x)
			{
				if (!isNeg)
					return now;
				else if (now & 1)
					return now;
			}
		}
	}
		
	return 1;
}

int main()
{
	ll x, result;
	cin >> x;

	while (x)
	{
		cout << simulate(x * (x < 0 ? -1 : 1), x < 0) << "\n";
		cin >> x;
	}
}