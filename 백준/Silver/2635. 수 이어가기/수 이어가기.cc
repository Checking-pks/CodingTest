#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num;
	cin >> num;

	vector<int> result;

	for (int i=num/2; i<=num; i++) {
		vector<int> now = {num, i};

		while (now.back() >= 0) {
			now.push_back(now[now.size()-2] - now.back());
		}

		now.pop_back();

		if (result.size() < now.size())
			result = now;
	}

	cout << result.size() << "\n";
	for (int i:result) cout << i << " ";
}