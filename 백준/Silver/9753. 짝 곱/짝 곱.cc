#include <iostream>
#include <vector>

using namespace std;

vector<long long> primeList() {
	vector<long long> result;
	vector<bool> nList(100001, true);
	for (long long i=2; i*i<=100000; i++) {
		if (!nList[i]) continue;
		for (long long j=i*i; j<=100000; j+=i) {
			nList[j] = false;
		}
	}

	for (long long i=2; i<=100000; i++) 
		if (nList[i]) 
			result.push_back(i);
	return result;
}

int main() {
	long long T;
	cin >> T;

	auto pList = primeList();
	while (T--) {
		long long K, result=1e+15;
		cin >> K;
		for (int i=0; i<pList.size()-1; i++) {
			for (int j=i+1; j<pList.size(); j++) {
				if (pList[i] * pList[j] < K) continue;
				result = min(result, pList[i] * pList[j]);
				break;
			}
		}

		cout << result << "\n";
	}
}