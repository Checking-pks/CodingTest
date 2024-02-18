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
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	auto nList = GetList(1'000'000);
	for (long long i=2; i<=1'000'000; i++) 
		nList[i] += nList[i-1];
	
	long long T;
	cin >> T;

	while (T--) {
		long long N;
		cin >> N;
		cout << nList[N] << "\n";
	}
}