#include <iostream>
#include <vector>

using namespace std;

int main() {
	int length;
	string str;
	cin >> length >> str;
	
	vector<int> alphabet(26, 0);

	for (int i=0; i<length; i++)
		alphabet[str[i] - 'a']++;

	int max = 0, result = 0;

	for (int i=0; i<26; i++) {
		if (max < alphabet[i]) {
			max = alphabet[i];
			result = i;
		}
	}

	cout << char(result + 'a') << " " << max;
}