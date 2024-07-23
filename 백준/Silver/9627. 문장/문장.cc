#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<int, string> numberWords = {
		{1, "one"},        {2, "two"},       {3, "three"},     {4, "four"},
		{5, "five"},       {6, "six"},       {7, "seven"},     {8, "eight"},
		{9, "nine"},       {10, "ten"},      {11, "eleven"},   {12, "twelve"},
		{13, "thirteen"},  {14, "fourteen"}, {15, "fifteen"},  {16, "sixteen"},
		{17, "seventeen"}, {18, "eighteen"}, {19, "nineteen"}, {20, "twenty"},
		{30, "thirty"},    {40, "forty"},    {50, "fifty"},    {60, "sixty"},
		{70, "seventy"},   {80, "eighty"},   {90, "ninety"},   {100, "hundred"}};

string getWord(int num) {
	string result = "";
	if (num > 99) {
		result = numberWords[num / 100] + numberWords[100];
		num %= 100;
	}

	if (num) {
		if (numberWords.find(num) != numberWords.end()) {
			result += numberWords[num];
		} else {
			result += numberWords[num / 10 * 10];
			result += numberWords[num % 10];
		}
	}

	return result;
}

string getLengthWord(int minLength) {
	for (int i = minLength + 1; true; i++) {
		string nowWord = getWord(i);

		if (minLength + nowWord.length() == i)
			return nowWord;
	}
}

int main() {
	int N, minLength = 0;
	cin >> N;

	vector<string> wordList(N);
	for (int i = 0; i < N; i++) {
		cin >> wordList[i];
		minLength += wordList[i].length();
	}

	for (int i = 0; i < N; i++) {
		if (wordList[i] != "$") {
			cout << wordList[i] << " ";
			continue;
		}

		cout << getLengthWord(minLength - 1) << " ";
	}
}