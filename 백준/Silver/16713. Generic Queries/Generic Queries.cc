#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int N, Q, result = 0;
	cin >> N >> Q;

	vector<int> nList(N+1);
	for (int i=1; i<=N; i++) {
		cin >> nList[i];
		nList[i] ^= nList[i-1];
	}

	for (int j=0, a, b; j<Q; j++) {
		cin >> a >> b;
		result ^= nList[b] ^ nList[a-1];
	}

	cout << result;
}