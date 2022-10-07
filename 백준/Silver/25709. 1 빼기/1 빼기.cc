#include <iostream>
#include <string>

using namespace std;

int type1(int num) { return num - 1; }

int type2(int num) {
	string strNum = to_string(num);

	int idx = strNum.find("1");

	if (idx != string::npos)
		strNum.erase(idx, 1);

	if (strNum.empty())
		strNum = "0";

	return stoi(strNum);
}

int main() {
    int num, times = 0;
	cin >> num;

	while (num != 0) {
		int result1 = type1(num), result2 = type2(num);
		num = (num == result2) ? result1 : result2;
		times++;
	}

	cout << times;
}