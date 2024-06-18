#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	int result = N;
	vector<int> nList(N);
	for (int i=0; i<N; i++) 
		cin >> nList[i];

	sort(nList.begin(), nList.end());
	for (int i=0; i<N; i++) 
		result = min(result, nList[i] + N - i - 1);

	cout << result;
}