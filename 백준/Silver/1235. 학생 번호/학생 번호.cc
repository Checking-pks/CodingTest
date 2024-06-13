#include <iostream>
#include <vector>
#include <set>

using namespace std;

void insert(vector<set<string>> &sList, string &s) {
	string now = "";

	for (int i=0; s.length(); i++) {
		now.push_back(s.back());
		s.pop_back();
		sList[i].insert(now);
	}
}

int main() {
	int N;
	cin >> N;

	string s;
	cin >> s;
	
	vector<set<string>> sList(s.length());
	insert(sList, s);

	for (int i=1; i<N; i++) {
		cin >> s;
		insert(sList, s);
	}

	for (int i=0; i<sList.size(); i++) {
		if (N == sList[i].size()) {
			cout << i + 1;
			break;
		}
	}
}