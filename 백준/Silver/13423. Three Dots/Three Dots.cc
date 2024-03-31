#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		int N, result = 0;
		cin >> N;

		unordered_set<int> nList;
		for (int i=0, now; i<N; i++) {
			cin >> now;
			nList.insert(now);
		}

		for (auto a:nList) {
			for (auto b:nList) {
				if (a >= b) continue;
				int c = b + (b - a);

				if (nList.find(c) != nList.end())
					result++;
			}
		}

		cout << result << "\n";
	}
}