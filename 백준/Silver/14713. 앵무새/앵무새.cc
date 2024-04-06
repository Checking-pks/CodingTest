#include <iostream>
#include <vector>

using namespace std;

vector<string> tokenization(string s) {
	vector<string> result;
	int before = 0, after = s.find(' ');
	while (after != string::npos) {
		result.push_back(
			s.substr(before, after - before)
		);

		before = after + 1;
		after = s.find(' ', before);
	}

	result.push_back(
		s.substr(before)	
	);

	return result;
}

bool isPossible(vector<string> s) {
	for (int i=0; i<s.size(); i++) 
		if (s[i] != "") 
			return false;
	return true;
}

int main() {
	int N;
	cin >> N;
	cin.ignore();

	vector<vector<string>> parrotList(N);
	for (int i=0; i<N; i++) {
		string s, b;
		getline(cin, s, '\n');
		parrotList[i] = tokenization(s);
	}

	string target;
	getline(cin, target, '\n');
	vector<string> targetList = tokenization(target);

	for (int i=0, k=0; i<N; i++, k=0) {
		for (int j=0; j<targetList.size(); j++) {
			if (k == parrotList[i].size()) break;
			if (targetList[j] == "") continue;
			if (targetList[j] == parrotList[i][k]) {
				targetList[j] = "";
				k++;
			}
		}

		if (k != parrotList[i].size()) {
			cout << "Impossible";
			return 0;
		}
	}

	cout << (isPossible(targetList) ? "Possible" : "Impossible");
}