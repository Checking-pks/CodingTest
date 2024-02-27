#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int N, M, K;
	cin >> N >> M >> K;

	vector<int> mList(M);
	vector<bool> isUse(M);
	for (int i=0, now; i<M; i++) 
		cin >> mList[i];
	
	sort(mList.begin(), mList.end());
	
	for (int i=0, now; i<K; i++) {
		cin >> now;
		auto iter = upper_bound(mList.begin(), mList.end(), now);
		int idx = iter - mList.begin();
		while (isUse[idx]) {
			iter++; idx++;
		}
		
		cout << *iter << "\n";
		isUse[idx] = true;
	}
}