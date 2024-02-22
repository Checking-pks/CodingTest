#include <iostream>
#include <map>

using namespace std;

int main() {
	int N;
	cin >> N;

	map<int, int> m;
	pair<int, int> maximum = {0, 0};
	for (int i=0, now; i<N; i++) {
		cin >> now;
		m[now]++;

		if (maximum.second < m[now]) {
			maximum = {now, m[now]};
		}
	}

	for (auto a:m) {
		if (a.first == maximum.first) continue;
		maximum.second -= a.second;
	}

	if (maximum.second <= 1) cout << "YES";
	else cout << "NO";
}