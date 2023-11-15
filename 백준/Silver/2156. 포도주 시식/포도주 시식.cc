#include <iostream>
#include <vector>

using namespace std;


int main() {
	int n;
	cin >> n;

	if (n<3) {
		int result=0;
		for (int i=0, now; i<n; i++) {
			cin >> now;
			result += now;
		}
		cout << result;
		return 0;
	}

	int a, b, c;
	cin >> a >> b >> c;

	vector<int> field = {0, a, b, c, a+b, a+c, b+c};
	
	for (int i=3, now; i<n; i++) {
		cin >> now;

		vector<int> nowField(7, 0);

		nowField[0] = max(field[0], field[1]);
		nowField[1] = max(field[2], field[4]);
		nowField[2] = max(field[3], field[5]);
		nowField[3] = max(field[1], field[4]) + now;
		nowField[4] = field[6];
		nowField[5] = max(field[2], field[4]) + now;
		nowField[6] = max(field[3], field[5]) + now;

		field = nowField;
	}

	int result=0;
	for (int i=0; i<field.size(); i++) {
		result = max(result, field[i]);
	}

	cout << result;
}