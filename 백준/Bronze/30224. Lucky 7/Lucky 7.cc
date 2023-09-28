#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	
	bool isContain7, isDivisible7;
	isContain7 = (to_string(num).find('7') != string::npos);
	isDivisible7 = (num%7==0);

	if (isContain7 && isDivisible7) cout << 3;
	else if (isContain7) cout << 2;
	else if (isDivisible7) cout << 1;
	else cout << 0;
}