#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<int> friends(n+1, 0);

	for (int i=0, n1, n2; i<m; i++) {
		cin >> n1 >> n2;
		friends[n1]++;
		friends[n2]++;
	}

	for (int i=1; i<=n; i++)
		cout << friends[i] << "\n";
}