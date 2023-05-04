#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> alphabet(26, 0);
	bool isResult = false;
	int num;
	cin >> num;

	for (int i=0; i<num; i++) {
		string str;
		cin >> str;

		alphabet[str[0] - 'a']++;
	}

	for (int i=0; i<alphabet.size(); i++) {
		if (alphabet[i] >= 5) {
			cout << char('a' + i);
			isResult = true;
		}
	}

	if (!isResult) cout << "PREDAJA";
}