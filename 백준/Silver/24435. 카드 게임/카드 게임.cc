#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		int n;
		cin >> n;

		string bob, alice;
		cin >> bob >> alice;

		string target = bob;
		reverse(bob.begin(), bob.end());
		target = min(target, bob);

		sort(alice.begin(), alice.end(), greater<>());

		do {
			if (target > alice) break;
		} while (prev_permutation(alice.begin(), alice.end()));

		if (target <= alice) {
			sort(alice.begin(), alice.end(), greater<>());
			alice.pop_back();
		} 

		cout << alice << "\n";
	}
}