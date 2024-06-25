#include <iostream>

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int T;
	cin >> T;

	while (T--) {
		ll a, b, c;
		cin >> a >> b >> c;

		ll A = a * a + (b + c) * (b + c);
		ll B = b * b + (a + c) * (a + c);
		ll C = c * c + (a + b) * (a + b);

		cout << min(A, min(B, C)) << "\n";
	}
}