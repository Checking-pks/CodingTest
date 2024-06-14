#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	vector<int> nList(N), mList(M);
	for (int i=0; i<N; i++)
		cin >> nList[i];
	for (int i=0; i<M; i++)
		cin >> mList[i];

	sort(nList.begin(), nList.end());
	sort(mList.begin(), mList.end());

	int nTime = -100, nResult = 0;
	int mTime = -360, mResult = 0;
	for (int i=0; i<N; i++) {
		if (nList[i] < nTime + 100)
			continue;

		nTime = nList[i];
		nResult++;
	}

	for (int i=0; i<M; i++) {
		if (mList[i] < mTime + 360)
			continue;

		mTime = mList[i];
		mResult++;
	}

	cout << nResult << " " << mResult;
}