#include <iostream>
#include <vector>
#include <queue>

using namespace std;
typedef long long ll;

int main() {
	ll N, result = 0;
	cin >> N;

	vector<vector<pair<ll, ll>>> roadList(N+1);
	vector<bool> visit(N+1);
	for (ll i=1, a, b, l; i<N; i++) {
		cin >> a >> b >> l;
		roadList[a].push_back({b, l});
		roadList[b].push_back({a, l});
	}

	queue<pair<ll, ll>> bucket;
	bucket.push({1, 0});
	visit[1] = true;
	
	while (bucket.size()) {
		ll pos = bucket.front().first;
		ll dis = bucket.front().second;
		bucket.pop();

		result = max(result, dis);

		for (ll i=0; i<roadList[pos].size(); i++) {
			ll nextPos = roadList[pos][i].first;
			ll nextDis = roadList[pos][i].second + dis;
			
			if (visit[nextPos]) continue;
			visit[nextPos] = true;
			bucket.push({nextPos, nextDis});
		}
	}

	cout << result;
}