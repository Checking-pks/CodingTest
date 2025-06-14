#include <iostream>

using namespace std;

int main() {
	int lv;
	string judgment;

	cin >> lv >> judgment;

	if (judgment == "miss") 	lv *= 0;
	if (judgment == "bad")		lv *= 200;
	if (judgment == "cool")		lv *= 400;
	if (judgment == "great")	lv *= 600;
	if (judgment == "perfect")	lv *= 1000;

	cout << lv;
}