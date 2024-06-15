#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> nList(N + 1, 10'000'001);
	nList[0] = 0;
	for (int i=1, now; i<=N; i++) {
		cin >> now;
		for (int j=i; j<=N; j++) 
			nList[j] = min(nList[j], nList[j-i] + now);
	}

	cout << nList.back();
}