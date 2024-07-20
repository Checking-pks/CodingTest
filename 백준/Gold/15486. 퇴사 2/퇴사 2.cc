#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, result = 0;
	cin >> N;

	vector<int> nList(N+2);
	for (int i=1, T, P; i<=N; i++) {
		cin >> T >> P;
		
		nList[i] = max(nList[i-1], nList[i]);
		result = max(result, nList[i]);

		if (i + T > N + 1) 
			continue;

		nList[i+T] = max(nList[i+T], nList[i] + P);
	}

	cout << max(result, nList.back());
}