#include <iostream>
#include <vector>

using namespace std;

vector<int> GetPrimeList() {
	vector<int> result;
	vector<bool> pList(1'000'001);

	for (int i=2; i*i<=1'000'000; i++) {
		if (pList[i]) continue;
		for (int j=i*i; j<=1'000'000; j+=i) {
			pList[j] = true;
		}
	}

	for (int i=2; i<=1'000'000; i++)
		if (!pList[i])
			result.push_back(i);

	return result;
}

int main() {
	auto primeList = GetPrimeList();
	int T, N;
	cin >> T;

	while (T--) {
		int result=0;
		cin >> N;
		for (int i=0, a; i<primeList.size(); i++) {
			a = primeList[i];
			if (a >= N) break;
			int left=0, right=primeList.size()-1;
			while (left <= right) {
				int mid = (left + right) / 2;
				if (primeList[mid] < N - a)
					left = mid + 1;
				else
					right = mid - 1;
			}

			if (primeList[left] > a) continue;
			if (primeList[left] == N - a)
				result++;
		}

		cout << result << "\n";
	}
}