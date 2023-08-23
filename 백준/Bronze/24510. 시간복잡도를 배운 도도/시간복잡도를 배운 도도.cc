#include <iostream>

using namespace std;

int main() {
	int testcase, max = 0;
	cin >> testcase;
	
	while (testcase--) {
		string str;
		cin >> str;

		int now = 0;
		
		for (int i=0; i<str.length(); i++) {
			now += (str[i] == 'f' && str.substr(i, 3) == "for");
			now += (str[i] == 'w' && str.substr(i, 5) == "while");
		}

		if (max < now) max = now;
	}

	cout << max;
}