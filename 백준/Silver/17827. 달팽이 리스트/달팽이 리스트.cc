#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int N, M, V;
	cin >> N >> M >> V;

	V--;

	vector<int> nList(N);
	for (int i=0; i<N; i++)
		cin >> nList[i];

	for (int i=0, now; i<M; i++) {
		cin >> now;
		if (now >= N)
			now = (now - V) % (N - V) + V;

		cout << nList[now] << "\n";
	}
}