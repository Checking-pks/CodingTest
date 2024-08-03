#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	vector<int> mList(M);
	for (int i=0; i<M; i++) 
		cin >> mList[i];

	sort(mList.begin(), mList.end());

	int l = 1, r = mList.back(), result = 0;

	while (l <= r) {
		int m = (l + r) / 2;
		int count = 0;
		
		for (int i=0; i<M; i++) {
			count += mList[i] / m;
			count += mList[i] % m != 0;
		}

		if (count > N)
			l = m + 1;
		else {
			r = m - 1;
			result = m;
		}
	}

	cout << result;
}