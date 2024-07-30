#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

vector<ll> nList(1'000'001);
vector<ll> sumList(2'097'153);

ll init(ll node, ll left, ll right) {
	if (left == right)
		return sumList[node] = nList[left];

	ll mid = (left + right) / 2;

	return sumList[node] =
		init(node * 2, left, mid) + 
		init(node * 2 + 1, mid + 1, right);
}

void update(ll node, ll left, ll right, ll pos, ll difference) {
	if (left > pos || pos > right)
		return;

	sumList[node] += difference;

	if (left == right)
		return;

	ll mid = (left + right) / 2;

	update(node * 2, left, mid, pos, difference);
	update(node * 2 + 1, mid + 1, right, pos, difference);
}

ll sum(ll node, ll left, ll right, ll start, ll end) {
	if (right < start || left > end)
		return 0;

	if (start <= left && right <= end)
		return sumList[node];

	ll mid = (left + right) / 2;

	return sum(node * 2, left, mid, start, end) +
				 sum(node * 2 + 1, mid + 1, right, start, end);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll N, M, K;
	cin >> N >> M >> K;

	for (ll i = 1; i <= N; i++)
		cin >> nList[i];

	init(1, 1, N);

	for (ll i = 0, a, b, c; i < M + K; i++) {
		cin >> a >> b >> c;

		if (a == 1) {
			update(1, 1, N, b, c - nList[b]);
			nList[b] = c;
		}
		else
			cout << sum(1, 1, N, b, c) << "\n";
	}
}