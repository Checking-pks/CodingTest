#include <iostream>
#include <vector>
#include <map>

using namespace std;

void simulate() {
	int n, k, result = 0;
	cin >> n >> k;

	string s;
	map<pair<vector<int>, int>, int> similarList;
	
	for (int i=0; i<n; i++) {
		cin >> s;
		vector<int> alphabet(26);
		int greaterCount = 0;

		for (int j=0; j<k; j++) {
			if ('A' <= s[j] && s[j] <= 'Z') {
				greaterCount++;
				alphabet[s[j] - 'A']++;
			} else {
				alphabet[s[j] - 'a']++;
			}
		}

		similarList[{alphabet, greaterCount}]++;
	}

	for (auto now : similarList) {
		result += now.second * (now.second - 1) / 2;
	}

	cout << result << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;

	while (T--) 
		simulate();
}