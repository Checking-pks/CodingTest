#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

pair<int, int> numCheck(string input, string question) {
	pair<int, int> result = {0, 0};

	for (int i=0; i<input.length(); i++) {
		for (int j=0; j<question.length(); j++) {
			if (input[i] == question[j]) {
				if (i == j) result.first++;
				else result.second++;
			}
		}
	}

	return result;
}

int main() {
	int questionNum, result = 0;
	list<string> numList;
	vector<vector<int>> questionList;
	
	string numListStr = "123456789";
	
	do {
		numList.push_back(numListStr.substr(0, 3));
	} while (next_permutation(numListStr.begin(), numListStr.end()));

	numList.sort();
	numList.unique();
	
	cin >> questionNum;

	for (int i=0; i<questionNum; i++) {
		int number, strike, ball;
		cin >> number >> strike >> ball;
		questionList.push_back({number, strike, ball});
	}

	for (string nowNum:numList) {
		bool isCorrect = true;
		
		for (vector<int> nowQuestion:questionList) {
			pair<int, int> nowResult = numCheck(nowNum, to_string(nowQuestion[0]));
			
			if (nowResult.first != nowQuestion[1] || nowResult.second != nowQuestion[2]) {
				isCorrect = false;
				break;
			}
		}

		if (isCorrect) result++;
	}

	cout << result;
}