#include <iostream>

using namespace std;

int main() {
	string s;
	int n, multiple=1, result=0;
	cin >> s >> n;

	while (s.length()) {
		char c = s.back();
		s.pop_back();

		result += multiple * 
			('A'<=c&&c<='Z' ? c-'A'+10 : c-'0');

		multiple *= n;
	}

	cout << result;
}