#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

const ll MAX = 5000000001;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll N;
	cin >> N;

	vector<ll> nList(N + 1);
	vector<ll> powerList(N + 1, MAX);
	for (ll i=1; i<=N; i++)
		cin >> nList[i];
		
	powerList[1] = 0;

    for (ll i = 2; i <= N; i++) {
        for (ll j = 1; j < i; j++) {
            ll now = (i - j) * (1 + abs(nList[i] - nList[j]));
            now = max(now, powerList[j]);
            powerList[i] = min(now, powerList[i]);
        }
    }
	
	cout << powerList[N];
}