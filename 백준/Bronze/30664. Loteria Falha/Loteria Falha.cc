#include <iostream>

using namespace std;

const int length = 7;
const int DIVISION = 42;

int main() {
	string s;
	cin >> s;

	while (s != "0") {
		string rest = "";
		
		for (int i=0; i<s.length(); i+=length) {
			rest += s.substr(i, length);
			int nowRest = stoi(rest) % DIVISION;
			rest = to_string(nowRest);
		}

		if (rest == "0") cout << "PREMIADO\n";
		else cout << "TENTE NOVAMENTE\n";
		
		cin >> s;
	}
}