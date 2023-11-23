#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string s, result;
	cin >> s;

	result = string(s.length(), 'z');

	for (int i=1; i<s.length()-1; i++) {
		for (int j=i+1; j<s.length(); j++) {
			string part1 = s.substr(0, i);
			string part2 = s.substr(i, j-i);
			string part3 = s.substr(j);

			reverse(part1.begin(), part1.end());
			reverse(part2.begin(), part2.end());
			reverse(part3.begin(), part3.end());

			result = min(result, part1 + part2 + part3);
		}
	}

	cout << result;
}