#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int N, M, K, X;
	cin >> N >> M >> K >> X;

	vector<int> nList(N+2, 0);
	for (int i=2, now; i<=N+1; i++) {
		cin >> now;
		X += now;
		nList[i] = nList[i-1] + (K > X);
	}

	for(int i=0, a, b; i<M; i++) {
		cin >> a >> b;
		cout << nList[b] - nList[a] << "\n";
	}
}