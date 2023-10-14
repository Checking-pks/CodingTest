#include <iostream>
#include <set>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int a=1; a<=testcase; a++) {
		int n, result=0;
		string s;
		cin >> n >> s;

		set<char> broadcast;

		for (int i=0; i<s.length(); i++)
			broadcast.insert(s[i]);

		for (int i=0; i<n; i++) {
			string now;
			cin >> now;

			for (int j=0; j<now.length(); j++) {
				if (broadcast.find(now[j]) != broadcast.end()) {
					result++;
					break;
				}
			}
		}

		cout << "Data Set " << a << ":\n";
		cout << result << "\n\n";
	}
}