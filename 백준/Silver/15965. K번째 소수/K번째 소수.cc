#include <iostream>
#include <vector>

using namespace std;

const int MAX = 7'368'787;
vector<int> primeList;

void init() {
	vector<bool> nList(MAX + 1);

	for (int i = 2; i * i <= MAX; i++) {
		if (nList[i])
			continue;
		for (int j = i * i; j <= MAX; j += i)
			nList[j] = true;
	}

	for (int i = 2; i <= MAX; i++)
		if (!nList[i])
			primeList.push_back(i);
}

int main() {
	init();

	int k;
	cin >> k;
	cout << primeList[k-1];
}