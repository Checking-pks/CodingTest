#include <iostream>

using namespace std;

string bigNumMultiplication(string num1, string num2) {
	// 부호 설정하기
	bool isMinus = false;
	
	if (num1.front() == '-') {
		isMinus = !isMinus;
		num1.erase(0, 1);
	}
	
	if (num2.front() == '-') {
		isMinus = !isMinus;
		num2.erase(0, 1);
	}

	// 곱 연산 결과 저장 문자열
	string mulResult(num1.size() + num2.size(), '0');

	// 곱 연산
	for (int i = num2.length() - 1; i >= 0; i--) {
		for (int j = num1.length() - 1; j >= 0; j--) {
			// 현재 곱 결과 저장 (무조건 2칸 차지)
			string nowMul = to_string((num2[i] - '0') * (num1[j] - '0'));
			if (nowMul.length() == 1) nowMul = '0' + nowMul;

			// 곱 결과 처리
			for (int k = 1, isCarry = 0; k >= 0; k--) {
				// 현재 값, 곱 결과를 더한 뒤 처리
				int nowNum = (mulResult[i + j + k] - '0') + (nowMul[k] - '0');
				mulResult[i + j + k] = nowNum % 10 + '0';

				// 올림 처리
				isCarry = nowNum / 10;

				for (int l = -1; isCarry; l--) {
					nowNum = (mulResult[i + j + k + l] - '0') + isCarry;
					isCarry = nowNum / 10;
					mulResult[i + j + k + l] = nowNum % 10 + '0';
				}
			}
		}
	}

	// 결과 처리
	string result = (isMinus ? "-" : "");

	for (int i = 0, isFrontZero = 1; i<mulResult.length(); i++) {
		if (isFrontZero && mulResult[i] == '0') continue;

		isFrontZero = 0;
		result.push_back(mulResult[i]);
	}

	return result;
}

int main() {
  	string result = "1";
	int num;
	cin >> num;

	for (int i=2; i<=num; i++) {
		result = bigNumMultiplication(result, to_string(i));
	}

	cout << result;
}