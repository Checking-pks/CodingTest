#include <iostream>

using namespace std;

typedef long long ll;
const ll DIV = 1000000007;

int main()
{
	ll N, result = 0;
	cin >> N;
    
	for (ll i = 1, num = 2; i <= N; i++)
	{
	    result += num;
	    result %= DIV;
	    
	    num *= 3;
	    num %= DIV;
	}

	cout << result;
}