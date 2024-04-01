#include <algorithm>
#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

const ll DIVISION = 1e9 + 7;

int main() {
	ll N, result = 0;
	cin >> N;


	vector<ll> nList(N);
	for (ll i = 0; i < N; i++)
		cin >> nList[i];

	sort(nList.begin(), nList.end(), greater<>());

	for (ll now : nList) {
		result += result + now;
		result %= DIVISION;
	}

	cout << result;
}