#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
	ll N, result = 0;
	cin >> N;

	vector<ll> nList(N);
	for (int i=0; i<N; i++)
		cin >> nList[i];

	sort(nList.begin(), nList.end(), greater<>());

	for (int i=0; i<N; i++) {
		nList[i] -= i;
		if (nList[i] > 0)
			result += nList[i];
	}

	cout << result;
}