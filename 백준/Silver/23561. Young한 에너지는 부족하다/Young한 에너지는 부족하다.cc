#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, l, r;
	cin >> N;

	vector<int> nList(N*3);
	for (int i=0; i<N*3; i++) 
		cin >> nList[i];

	sort(nList.begin(), nList.end());

	cout << nList[N*2-1] - nList[N];
}