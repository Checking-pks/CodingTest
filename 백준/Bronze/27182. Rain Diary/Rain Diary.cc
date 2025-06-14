#include <iostream>

using namespace std;

int main() {
	int now, before2week;
	cin >> now >> before2week;
	
	now -= 7;
	before2week += 7;

	cout << (now > 0 ? now : before2week);
}