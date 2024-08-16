#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, S;
	cin >> N;

	vector<int> nList(N);
	for (int i = 0; i < N; i++)
		cin >> nList[i];

	cin >> S;

	for (int i = 0; S && i < N; i++) {
		int pos = i;
		for (int j = i + 1; j < N; j++) {
			if (nList[pos] > nList[j])
				continue;

			if (j - i > S)
				continue;

			pos = j;
		}

		S -= (pos - i);
		for (int j = pos; j > i; j--)
			swap(nList[j], nList[j - 1]);
	}

	for (int i = 0; i < N; i++)
		cout << nList[i] << " ";
}