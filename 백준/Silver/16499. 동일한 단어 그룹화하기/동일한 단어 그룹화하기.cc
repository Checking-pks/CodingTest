#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
	set<vector<int>> groups;
	int num;
	cin >> num;

	for (int i=0; i<num; i++) {
		vector<int> alphabet(26, 0);
		string str;
		cin >> str;
		
		for (int j=0; j<str.length(); j++)
			alphabet[str[j] - 'a']++;

		groups.insert(alphabet);
	}

	cout << groups.size();
}