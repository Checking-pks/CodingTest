#include <iostream>
#include <map>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		map<string, int, greater<>> result = {
			{"TTT", 0}, {"TTH", 0}, {"THT", 0}, {"THH", 0},
			{"HTT", 0}, {"HTH", 0}, {"HHT", 0}, {"HHH", 0}
		};
		string coinResult;
		cin >> coinResult;

		for (int i=0; i<coinResult.length()-2; i++) {
			string nowCoinResult = coinResult.substr(i, 3);
			result[nowCoinResult]++;
		}

		for (pair<string, int> r:result)
			cout << r.second << " ";
		cout << "\n";
	}
}