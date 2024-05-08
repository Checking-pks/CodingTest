#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int N, M;
	cin >> N >> M;

	vector<int> rowSum(N+1), colSum(N+1);
	for (int i=1, now; i<=N; i++) {
		for (int j=1; j<=N; j++) {
			cin >> now;
			rowSum[i] += now;
			colSum[j] += now;
		}
	}

	for (int i=0, r1, c1, r2, c2, v; i<M; i++) {
		cin >> r1 >> c1 >> r2 >> c2 >> v;

		for (int j=r1; j<=r2; j++) 
			rowSum[j] += (c2 - c1 + 1) * v;

		for (int j=c1; j<=c2; j++) 
			colSum[j] += (r2 - r1 + 1) * v;
	}

	for (int i=1; i<=N; i++)
		cout << rowSum[i] << " ";

	cout << "\n";

	for (int i=1; i<=N; i++)
		cout << colSum[i] << " ";

	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int T;
	cin >> T;

	while (T--) 
		solve();
}