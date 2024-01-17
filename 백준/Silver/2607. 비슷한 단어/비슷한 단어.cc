#include <iostream>
#include <vector>

using namespace std;

vector<int> GetAlphabet(string s) {
	vector<int> result(26);
	for (int i=0; i<s.length(); i++)
		result[s[i]-'A']++;
	return result;
}

bool compare(string a1, string a2) {
	auto a1List = GetAlphabet(a1), a2List = GetAlphabet(a2);

	if (a1List == a2List)
		return true;

	bool isAdd=false, isDif=false;
	for (int i=0; i<a1List.size(); i++) {
		int now = a1List[i] - a2List[i];
		if (abs(now) > 1) return false;
		if (now > 0) {
			if (isAdd) return false;
			else isAdd = true;
		}
		if (now < 0) {
			if (isDif) return false;
			else isDif = true;
		}
	}

	return true;
}

int main() {
	int N, result=0;
	string target;
	cin >> N >> target;

	for (int i=1; i<N; i++) {
		string now;
		cin >> now;
		result += compare(target, now);
	}

	cout << result;
}