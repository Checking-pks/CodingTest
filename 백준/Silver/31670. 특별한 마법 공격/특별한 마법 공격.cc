#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
	int N;
	cin >> N;

	vector<ll> nList(4);
	for (ll now; N--; ) {
		cin >> now;

		nList = {
			nList[2] + now,
			nList[2],
			min(nList[1], nList[3]) + now,
			nList[0]
		};
	}

	ll result = nList[0];
	for (ll now : nList)
		result = min(result, now);

	cout << result;
}