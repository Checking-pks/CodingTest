#include <iostream>

using namespace std;

#define ll long long
#define spot pair<ll, ll>
#define	x first
#define y second

ll ccw(spot p1, spot p2, spot p3)
{
	ll res = (p1.x * p2.y + p2.x * p3.y + p3.x * p1.y) - (p2.x * p1.y + p3.x * p2.y + p1.x * p3.y);

	if (res > 0) return 1;
	if (res < 0) return -1;
	return 0;
}

int calc(spot p1, spot p2, spot p3, spot p4)
{
	ll p12 = ccw(p1, p2, p3) * ccw(p1, p2, p4);
	ll p34 = ccw(p3, p4, p1) * ccw(p3, p4, p2);

	if (!p12 && !p34)
	{
		if (p1 > p2) swap(p1, p2);
		if (p3 > p4) swap(p3, p4);

		return p3 <= p2 && p1 <= p4;
	}

	return p12 <= 0 && p34 <= 0;
}

int main()
{
	spot p1, p2, p3, p4;

	cin >> p1.x >> p1.y;
	cin >> p2.x >> p2.y;
	cin >> p3.x >> p3.y;
	cin >> p4.x >> p4.y;

	cout << calc(p1, p2, p3, p4);
}