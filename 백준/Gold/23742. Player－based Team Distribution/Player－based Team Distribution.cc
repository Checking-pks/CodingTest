#include <iostream>
#include <list>

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll N, sum = 0, diff = 0, result = 0;
	cin >> N;

	list<ll> nList;
	for (int i=0, now; i<N; i++) {
		cin >> now;
		nList.push_back(now);
		sum += now;
	}

	result = sum * N;
	nList.sort();

	while (nList.size()) {
		diff += nList.front();
		sum -= nList.front();
		nList.pop_front();
		
		ll nowScore = diff + sum * nList.size();
		if (result > nowScore)
			break;
		
		result = nowScore;
	}

	cout << result;
}