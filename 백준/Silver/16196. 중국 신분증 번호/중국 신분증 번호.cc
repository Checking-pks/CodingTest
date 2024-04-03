#include <iostream>

using namespace std;

bool isAreaCode(string idAreaCode) {
	int areaCodeCount;
	cin >> areaCodeCount;

	bool result = false;
	for (int i=0; i<areaCodeCount; i++) {
		string nowCode;
		cin >> nowCode;

		if (nowCode == idAreaCode)
			result = true;
	}

	return result;
}

bool isLeapYear(int year) {
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return true;
			}
		} else {
			return true;
		}
	}

	return false;
}

bool isCorrectBirth(string birthCode) {
	int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	int year 	= stoi(birthCode.substr(0, 4));
	int month 	= stoi(birthCode.substr(4, 2));
	int day 	= stoi(birthCode.substr(6));

	if (year < 1900 || year > 2011) 
		return false;
	if (month < 1 || month > 12) 
		return false;
	if (day < 1 || day > days[month] + (month == 2 && isLeapYear(year)))
		return false;

	return true;
}

char getGenderCode(string idCode) {
	char checkSumCode;
	int genderCode = stoi(idCode.substr(14, 3));
	int sum = 0;
	for (int i=0; i<17; i++) 
		sum += (idCode[i] - '0') * (1 << (17 - i));

	for (int i=0; i<=10; i++) {
		if ((sum + i) % 11 == 1) {
			if (i == 10)
				checkSumCode = 'X';
			else
				checkSumCode = char(i + '0');
			break;
		}
	}

	if (checkSumCode != idCode.back())
		return 'I';
	else if (genderCode == 0)
		return 'I';
	else
		return (genderCode & 1 ? 'M' : 'F');
}

int main() {
	string idNumber;
	cin >> idNumber;

	char result = 'I';
	string areaCode = idNumber.substr(0, 6);
	string birthCode = idNumber.substr(6, 8);

	if (isAreaCode(areaCode)) {
		if (isCorrectBirth(birthCode)) {
			result = getGenderCode(idNumber);
		}
	}

	cout << result;
}