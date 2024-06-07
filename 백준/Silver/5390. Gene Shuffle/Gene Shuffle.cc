#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T;
	cin >> T;

	while (T--) {
		int n;
		cin >> n;

		vector<int> aList(n+1);
		set<int> aAppear, bAppear;
		for (int i=1; i<=n; i++)
			cin >> aList[i];

		for (int i=1, s=1, now; i<=n; i++) {
			cin >> now;
			aAppear.insert(aList[i]);
			bAppear.insert(now);

			if (aAppear == bAppear) {
				cout << s << "-" << i << " ";
				s = i + 1;
				
				aAppear.clear();
				bAppear.clear();
			}
		}

		cout << "\n";
	}
}