#include <iostream>
#include <string>

using namespace std;

int main() {
	int result = 0;
	bool isMinus = false;
    string calculation, nowNum = "";
	cin >> calculation;

	for (int i=0; i<calculation.length(); i++) {
		if (calculation[i] == '-' || calculation[i] == '+') {
			result += (isMinus) ? -stoi(nowNum) : stoi(nowNum);
			nowNum = "";

			if (calculation[i] == '-')
				isMinus = true;
		} 
		else 
			nowNum.push_back(calculation[i]);
	}

	result += (isMinus) ? -stoi(nowNum) : stoi(nowNum);

	cout << result;

	return 0;
}