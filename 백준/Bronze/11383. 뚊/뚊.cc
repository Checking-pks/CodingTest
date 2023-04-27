#include <iostream>
#include <vector>

using namespace std;

int main() {
	bool isBad = false;
	int num, length;
	cin >> num >> length;

	vector<string> str(num, "");

	for (int i=0; i<num; i++)
		cin >> str[i];

	for (int i=0; i<num; i++) {
		string nowStr;
		cin >> nowStr;

		for (int j=0; j<str[i].length(); j++) {
			if (str[i][j] != nowStr[j*2] || str[i][j] != nowStr[j*2+1]) {
				isBad = true;
				break;
			}
		}

		if (isBad) break;
	}

	cout << (isBad ? "Not " : "") << "Eyfa";
}