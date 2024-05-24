#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	if (N == 2) {
		cout << "NO";
		return 0;
	}

	cout << "YES\n";
	if (N == 1)
		cout << "1";
	else
		cout << "1 3 2 ";

	for (int i=4; i<=N; i++)
		cout << i << " ";
}