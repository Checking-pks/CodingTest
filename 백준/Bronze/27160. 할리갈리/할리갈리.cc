#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	unordered_map<string, int> fruits;
	bool isBell = false;
	int num;
	cin >> num;

	while (num--) {
		string f;
		int n;

		cin >> f >> n;

		if (fruits.find(f) == NULL)
			fruits[f] = n;
		else
			fruits[f] += n;
	}
	
	for (pair<string, int> nowFruits:fruits) {
		if (nowFruits.second == 5) {
			isBell = true;
			break;
		}
	}

	cout << (isBell ? "YES" : "NO");
}