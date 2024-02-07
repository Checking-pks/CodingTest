#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, budget, result=0;
	cin >> N;

	int left = 1, right = 0;
	vector<int> nList(N);
	for (int i=0; i<N; i++) {
		cin >> nList[i];
		right = max(right, nList[i]);
	}

	cin >> budget;

	while (left <= right) {
		int mid = (left + right) / 2;
		int sum = 0;
		for (int i=0; i<N; i++) 
			sum += min(nList[i], mid);

		if (sum <= budget) 
			left = mid + 1;
		else 
			right = mid - 1;
	}

	cout << right;
}