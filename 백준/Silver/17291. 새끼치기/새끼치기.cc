#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> nList = {0, 1, 2, 4, 7};

	for (int i = 5; i <= N; i++) {
		nList.push_back(nList[i - 1] * 2);

		if (!(i & 1)) 
			nList[i] -= nList[i - 5] + nList[i - 4];
	}

	cout << nList[N];
}