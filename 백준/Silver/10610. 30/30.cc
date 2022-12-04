#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	// 변수 선언
	int numSum = 0;
	bool isHaveZero = false;
	string numList;
	
	// input
	cin >> numList;

	// 3의 배수 확인
	for (int i=0; i<numList.length(); i++) {
		numSum += numList[i] - '0';
		if (numList[i] == '0') isHaveZero = true;
	}

	// 조건 예외 처리
	if (numSum % 3 != 0 || !isHaveZero) {
		cout << -1;
		return 0;
	}

	// 문자열 정렬
	sort(numList.begin(), numList.end(), greater<>());

	// 문자열 순회하며 확인 및 출력
	do {
		if (numList.back() == '0') {
			cout << numList;
			break;
		}
	} while (prev_permutation(numList.begin(), numList.end()));
}