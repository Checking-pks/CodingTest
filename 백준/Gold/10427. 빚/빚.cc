#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

void simulate()
{
	ll N, sum = 0;
	cin >> N;

	vector<ll> nList(N + 1);
	for (ll i = 1; i <= N; i++)
		cin >> nList[i];

	sort(nList.begin(), nList.end());

	vector<ll> sumList = nList;
	for (ll i = 2; i <= N; i++)
		sumList[i] += sumList[i - 1];

	for (ll i = 2; i <= N; i++)
	{
    	ll nowMin = -1, nowMul, nowSum;
		for (ll j = i; j <= N; j++)
		{	
			nowMul = i * nList[j];
			nowSum = sumList[j] - sumList[j - i];

			if (nowMin == -1 || nowMin > nowMul - nowSum)
				nowMin = nowMul - nowSum;
		}

		sum += nowMin;
	}

	cout << sum << "\n";
}

int main()
{
	ll T;
	cin >> T;

	while (T--)
		simulate();
}