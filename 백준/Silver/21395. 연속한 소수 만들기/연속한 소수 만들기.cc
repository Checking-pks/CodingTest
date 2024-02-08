#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> getPrimeList() 
{
	vector<long long> result;
	vector<bool> isPrime(100'001);

	for (long long i=2; i<isPrime.size(); i++) 
	{
		if (isPrime[i]) continue;
		result.push_back(i);
		for (long long j=i*i; j<isPrime.size(); j+=i)
			isPrime[j] = true;
	}

	return result;
}

int main() 
{
	vector<long long> primeList = getPrimeList();
	
	long long T;
	cin >> T;

	while (T--) 
	{
		long long n, result=20'000'001;
		cin >> n;
		
		vector<long long> numList(n);
		for (long long i=0; i<n; i++)
			cin >> numList[i];

		sort(numList.begin(), numList.end());

		for (long long i=0; i<primeList.size()-n; i++) 
		{
			long long sum=0;
			for (long long j=0; j<n; j++) 
			{
				sum += abs(numList[j]-primeList[i+j]);
			}

			result = min(result, sum);
		}

		cout << result << "\n";
	}
}