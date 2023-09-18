#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	vector<map<char, char>> mirror = {
		{{'d', 'q'}, {'b', 'p'}, {'q', 'd'}, {'p', 'b'}},
		{{'d', 'b'}, {'b', 'd'}, {'q', 'p'}, {'p', 'q'}}
	};
	
	int n, d;
	cin >> n >> d;

	for (int i=0; i<n; i++) {
		string str;
		cin >> str;

		for (int j=0; j<str.length(); j++) {
			cout << mirror[d-1][str[j]];
		}

		cout << "\n";
	}
}