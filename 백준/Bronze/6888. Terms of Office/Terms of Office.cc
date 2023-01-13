#include <iostream>

using namespace std;

int main() {
	int startYear, endYear;
	cin >> startYear >> endYear;

	while (startYear <= endYear) {
		cout << "All positions change in year " << startYear << "\n";
		
		startYear += 60;
	}
}