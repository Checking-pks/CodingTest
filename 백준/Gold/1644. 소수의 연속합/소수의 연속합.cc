#include <iostream>
#include <vector>

using namespace std;

vector<int> SieveOfEratosthenes(int num) {
	vector<int> result;
	vector<bool> pno(num+1, true);
	for (int i = 2; i*i<= num; i++) 
		if (pno[i] == true) 
			for (int j = i*2; j<= num; j += i) 
				pno[j] = false;
	
	for (int i = 2; i <= num; i++)
		if (pno[i])
			result.push_back(i);

	return result;
}

int main() {
	int num, result=0;
	cin >> num;
	
	vector<int> primeList = SieveOfEratosthenes(num);

	for (int i=0; i<primeList.size(); i++) {
		for (int j=i, now=0; j<primeList.size(); j++) {
			now += primeList[j];
			result += (now == num);
			if (now > num) break;
		}
	}

	cout << result;
}