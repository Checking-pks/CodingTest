#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void testing(vector<string> f, vector<int> nList) {
	string chocolate = f[0] + f[1][2] + f[2][2] + f[2][1] + f[2][0] + f[1][0];

	if (chocolate == "OOOOOOOO") {
		cout << (nList == vector<int>(1, 8)) << "\n";
		return;
	}

	while (chocolate.back() != 'X') 
		chocolate = chocolate.substr(1) + chocolate[0];

	vector<int> result;
	for (int i=0, stack=0; i<chocolate.length(); i++) {
		if (chocolate[i] == 'O') {
			stack++;
			continue;
		}

		if (stack)
			result.push_back(stack);
		stack = 0;
	}

	sort(result.begin(), result.end());

	cout << (nList == result) << "\n";
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		vector<string> field(3);
		for (int i=0; i<3; i++)
			cin >> field[i];
		int n;
		cin >> n;
		vector<int> nList(n);
		for (int i=0; i<n; i++)
			cin >> nList[i];

		testing(field, nList);
	}
}