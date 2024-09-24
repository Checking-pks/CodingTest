#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll n, res;
    cin >> n;
    
    res = n;
    
    for (ll p = 2; p * p <= n; p++)
	{
	    if (n % p) continue;
		
		res -= res / p;
		
		while (n % p == 0)
			n /= p;
	}

	if (n > 1)
		res -= res / n;
    
    cout << res;
}