#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	ll N;
	cin >> N;

	vector<vector<ll>> nList(4, vector<ll>(N));
	for (ll i = 0; i < N; i++)
		for (ll j = 0; j < 4; j++)
			cin >> nList[j][i];

	vector<ll> sumList;
	for (ll i = 0; i < N; i++)
		for (ll j = 0; j < N; j++)
			sumList.push_back(nList[2][i] + nList[3][j]);

	sort(sumList.begin(), sumList.end());

	ll result = 0;
	for (ll i = 0; i < N; i++)
	{
		for (ll j = 0; j < N; j++)
		{
			auto pos = equal_range(sumList.begin(), sumList.end(), - nList[0][i] - nList[1][j]);
			result += pos.second - pos.first;
		}
	}

	cout << result;
}