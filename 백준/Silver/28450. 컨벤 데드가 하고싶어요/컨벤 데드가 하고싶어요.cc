#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    ll N, M, power;
	cin >> N >> M;

    vector<vector<ll>> field(N + 2, vector<ll> (M + 2, 1000000001));
	for (ll i = 1; i <= N; i++)
		for (ll j = 1; j <= M; j++)
			cin >> field[i][j];

	cin >> power;

	for (ll i = 2; i <= N; i++)
		field[i][1] += field[i - 1][1];

	for (ll i = 1; i <= N; i++)
		for (ll j = 2; j <= M; j++)
			field[i][j] += min(
							field[i - 1][j], 
							field[i][j - 1]);

	if (field[N][M] > power)
		cout << "NO";
	else
		cout << "YES\n" << field[N][M]; 
}