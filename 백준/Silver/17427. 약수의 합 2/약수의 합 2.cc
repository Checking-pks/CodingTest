#include <iostream>
#include <vector>

using namespace std;

vector<long long> GetList(long long N) {
	vector<long long> result(N+1, 1);

	for (long long i=2; i<=N; i++) 
		for (long long j=i; j<=N; j+=i) 
			result[j]+=i;

	return result;
}

int main() {
	long long N, result=0;
	cin >> N;

	auto nList = GetList(N);

	for (long long i=1; i<=N; i++) 
		result += nList[i];

	cout << result;
}