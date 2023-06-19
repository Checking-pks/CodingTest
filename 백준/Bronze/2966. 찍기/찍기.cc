#include <iostream>

using namespace std;

int main() {
	string AdrianAnswer = "ABC", BrunoAnswer = "BABC", GoranAnswer = "CCAABB", answer;

	int length, max = 0;
	int AdrianScore = 0, BrunoScore = 0, GoranScore = 0;

	cin >> length >> answer;

	for (int i=0; i<answer.length(); i++) {
		AdrianScore += (answer[i] == AdrianAnswer[i % AdrianAnswer.length()]);
		BrunoScore += (answer[i] == BrunoAnswer[i % BrunoAnswer.length()]);
		GoranScore += (answer[i] == GoranAnswer[i % GoranAnswer.length()]);
	}

	if (max < AdrianScore) max = AdrianScore;
	if (max < BrunoScore) max = BrunoScore;
	if (max < GoranScore) max = GoranScore;

	cout << max << "\n";

	if (max == AdrianScore) cout << "Adrian" << "\n";
	if (max == BrunoScore) cout << "Bruno" << "\n";
	if (max == GoranScore) cout << "Goran" << "\n";
}