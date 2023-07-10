#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int testcase;
	cin >> testcase;

	while (testcase--) {
		string num;
		cin >> num;

		string square = to_string(stoi(num) * stoi(num));
		square = square.substr(square.length() - num.length());
		
		cout << (square == num ? "YES\n" : "NO\n");
	}
}