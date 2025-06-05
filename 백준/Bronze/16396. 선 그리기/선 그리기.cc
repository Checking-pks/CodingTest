#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num, result = 0;
	cin >> num;

	vector<bool> boolList(10001, false);

	for (int i = 0, a, b; i < num; i++) {
		cin >> a >> b;
		for (int i = a + 1; i <= b; i++)
			boolList[i] = true;
	}

	for (int i = 1; i <= 10000; i++)
		result += boolList[i];

	cout << result;
}