#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int chanceA, chanceB;
	double goalA, missA, goalB, missB;
	double resultA = 0.0, resultB = 0.0;

	vector<int> goalNum = {0, 1, 4, 6, 8, 9, 10, 12, 14, 15, 16, 18};
	vector<int> caseNum = {1, 18, 3060, 18564, 43758, 48620, 43758, 18564, 3060, 816, 153, 1};

	// input
	cin >> chanceA >> chanceB;

	// 퍼센트를 double 값으로 변환
	goalA = 0.01 * chanceA;
	goalB = 0.01 * chanceB;
	missA = 1 - goalA;
	missB = 1 - goalB;

	// 각 확률 합 구하기
	for (int i=0; i<goalNum.size(); i++) {
		resultA += pow(goalA, goalNum[i]) * pow(missA, 18 - goalNum[i]) * caseNum[i];
		resultB += pow(goalB, goalNum[i]) * pow(missB, 18 - goalNum[i]) * caseNum[i];
	}

	// 둘 다 소수가 아닌 경우를 구하여 1에서 빼기
	cout.precision(10);
	cout << 1 - resultA * resultB;
}