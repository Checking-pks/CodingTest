#include <iostream>
#include <vector>

using namespace std;

int main() {
	int student, relation;
	cin >> student >> relation;

	vector<int> friends(student, 0);

	while (relation--) {
		int s1, s2;
		cin >> s1 >> s2;
		friends[--s1]++;
		friends[--s2]++;
	}

	for (int f:friends)
		cout << f << "\n";
}