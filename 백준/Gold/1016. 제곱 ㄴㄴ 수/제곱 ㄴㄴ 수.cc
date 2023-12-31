#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> SieveOfEratosthenes(int num) {
	vector<int> result;
	vector<bool> pno(num+1, true);
	for (int i=2; i<=num; i++) 
		for (int j=i*2; pno[i] && j<=num; j+=i) 
			pno[j] = false;

	for (int i=2; i<=num; i++)
		if (pno[i])
			result.push_back(i);

	return result;
}

int algorithm(long long min, long long max) {
	vector<int> primeList = SieveOfEratosthenes(sqrt(max));
	vector<bool> divisionList(max - min + 1, true);
	int result = 0;

	for (int i=0; i<primeList.size(); i++) {
		long long nowSquare = 1ll * primeList[i] * primeList[i];
		for (long long j=min/nowSquare*nowSquare; j<=max; j+=nowSquare) {
			if (j < min) continue;
			divisionList[j - min] = false;
		}
	}

	for (int i=0; i<divisionList.size(); i++)
		result += divisionList[i];

	return result;
}

int main() {
	long long min, max;
	cin >> min >> max;

	cout << algorithm(min, max);
}