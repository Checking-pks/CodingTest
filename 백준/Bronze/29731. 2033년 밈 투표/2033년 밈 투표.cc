#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	
	bool isResult = true;
	unordered_set<string> strList = {
		"Never gonna give you up",
		"Never gonna let you down",
		"Never gonna run around and desert you",
		"Never gonna make you cry",
		"Never gonna say goodbye",
		"Never gonna tell a lie and hurt you",
		"Never gonna stop"
	};

	for (int i=0; i<n; i++) {
		string s;
		getline(cin, s);

		if (strList.find(s) == strList.end())
			isResult = false;
	}

	cout << (isResult ? "No" : "Yes");
}