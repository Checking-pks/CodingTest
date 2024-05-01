#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	vector<vector<ll>> nList(3, vector<ll>(N+1));
	for (int i=1; i<=N; i++) 
		cin >> nList[1][i];
	
	for (int i=2; i<=N; i++) {
		cin >> nList[0][i];
		nList[0][i] += nList[0][i-1];
	}
	for (int i=1; i<N; i++) {
		cin >> nList[2][i];
	}
	for (int i=N; i>=1; i--) {
		nList[2][i-1] += nList[2][i];
	}

	ll cross = 0, result = 10'000'000'000;
	for (int i=1; i<=N; i++) {
		ll dist = nList[0][i] + nList[1][i] + nList[2][i];

		if (result > dist) {
			result = dist;
			cross = i;
		}
	}

	cout << cross << " " << result;
}