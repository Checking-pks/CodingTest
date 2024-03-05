#include <iostream>
#include <vector>

using namespace std;

vector<int> primeList, mulList;

void initPrime() {
	vector<bool> pList(1001);
	for (int i=2; i<=1000; i++) {
		if (pList[i]) continue;
		primeList.push_back(i);
		for (int j=i*i; j<=1000; j+=i)
			pList[j] = true;
	}

	mulList = vector<int>(pList.size());
}

int main() {
	initPrime();
	
	int N, K;
	cin >> N >> K;

	if (N/2 < K) K = N-K;

	long long result = 1;
	
	for (int i=N, j=1; j<=K; i--, j++) {
		int nowI = i, nowJ = j;
		while (nowI > 1) {
			for (int a=0; a<primeList.size(); a++) {
				if (nowI % primeList[a] == 0) {
					nowI /= primeList[a];
					mulList[a]++;
					break;
				}
			}
		}

		while (nowJ > 1) {
			for (int a=0; a<primeList.size(); a++) {
				if (nowJ % primeList[a] == 0) {
					nowJ /= primeList[a];
					mulList[a]--;
					break;
				}
			}
		}
	}

	for (int i=0; i<mulList.size(); i++) {
		if (!mulList[i]) continue;

		for (int j=0; j<mulList[i]; j++) {
			result *= primeList[i];
			result %= 10007;
		}
	}

	cout << result;
}