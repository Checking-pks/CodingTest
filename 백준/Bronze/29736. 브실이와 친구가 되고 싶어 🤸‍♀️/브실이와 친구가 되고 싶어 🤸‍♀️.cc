#include <iostream>

using namespace std;

int main() {
	int a, b, k, x;
	cin >> a >> b >> k >> x;
	if (k+x < a || k-x > b) cout << "IMPOSSIBLE";
	else cout << min(k+x, b) - max(k-x, a) + 1;
}