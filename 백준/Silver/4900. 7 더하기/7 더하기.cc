#include <iostream>
#include <map>

using namespace std;

map<string, int> digitalNum = {{"063", 0}, {"010", 1}, {"093", 2}, {"079", 3}, {"106", 4}, {"103", 5}, {"119", 6}, {"011", 7}, {"127", 8}, {"107", 9}};

map<int, string> numDigital = {{0, "063"}, {1, "010"}, {2, "093"}, {3, "079"}, {4, "106"}, {5, "103"}, {6, "119"}, {7, "011"}, {8, "127"}, {9, "107"}};

int getNum(string s) {
	int result = 0;
	for (int i=0; i<s.length(); i+=3) {
		string now = s.substr(i, 3);
		result *= 10;
		result += digitalNum[now];
	}
	return result;
}

string getDigit(int n) {
	string result = "";
	while (n) {
		result = numDigital[n % 10] + result;
		n /= 10;
	}
	return result;
}

int main() {
	string s;
	cin >> s;

	while (s != "BYE") {
		int A = 0, B = 0;
		int plusPos = s.find('+');

		string s1 = s.substr(0, plusPos);
		string s2 = s.substr(plusPos + 1);
		s2.pop_back();

		A = getNum(s1), B = getNum(s2);

		cout << s << getDigit(A + B) << "\n";
		cin >> s;
	}
}