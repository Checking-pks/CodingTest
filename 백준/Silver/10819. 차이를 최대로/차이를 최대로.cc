#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, result=0;
	cin >> N;

	vector<int> nList(N);
	vector<int> perList(N);
	for (int i=0; i<N; i++) {
		cin >> nList[i];
		perList[i] = i;
	}

	do {
		int now=0;
		for (int i=1; i<N; i++) {
			now += abs(nList[perList[i-1]] - nList[perList[i]]);
		}
		result = max(result, now);
	} while (next_permutation(perList.begin(), perList.end()));

	cout << result;
}