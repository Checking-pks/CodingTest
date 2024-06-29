#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int N, M;
	cin >> N >> M;

	vector<int> nList(M);
	for (int i = 0; i < M; i++)
		cin >> nList[i];

	vector<pair<int, int>> river = {{1, N}};
	for (int i = 0; i < M; i++) {
		vector<pair<int, int>> newRiver;
		for (int j = 0, s, e; j < nList[i]; j += 2) {
			cin >> s >> e;

			for (int k = 0; k < river.size(); k++) {
				if (river[k].first <= e && river[k].second >= s) {
					newRiver.push_back({s, e});
					break;
				}
			}
		}

		river = newRiver;
	}

	cout << (river.empty() ? "NO" : "YES");
}