#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string decoder(vector<int> & aList, char n, string s, char key) {
	string result = "";
	int count = aList[key-'A'];
	for (char c:s) aList[c-'A'] -= count;
	return string(count, n);
}

int main() {
	int testcase;
	cin >> testcase;

	for (int i=1; i<=testcase; i++) {
		string s, result="";
		cin >> s;

		vector<int> alphabet(26, 0);
		for (char c:s) alphabet[c-'A']++;

		result += decoder(alphabet, '0', "ZERO",  'Z');
		result += decoder(alphabet, '2', "TWO",   'W');
		result += decoder(alphabet, '4', "FOUR",  'U');
		result += decoder(alphabet, '6', "SIX",   'X');
		result += decoder(alphabet, '8', "EIGHT", 'G');
		result += decoder(alphabet, '3', "THREE", 'H');
		result += decoder(alphabet, '5', "FIVE",  'F');
		result += decoder(alphabet, '7', "SEVEN", 'V');
		result += decoder(alphabet, '9', "NINE",  'I');
		result += decoder(alphabet, '1', "ONE",   'E');

		sort(result.begin(), result.end());

		cout << "Case #" << i << ": " << result << "\n";
	}
}