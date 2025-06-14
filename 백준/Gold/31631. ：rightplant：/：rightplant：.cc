#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(0);
	
	int N;
	cin >> N;

	vector<int> nList(N);
	nList[N-1] = N;

	for (int i=0, j=N-1; j>0; j--) {
		nList[i] = j;
		i++;
		if (i%2 == 0) j -= 2;
	}

	for (int i=0, j=N-3; j>0; j--) {
		if (nList[N-2-i]) break;
		nList[N-2-i] = j;
		i++;
		if (i%2 == 0) j -= 2;
	}

	for (int i:nList)
		cout << i << " ";
}