#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(1);
	
	int num, caseNum = 0;
	cin >> num;
	
	while (num != 0) {
		float mid = num/2.0f, sum = 0;
		
		for (int i=0, nowNum; i<num; i++) {
			cin >> nowNum;
			if (mid-1 <= i && i <= mid) sum += nowNum;
		}

		cout << "Case " << ++caseNum << ": ";
		cout << (mid != int(mid) ? sum : sum/2) << "\n";
		
		cin >> num;
	}
}