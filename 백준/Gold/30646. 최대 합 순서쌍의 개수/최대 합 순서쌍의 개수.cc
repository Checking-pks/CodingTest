#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	ll N, result = 0, count = 0;
	cin >> N;

	map<ll, ll> mList;
	vector<long long> nList(N+1);
	for (ll i=1, now; i<=N; i++) {
		cin >> now;
		nList[i] = nList[i-1] + now;

		if (mList.find(now) == mList.end()) 
			mList[now] = i;

		long long sum = nList[i] - nList[mList[now]] + now;

		if (result == sum)
			count++;
		else if (result < sum) {
			result = sum;
			count = 1;
		}
	}

	cout << result << " " << count;
}