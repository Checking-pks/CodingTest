#include <iostream>
#include <vector>

using namespace std;

int main() {
	int liveDay, query;
	cin >> liveDay >> query;

	vector<long long> householdLedger(liveDay+1, 0);

	while (query--) {
		int type, day;
		cin >> type >> day;

		if (type == 1) {
			long long money;
			cin >> money;

			householdLedger[day] += money;
		} else if (type == 2) {
			int day2;
			cin >> day2;

			long long totalMoney = 0;

			for (int i=day; i<=day2; i++)
				totalMoney += householdLedger[i];

			cout << totalMoney << "\n";
		}
	}
}