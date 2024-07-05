#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	ll N, result = 0;
	cin >> N;

	vector<pair<ll, ll>> nList(N);
	for (ll i=0; i<N; i++)
		cin >> nList[i].first >> nList[i].second;

	ll a = nList.back().first;
	ll b = nList.back().second;
	nList.pop_back();

	while (nList.size()) {
		result += nList.back().first * a * b;
		a = nList.back().first;
		nList.pop_back();
	}

	cout << result;
}