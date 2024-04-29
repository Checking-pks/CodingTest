#include <iostream>
#include <vector>
#include <set>

using namespace std;

const int MAX = 1'000'000;

set<int> GetPrime() {
	vector<bool> nList(MAX+1);
	for (int i=2; i*i<=MAX; i++) {
		if (nList[i]) continue;
		for (int j=i*i; j<=MAX; j+=i) 
			nList[j] = true;
	}

	set<int> result;
	for (int i=2; i<=MAX; i++) 
		if (!nList[i]) 
			result.insert(i);

	return result;
}

int main() {
	set<int> pList = GetPrime();

	int N, result = 0;
	cin >> N;

	vector<int> nList(N);
	for (int i=0; i<N; i++)
		cin >> nList[i];

	for (int p : pList) {
		if (p > N) break;

		int sum = 0;
		for (int j=0; j<p; j++)
			sum += nList[j];
		if (pList.find(sum) != pList.end())
			result++;

		for (int j=p; j<N; j++) {
			sum += nList[j];
			sum -= nList[j-p];

			if (pList.find(sum) != pList.end())
				result++;
		}
	}

	cout << result;
}