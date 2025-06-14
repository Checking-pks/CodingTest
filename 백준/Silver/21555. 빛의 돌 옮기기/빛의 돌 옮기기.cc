#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
	ll N, K;
	cin >> N >> K;

	vector<vector<ll>> nList(N, vector<ll>(2));

	for (ll i=0; i<2; i++)
		for (ll j=0; j<N; j++)
			cin >> nList[j][i];

	for (ll i=1; i<N; i++) {
		nList[i][0] += min(nList[i-1][0], nList[i-1][1] + K);
		nList[i][1] += min(nList[i-1][1], nList[i-1][0] + K);
	}

	cout << min(nList.back()[0], nList.back()[1]);
}