#include <iostream>

using namespace std;

int main() {
	string date;
	int N;
	cin >> date >> N;

	int day =
		stoi(date.substr(0, 4)) * 360 +
		stoi(date.substr(5, 2)) * 30 +
		stoi(date.substr(8)) + N;

	bool isDate = (day % 30 == 0);
	day -= isDate;
	
	bool isMonth = (day % 360 < 30);
	day -= isMonth * 360;
	
	cout << (day / 360) << "-";

	day %= 360;
	day += isMonth * 360;

	cout << (day / 30 < 10 ? "0" : "")
		<< (day / 30) << "-";

	day %= 30;
	day += isDate;

	cout << (day < 10 ? "0" : "")
		<< day;
}