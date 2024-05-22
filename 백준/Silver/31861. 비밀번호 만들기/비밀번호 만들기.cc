#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int N, M;
vector<vector<ll>> nList;
const ll DIVISION = 1'000'000'007;

int main() {
	cin >> N >> M;

	if (!N) {
		ll result = 26;

		for (int i=1; i<M; i++) {
			result *= 26;
			result %= DIVISION;
		}

		cout << result;
		return 0;
	}
	
	nList = vector<vector<ll>>(M, vector<ll>(26));

	for (int i=0; i<26; i++)
		nList[0][i] = 1;

	for (int i=0; i<M-1; i++) {
		for (int j=0; j<26; j++) {
			if (!nList[i][j])
				continue;

			for (int k=j+N; k < 26; k++) {
				nList[i+1][k] += nList[i][j];
				nList[i+1][k] %= DIVISION;
			}
			for (int k=j-N; k >= 0; k--) {
				nList[i+1][k] += nList[i][j];
				nList[i+1][k] %= DIVISION;
			}
		}
	}
	
	ll result = 0;
	
	for (int i=0; i<26; i++) {
		result += nList.back()[i];
		result %= DIVISION;
	}

	cout << result;
}