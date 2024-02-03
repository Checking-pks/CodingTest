#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> even, odd;
	for (int i=1, x, y; i<=N; i++) {
		cin >> x >> y;
		if ((x+y)%2)
			odd.push_back(i);
		else
			even.push_back(i);
	}

	if (even.size() && odd.size()) {
		cout << "YES\n";
		for (int n:even) cout << n << " ";
		for (int n:odd)  cout << n << " ";
	} else {
		cout << "NO\n";
	}
}