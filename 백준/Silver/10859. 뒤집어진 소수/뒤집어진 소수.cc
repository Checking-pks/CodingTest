#include <iostream>
#include <map>

using namespace std;

map<char, char> fliper = {{'0', '0'}, {'1', '1'}, {'2', '2'}, {'5', '5'}, {'6', '9'}, {'8', '8'}, {'9', '6'}};

string getFlip(string s) {
	string result = "";

	for (int i=s.length()-1; i>=0; i--) {
		switch (s[i]) {
			case '3': case '4': case '7':
				return "";
			default :
				result += fliper[s[i]];
		}
	}

	return result;
}

bool isPrime(long long n) {
	if (n == 1) return false;
	
	for (long long i=2; i*i <=n; i++) 
		if (n % i == 0)
			return false;

	return true;
}

int main() {
	string s;
	cin >> s;

	if (!isPrime(stoll(s))) {
		cout << "no";
		return 0;
	}

	string flipStr = getFlip(s);
	if (flipStr.empty()) {
		cout << "no";
		return 0;
	}

	cout << (isPrime(stoll(flipStr)) ? "yes" : "no");
}