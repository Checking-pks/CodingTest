#include <iostream>

using namespace std;

int main() {
	// 한달 간 각 회사의 요금
	int xPriceMonth, yPriceMonth;

	// x 회사의 리터 당 요금
	int xPricePerLiter;

	// y 회사의 기본 요금, 상한 용량, 추가 요금
	int yPriceBasic, yLimitBasic, yPriceAdded;

	// 한 달 수도 사용량
	int useWaterPerMonth;

	// input
	cin >> xPricePerLiter;
	cin >> yPriceBasic >> yLimitBasic >> yPriceAdded;
	cin >> useWaterPerMonth;

	// x 회사 요금 = 리터 당 요금 * 사용량
	xPriceMonth = xPricePerLiter * useWaterPerMonth;
	
	// y 회사 요금 = 기본 요금 + 초과 용량 * 추가 요금
	yPriceMonth = yPriceBasic + (useWaterPerMonth > yLimitBasic) * (useWaterPerMonth - yLimitBasic) * yPriceAdded;

	// 둘 중 낮은 가격 출력
	cout << min(xPriceMonth, yPriceMonth);
}