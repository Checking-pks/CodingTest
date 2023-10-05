#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<pair<int, int>> field(n, {0, 1});

	for (int i=1; i<n; i++) {
		cin >> field[i].first;
		field[i].second = i+1;
	}

	sort(field.begin(), field.end());

	for (int i=0; i<field.size(); i++) {
		cout << field[i].second << " ";
	}
}