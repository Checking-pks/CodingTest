#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

list<int> a, b;

bool check() {
	for (int i=0; i<a.size(); i++) {
		b.push_back(b.front());
		b.pop_front();

		if (a == b)
			return true;
	}

	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n, now;
	cin >> n;

	for (int i=0; i<n; i++) {
		cin >> now;
		a.push_back(now);
	}
	
	for (int i=0; i<n; i++) {
		cin >> now;
		b.push_back(now);
	}

	if (check()) {
		cout << "good puzzle";
		return 0;
	}
	
	reverse(b.begin(), b.end());

	cout << (check() ? "good" : "bad") << " puzzle";
}