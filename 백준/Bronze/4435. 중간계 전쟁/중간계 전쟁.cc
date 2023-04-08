#include <iostream>

using namespace std;

int main() {
	int gandalf[] = {1, 2, 3, 3, 4, 10};
	int sauron[]  = {1, 2, 2, 2, 3, 5, 10};

	int num;
	cin >> num;

	for (int i=1; i<=num; i++) {
		int gandalfScore = 0, sauronScore = 0;

		for (int s : gandalf) {
			int n;
			cin >> n;

			gandalfScore += n * s;
		}

		for (int s : sauron) {
			int n;
			cin >> n;

			sauronScore += n * s;
		}

		cout << "Battle " << i << ": ";

		if (gandalfScore > sauronScore)
			cout << "Good triumphs over Evil\n";
		else if (gandalfScore < sauronScore)
			cout << "Evil eradicates all trace of Good\n";
		else
			cout << "No victor on this battle field\n";
	}
}