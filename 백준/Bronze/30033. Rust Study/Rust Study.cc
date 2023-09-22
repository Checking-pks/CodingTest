#include <iostream>
#include <vector>

using namespace std;

int main() {
	int days, result = 0;
	cin >> days;

	vector<int> goal(days, 0);

	for (int i=0; i<days; i++)
		cin >> goal[i];

	for (int i=0, now; i<days; i++) {
		cin >> now;
		result += (now >= goal[i]);
	}

	cout << result;
}