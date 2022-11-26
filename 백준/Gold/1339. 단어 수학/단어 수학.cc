#include <iostream>
#include <map>
#include <list>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main() {
	map<char, int> alphabet;
	list<pair<char, int>> sortAlphabetValue;
	vector<string> words;
	
	int num, alphabetValue = 9, result = 0;
	cin >> num;

	// input
	for (int i=0; i<num; i++) {
		string nowStr;
		cin >> nowStr;

		words.push_back(nowStr);

		// alphabet에 각 char의 십의 자리 값 저장
		for (int j=0, length = nowStr.length(); j<length; j++) 
			alphabet[nowStr[j]] += pow(10, length - j - 1);
	}

	// 정렬을 위해 list로 옮김
	for (pair<char, int> value:alphabet) 
		sortAlphabetValue.push_back(value);

	// 값을 기준으로 정렬
	sortAlphabetValue.sort([](pair<char, int> a, pair<char, int> b){
		return a.second > b.second;
	});

	// 각 char마다 0~9를 재할당
	for (pair<char, int> value:sortAlphabetValue) 
		alphabet[value.first] = alphabetValue--;

	// 각 char마다 값 할당 후 합 결과 저장
	for (string nowStr:words) {
		for (int j=0, length = nowStr.length(); j<length; j++) {
			result += alphabet[nowStr[j]] * pow(10, length - j - 1);
		}
	}

	// output
	cout << result;
}