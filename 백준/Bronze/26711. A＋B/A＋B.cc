#include <iostream>

using namespace std;

int main() {
	int now = 0, boundary = 1000000000;
	string n1, n2, result = "";
	cin >> n1 >> n2;

	int length = max(n1.length(), n2.length());
	while (length%9) length++;

	while (n1.length() < length) n1 = '0' + n1;
	while (n2.length() < length) n2 = '0' + n2;

	for (int i=n1.length() - 9; i>=0; i -= 9) {
		now += stoi(n1.substr(i, 9)) + stoi(n2.substr(i, 9));
		string nowStr = to_string(now % boundary);
		now /= boundary;

		while ((now || i>0) && nowStr.length() < 9)
			nowStr = '0' + nowStr;
		
		result = nowStr + result;
	}

	if (now) result = to_string(now) + result;

	cout << result;
}