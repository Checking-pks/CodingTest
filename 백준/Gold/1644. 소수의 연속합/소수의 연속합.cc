#include <iostream>
#include <vector>

using namespace std;

vector<int> SieveOfEratosthenes(int num) {
	vector<int> result;
	vector<bool> pno(num+1, true);
	for (int i=2; i*i<=num; i++) 
		for (int j=i*2; pno[i] && j<=num; j+=i) 
			pno[j] = false;

	for (int i=2; i<=num; i++) 
		if (pno[i])
			result.push_back(i);

	return result;
}

int main() {
	int num, result=0;
	cin >> num;

	vector<int> primeList = SieveOfEratosthenes(num);

	for (int i=0; i<primeList.size(); i++) {
		for (int j=i, now=0; now<=num && j<primeList.size(); j++) {
			now += primeList[j];
			result += (now == num);
		}
	}

	cout << result;
}