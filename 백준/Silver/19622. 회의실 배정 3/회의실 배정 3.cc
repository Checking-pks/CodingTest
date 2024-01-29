#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;

	vector<int> mList(N);
	for (int i=0, s, e; i<N; i++) 
		cin >> s >> e >> mList[i];

	if (N == 1) {
		cout << mList[0];
		return 0;
	}

	if (N > 2) 
		mList[2] += mList[0];

	for (int i=3; i<N; i++) 
		mList[i] += max(mList[i-2], mList[i-3]);

	cout << max(mList[N-1], mList[N-2]);
}