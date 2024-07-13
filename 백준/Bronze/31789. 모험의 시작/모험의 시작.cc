#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, X, S, maxAttack = 0;
	cin >> N >> X >> S;

	for (int i=0, c, p; i<N; i++) {
		cin >> c >> p;

		if (X >= c)
			maxAttack = max(maxAttack, p);
	}

	cout << (S < maxAttack ? "YES" : "NO");
}