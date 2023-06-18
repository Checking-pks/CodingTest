#include <iostream>

using namespace std;

string to_lower(string str) {
	string result = "";

	for (int i=0; i<str.length(); i++)
		result.push_back(tolower(str[i]));

	return result;
}

int main() {
	int num;
	cin >> num;

	while (num != 0) {
		string minStr(20, 'Z');
		for (int i=0; i<num; i++) {
			string nowStr;
			cin >> nowStr;

			if (to_lower(minStr) > to_lower(nowStr))
				minStr = nowStr;
		}

		cout << minStr << "\n";
		cin >> num;
	}
}