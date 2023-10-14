#include <iostream>
#include <vector>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int a=1; a<=testcase; a++) {
		int l, n, result=1;
		cin >> l >> n;
		
		vector<int> field(n+1, 0);
		for (int i=1; i<=n; i++)
			cin >> field[i];

		while (field[l]) {
			result++;
			l = field[l];
		}

		cout << "Data Set " << a << ":\n";
		cout << result << "\n\n";
	}
}