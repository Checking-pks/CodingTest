#include <iostream>

using namespace std;

void addTime(int &r, int &sec, int t) {
	if (sec / t == 0)
		return;

	int now = sec / t;
	r += now;
	sec -= t * now;
}

int main() {
	string t;
	cin >> t;

	int sec = stoi(t.substr(0, 2)) * 60 + stoi(t.substr(3));

	if (!sec) {
		cout << 0;
		return 0;
	}
	
	int result = 1;

	if ((sec / 30) & 1) 
		sec -= 30;
	
	addTime(result, sec, 600);
	addTime(result, sec, 60);
	addTime(result, sec, 30);
	addTime(result, sec, 10);

	cout << result;
}