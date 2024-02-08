#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, result=0;
	cin >> N;

	vector<double> cakeList(N);
	for (int i=0; i<N; i++) {
		double now;
		cin >> now;
		cakeList[i] = 1. / now;
	}
	
	for (int i=0; i<N; i++) {
		vector<bool> pList(N);
		for (int j=0; j<i; j++)
			pList[j] = true;

		do {
			double sum = 0;
			for (int j=0; j<N; j++) {
				if (pList[j]) continue;
				sum += cakeList[j];
			}

			if (.99 <= sum && sum <= 1.01)
				result++;
		} while (prev_permutation(pList.begin(), pList.end()));
	}

	cout << result;
}