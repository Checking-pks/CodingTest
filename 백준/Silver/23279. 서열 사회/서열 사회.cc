#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	for (int i=0, size; i<K; i++) {
		cin >> size;
		vector<int> nowList(size);
		for (int j=0; j<size; j++) {
			cin >> nowList[j];
			nowList[j]++;
		}

		sort(nowList.begin(), nowList.end());

		for (int j=0; j<size; j++) 
			cout << nowList[j] + j << " ";
		cout << "\n";
	}
}