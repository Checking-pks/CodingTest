#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

pair<ll, ll> center;

ll ccw(pair<ll, ll> a, pair<ll, ll> b) {
	return center.first * a.second + a.first * b.second +
				 b.first * center.second -
				 (a.first * center.second + b.first * a.second +
					center.first * b.second);
}

ll distance(pair<ll, ll> a) {
	return abs(center.first - a.first) + abs(center.second - a.second);
}

bool cmp(pair<ll, ll> a, pair<ll, ll> b) {
	ll clockWise = ccw(a, b);

	if (clockWise != 0)
		return (clockWise > 0);

	return (distance(a) < distance(b));
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll N;
	cin >> N;

	vector<pair<ll, ll>> peopleList(N);
	vector<vector<pair<ll, ll>>> quadrant(4);

	for (ll i = 0; i < N; i++)
		cin >> peopleList[i].first >> peopleList[i].second;

	cin >> center.first >> center.second;

	for (ll i = 0; i < N; i++) {
		auto nowPeople = peopleList[i];

		if (center.second < nowPeople.second) {
			if (center.first < nowPeople.first)
				quadrant[0].push_back(nowPeople);
			else
				quadrant[1].push_back(nowPeople);
		} else {
			if (center.first < nowPeople.first)
				quadrant[3].push_back(nowPeople);
			else
				quadrant[2].push_back(nowPeople);
		}
	}

	for (ll i = 0; i < 4; i++) {
		sort(quadrant[i].begin(), quadrant[i].end(), cmp);
		for (ll j = 0; j < quadrant[i].size(); j++)
			cout << quadrant[i][j].first << " " << quadrant[i][j].second << "\n";
	}
}