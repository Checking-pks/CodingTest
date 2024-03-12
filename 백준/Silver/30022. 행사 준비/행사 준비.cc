#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

using namespace std;

bool cmp(pair<ll, ll> a, pair<ll, ll> b) {
	return abs(a.first - a.second) > abs(b.first - b.second);
}

int main() {
	int N, A, B;
	cin >> N >> A >> B;
	
	vector<pair<ll, ll>> nList(N);
	for (int i=0; i<N; i++) 
		cin >> nList[i].first >> nList[i].second;

	ll result = 0;
	sort(nList.begin(), nList.end(), cmp);
	for (int i=0; i<N; i++) {
		if (nList[i].first < nList[i].second) {
			if (A-- > 0) result += nList[i].first;
			else result += nList[i].second;
		} else {
			if (B-- > 0) result += nList[i].second;
			else result += nList[i].first;
		}
	}

	cout << result;
}