#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int N;
	cin >> N;

	pair<int, int> stack = {0, 1};
	cin >> stack.first;

	for (int i=2, now; i<=N; i++) {
		cin >> now;

		if (stack.first != now) {
			while (stack.second--)
				cout << i << " ";

			stack = {now, 1};
			continue;
		} 

		stack.second++;
	}

	while (stack.second--)
		cout << "-1 ";
}