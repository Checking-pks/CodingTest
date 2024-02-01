#include <iostream>
#include <vector>

using namespace std;

int main() {
	int M, N, start=1, end=0;
	cin >> M >> N;

	vector<int> snackList(N);
	for (int i=0; i<N; i++) {
		cin >> snackList[i];
		end = max(end, snackList[i]);
	}

	while (start <= end) {
		int mid = (start + end)/2;
		int count=0;
		
		for (int i=0; i<snackList.size(); i++) {
			count += snackList[i] / mid;
		}

		if (count < M)
			end = mid-1;
		else
			start = mid+1;
	}

	cout << end;
}