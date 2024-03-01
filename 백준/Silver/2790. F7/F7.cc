#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> nList(N);
	for (int i=0; i<N; i++)
		cin >> nList[i];

	sort(nList.begin(), nList.end(), greater<>());
	int maxScore = 0, result=0;
	for (int i=0; i<N; i++) 
		maxScore = max(maxScore, nList[i] + i + 1);

	for (int i=0; i<N; i++) 
		if (maxScore <= nList[i] + N)
			result++;

	cout << result;
}