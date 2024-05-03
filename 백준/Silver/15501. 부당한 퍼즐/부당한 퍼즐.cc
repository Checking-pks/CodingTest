#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

bool check(list<int> a, list<int> b) {
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
	
	int n;
	cin >> n;

	list<int> before, after;

	for (int i=0, now; i<n; i++) {
		cin >> now;
		before.push_back(now);
	}
	
	for (int i=0, now; i<n; i++) {
		cin >> now;
		after.push_back(now);
	}

	if (check(before, after)) {
		cout << "good puzzle";
		return 0;
	}
	
	reverse(after.begin(), after.end());

	if (check(before, after))
		cout << "good puzzle";
	else
		cout << "bad puzzle";
}