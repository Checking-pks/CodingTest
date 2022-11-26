#include <iostream>
#include <map>
#include <list>
#include <string>
#include <cmath>

using namespace std;

int main() {
	map<char, int> alphabet;
	list<pair<char, int>> sortAlphabetValue;
	
	int num, alphabetValue = 9, result = 0;
	cin >> num;

	// input
	for (int i=0; i<num; i++) {
		string nowStr;
		cin >> nowStr;

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

	// 값이 큰 순으로 0~9를 곱하여 result 더함
	for (pair<char, int> value:sortAlphabetValue) 
		result += value.second * alphabetValue--;

	// output
	cout << result;
}