#include <iostream>
#include <string>

using namespace std;

int main() {
	string nowStr;

	while (true) {
		getline(cin, nowStr);

		if (nowStr == "END") break;

		for (int i=nowStr.size() - 1; i>= 0; i--) 
			cout << nowStr[i];

		cout << "\n";
	}
}