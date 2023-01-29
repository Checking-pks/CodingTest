#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	for (int i=0, x; i<n*m; i++) cin >> x;

	cout << (n < 8 ? "unsatisfactory" : "satisfactory");
}