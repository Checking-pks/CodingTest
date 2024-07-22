#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	vector<int> nList;
	for (int i=1; i<=N; i++) {
		if (i % 10 == K % 10) continue;
		if (i % 10 == K * 2 % 10) continue;

		nList.push_back(i);
	}

	cout << nList.size() << "\n";
	for (int i : nList)
		cout << i << " ";
}