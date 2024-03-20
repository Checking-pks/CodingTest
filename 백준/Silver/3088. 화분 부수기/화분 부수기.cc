#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N, result=0;
	cin >> N;

	unordered_set<int> brokenList;
	
	for (int i=0; i<N; i++) {
		bool isBroken = false;
		for (int i=0, now; i<3; i++) {
			cin >> now;
			if (brokenList.find(now) != brokenList.end())
				isBroken = true;
			else
				brokenList.insert(now);
		}

		if (!isBroken)
			result++;
	}

	cout << result;
}