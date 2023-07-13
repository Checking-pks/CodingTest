#include <iostream>

using namespace std;

int main() {
	string binary;
	cin >> binary;
	
	int one = 0, zero = 0;
	char nowNum = binary.front();
	
	for (int i=1; i<binary.length(); i++) {
		if (nowNum == binary[i]) continue;

		if (nowNum == '0') zero++;
		else one++;

		nowNum = binary[i];
	}

	if (nowNum == '0') zero++;
	else one++;

	cout << min(one, zero);
}