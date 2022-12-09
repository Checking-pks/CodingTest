#include <iostream>
#include <vector>
#include <string>

using namespace std;

string sum(vector<int> & num1List, vector<int> & num2List) {
	string result = "";
	int signValue = 0;

	// 값 더하기
	for (int i=0; i<num1List.size(); i++) {
		num1List[i] += num2List[i];
	}

	// 부호 구하기
	for (int n:num1List) {
		if (n != 0) {
			signValue = ((n > 0) ? 1 : -1);
			break;
		}
	}

	// 값 처리
	for (int i=num1List.size()-1; i>0; i--) {
		if ((signValue > 0 | num1List[i] > 0) && num1List[i] != 0) {
			num1List[i-1] += -signValue;
			num1List[i] += signValue * 10;
		}

		if (num1List[i] * signValue > 9) {
			num1List[i-1] += (num1List[i] / 10);
			num1List[i] %= 10;
		}
	}

	// string으로 변환
	for (int i=0, isFrontZero = true; i<num1List.size(); i++) {
		if (isFrontZero && num1List[i] == 0) continue;
		isFrontZero = false;

		result += to_string(num1List[i] * signValue);
	}

	// return
	if (result == "") return "0";
	return ((signValue < 0) ? "-" : "") + result;
}

int main() {
	// Variable
	int length;
	string num1, num2;
	vector<int> num1List, num2List;

	// input
	cin >> num1 >> num2;

	// Data Preprocessing
	length = ((num1.length() > num2.length()) ? num1.length() : num2.length());
	num1List = vector<int> (length, 0);
	num2List = vector<int> (length, 0);
	
	for (int i=length - 1, signValue = (num1.front() == '-' ? -1 : 1); num1.length(); i--) {
		if (num1.back() == '-') break;
		
		num1List[i] = signValue * (num1.back() - '0');
		num1.pop_back();
	}

	for (int i=length - 1, signValue = (num2.front() == '-' ? -1 : 1); num2.length(); i--) {
		if (num2.back() == '-') break;
		
		num2List[i] = signValue * (num2.back() - '0');
		num2.pop_back();
	}

	// output
	cout << sum(num1List, num2List);
}