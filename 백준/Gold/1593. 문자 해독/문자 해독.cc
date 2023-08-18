#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	// variable
	int wLength, sLength, result = 0;
	string w, s;
	char frontChar;
	unordered_map<char, int> wWords, nowWords;
	
	// input
	cin >> wLength >> sLength >> w >> s;

	// init
	frontChar = s.front();

	for (int i=0; i<='z'-'a'; i++) {
		wWords[char('a' + i)] = 0;
		wWords[char('A' + i)] = 0;
		nowWords[char('a' + i)] = 0;
		nowWords[char('A' + i)] = 0;
	}

	// algorithm
	for (int i=0; i<wLength; i++) {
		wWords[w[i]]++;
		nowWords[s[i]]++;
	}

	result += (wWords == nowWords);
	
	for (int i=wLength; i<sLength; i++) {
		nowWords[frontChar]--;
		nowWords[s[i]]++;

		frontChar = s[i - wLength + 1];
		result += (wWords == nowWords);
	}

	// output
	cout << result;
}