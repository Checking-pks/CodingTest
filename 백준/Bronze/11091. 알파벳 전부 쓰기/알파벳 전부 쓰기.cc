#include <iostream>
#include <vector>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	cin.ignore();
	
	while (testcase--) {
		string str, result = "";
		getline(cin, str);

		vector<bool> alphabet(26, false);
		
		for (int i=0; i<str.length(); i++) {
			if ('a' <= str[i] && str[i] <= 'z')
				alphabet[str[i] - 'a'] = true;

			if ('A' <= str[i] && str[i] <= 'Z')
				alphabet[str[i] - 'A'] = true;
		}

		for (int i=0; i<alphabet.size(); i++) 
			if (!alphabet[i]) 
				result += char(i + 'a');

		if (result.size()) cout << "missing " << result << "\n";
		else cout << "pangram\n";
	}
}