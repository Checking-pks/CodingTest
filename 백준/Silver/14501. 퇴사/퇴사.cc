#include <iostream>
#include <vector>

using namespace std;

int result=0;
vector<pair<int, int>> field;

void simulation(int pos, int income) {
	if (pos > field.size()) return;
	if (pos == field.size()) {
		result = max(result, income);
		return;
	}

	simulation(pos+1, income);
	simulation(pos+field[pos].first, income+field[pos].second);
}

int main() {
	int n;
	cin >> n;
	
	field = vector<pair<int, int>>(n);

	for (int i=0; i<n; i++)
		cin >> field[i].first >> field[i].second;

	simulation(0, 0);
	simulation(field[0].first, field[0].second);

	cout << result;
}