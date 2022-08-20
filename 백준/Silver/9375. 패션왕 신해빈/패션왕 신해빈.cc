#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		unordered_map<string, int> clothesList;
		int clothesNum, result = 1;
		cin >> clothesNum;

		for (int j=0; j<clothesNum; j++) {
			string name, type;
			cin >> name >> type;

			clothesList[type]++;
		}

		for (pair<string, int> c:clothesList)
			result *= c.second + 1;

		cout << result - 1 << "\n";
	}
}