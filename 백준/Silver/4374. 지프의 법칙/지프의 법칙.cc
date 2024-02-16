#include <iostream>
#include <map>

using namespace std;

int main() {
	int n;
	string s;
	map<string, int> wordList;

	cin >> n;
	cin.ignore();

	while (getline(cin, s)) {
		if (s == "EndOfText") {
			int count = 0;
			for (auto w:wordList) {
				if (w.second == n) {
					cout << w.first << "\n";
					count++;
				}
			}

			if (count == 0) {
				cout << "There is no such word.\n";
			}

			cout << "\n";
			cin >> n;
			cin.ignore();
			wordList.clear();
		} else {
			string now = "";
			for (int i=0; i<s.length(); i++) {
				if (('a'<=s[i] && s[i]<='z') || ('A'<=s[i] && s[i]<='Z')) {
					now += tolower(s[i]);
				} else {
					if (now.empty()) continue;
					wordList[now]++;
					now = "";
				}
			}

			if (now.size())
				wordList[now]++;
		}
	}
}