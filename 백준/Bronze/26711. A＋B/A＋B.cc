#include <iostream>

using namespace std;

int main() {
	// input
	int now = 0, l = 1000000000;
	string n1, n2, result = "";
	cin >> n1 >> n2;

	while (n1.length() % 9) n1 = '0' + n1;
	while (n2.length() % 9) n2 = '0' + n2;

	while (n1.length() < n2.length()) n1 = '0' + n1;
	while (n1.length() > n2.length()) n2 = '0' + n2;

	for (int i=n1.length() - 9; i>=0; i -= 9) {
		now += stoi(n1.substr(i, 9)) + stoi(n2.substr(i, 9));
		string nowStr = to_string(now % l);
		now /= l;

		while ((now || i>0) && nowStr.length() < 9)
			nowStr = '0' + nowStr;
		
		result = nowStr + result;
	}

	if (now) result = to_string(now) + result;

	cout << result;
}