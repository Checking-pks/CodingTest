#include <iostream>
#include <queue>

using namespace std;

int main() {
	long long n, m, result=0;
	cin >> n >> m;
	priority_queue<long long, vector<long long>, greater<long long>> pq;
	
	for (long long i=0, now; i<n; i++) {
		cin >> now;
		result += now;
		pq.push(now);
	}

	for (long long i=0; i<m; i++) {
		long long n1 = pq.top();
		pq.pop();
		long long n2 = pq.top();
		pq.pop();
		pq.push(n1+n2);
		pq.push(n1+n2);
		result += n1+n2;
	}

	cout << result;
}