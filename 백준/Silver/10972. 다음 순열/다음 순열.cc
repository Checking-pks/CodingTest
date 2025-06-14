#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int N;
	cin >> N;

	vector<int> nList(N);
	for (int i=0; i<N; i++)
		cin >> nList[i];

	if (!next_permutation(nList.begin(), nList.end())) {
		cout << -1;
		return 0;
	}

	for (int i=0; i<N; i++)
		cout << nList[i] << " ";
}