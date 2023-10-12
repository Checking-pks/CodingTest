#include <iostream>

using namespace std;

int main() {
	int l, p, v;
	cin >> l >> p >> v;

	for (int i=1; l!=0 && p!=0 && v!=0; i++) {
		cout << "Case " << i << ": ";

		int result = 0;

		while (v > 0) {
			result += min(l, v);
			v -= p;
		}

		cout << result << "\n";
		cin >> l >> p >> v;
	}
}