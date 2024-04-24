#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

set<int> primeList, sumList;

void init() {
	int MAX = 9000;
	vector<bool> pList(MAX + 1);

	for (int i = 2; i * i <= MAX; i++) {
		if (pList[i])
			continue;
		for (int j = i * i; j <= MAX; j += i)
			pList[j] = true;
	}

	for (int i = 2; i <= MAX; i++)
		if (!pList[i])
			primeList.insert(i);
}

int main() {
	init();

	int N, M;
	cin >> N >> M;

	vector<int> nList(N), perList(N);
	for (int i = 0; i < N; i++)
		cin >> nList[i];
	for (int i = 0; i < M; i++)
		perList[i] = 1;

	do {
		int sum = 0;
		for (int i = 0; i < N; i++)
			sum += nList[i] * perList[i];
		sumList.insert(sum);
	} while (prev_permutation(perList.begin(), perList.end()));

	bool isNot = true;
	for (int n : sumList) {
		if (primeList.find(n) != primeList.end()) {
			isNot = false;
			cout << n << " ";
		}
	}

	if (isNot)
		cout << -1;
}