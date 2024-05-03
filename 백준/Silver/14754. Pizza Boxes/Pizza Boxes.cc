#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
	ll n, m, result = 0;
	cin >> n >> m;

	vector<vector<ll>> field(n, vector<ll>(m));
	vector<vector<bool>> check(n, vector<bool>(m));
	for (ll i=0; i<n; i++)
		for (ll j=0; j<m; j++)
			cin >> field[i][j];

	for (ll i=0; i<n; i++) {
		ll t=-1, pos;
		for (ll j=0; j<m; j++) {
			if (t < field[i][j]) {
				t = field[i][j];
				pos = j;
			}
		}

		check[i][pos] = true;
	}

	for (ll j=0; j<m; j++) {
		ll t=-1, pos;
		for (ll i=0; i<n; i++) {
			if (t < field[i][j]) {
				t = field[i][j];
				pos = i;
			}
		}

		check[pos][j] = true;
	}

	for (ll i=0; i<n; i++) 
		for (ll j=0; j<m; j++) 
			if (!check[i][j])
				result += field[i][j];

	cout << result;
}