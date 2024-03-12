#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	vector<long long> nList(N);
	for (int i=0; i<N; i++)
		cin >> nList[i];

	sort(nList.begin(), nList.end(), greater<>());

	long long result = 0;
	for (int i=0; i<N-1; i++) 
		result += min(N-i-1, K) * nList[i];

	cout << result;
}