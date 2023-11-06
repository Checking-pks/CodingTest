#include <iostream>

using namespace std;

int main() {
	int a, b, c, num, result=0;
	cin >> a >> b >> c >> num;

	for (int i=0; i<num; i++) {
		int now = 0;
		for (int j=0, nowA, nowB, nowC; j<3; j++) {
			cin >> nowA >> nowB >> nowC;
			now += nowA*a + nowB*b + nowC*c;
		}
		result = max(result, now);
	}

	cout << result;
}