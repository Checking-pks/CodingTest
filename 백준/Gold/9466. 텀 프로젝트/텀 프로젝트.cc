#include <iostream>
#include <vector>
#include <list>

using namespace std;

int wishList[100001];

void simulate(vector<bool> &checked, list<int> &loop, int now) {
	if (checked[now]) {
		while (loop.size() && loop.front() != now) 
			loop.pop_front();
		return;
	}

	checked[now] = true;
	loop.push_back(now);
	simulate(checked, loop, wishList[now]);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int T, n, result;
	cin >> T;

	while (T--) {
		cin >> n;
		result = n;

		vector<bool> checked(n+1);
		
		for (int i=1; i<=n; i++)
			cin >> wishList[i];

		for (int i=1; i<=n; i++) {
			if (checked[i]) continue;
			list<int> loop;
			simulate(checked, loop, i);
			result -= loop.size();
		}

		cout << result << "\n";
	}
}