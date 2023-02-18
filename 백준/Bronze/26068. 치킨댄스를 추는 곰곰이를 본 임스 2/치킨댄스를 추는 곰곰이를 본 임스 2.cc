#include <iostream>

using namespace std;

int main() {
	int num, result = 0;
	cin >> num;

	for (int i=0; i<num; i++) {
		string str;
		cin >> str;

		if (stoi(str.substr(2)) <= 90) result++;
	}

	cout << result;
}