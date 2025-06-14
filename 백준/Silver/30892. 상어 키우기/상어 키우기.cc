#include <iostream>
#include <list>

using namespace std;

typedef long long ll;

int main() {
	ll N, K, T;
	cin >> N >> K >> T;

	list<ll> left, right;

	for (ll i=0, now; i<N; i++) {
		cin >> now;

		if (now < T)
			left.push_back(now);
		else
			right.push_back(now);
	}

	left.sort();
	right.sort();
	
	while (K--) {
		while (right.size() && right.front() < T) {
			left.push_back(right.front());
			right.pop_front();
		}

		if (left.empty()) break;

		T += left.back();
		left.pop_back();
	}

	cout << T;
}